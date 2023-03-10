/*
 * Copyright © 2012,2017  Google, Inc.
 * Copyright © 2021 Behdad Esfahbod
 *
 *  This is part of HarfBuzz, a text shaping library.
 *
 * Permission is hereby granted, without written agreement and without
 * license or royalty fees, to use, copy, modify, and distribute this
 * software and its documentation for any purpose, provided that the
 * above copyright notice and the following two paragraphs appear in
 * all copies of this software.
 *
 * IN NO EVENT SHALL THE COPYRIGHT HOLDER BE LIABLE TO ANY PARTY FOR
 * DIRECT, INDIRECT, SPECIAL, INCIDENTAL, OR CONSEQUENTIAL DAMAGES
 * ARISING OUT OF THE USE OF THIS SOFTWARE AND ITS DOCUMENTATION, EVEN
 * IF THE COPYRIGHT HOLDER HAS BEEN ADVISED OF THE POSSIBILITY OF SUCH
 * DAMAGE.
 *
 * THE COPYRIGHT HOLDER SPECIFICALLY DISCLAIMS ANY WARRANTIES, INCLUDING,
 * BUT NOT LIMITED TO, THE IMPLIED WARRANTIES OF MERCHANTABILITY AND
 * FITNESS FOR A PARTICULAR PURPOSE.  THE SOFTWARE PROVIDED HEREUNDER IS
 * ON AN "AS IS" BASIS, AND THE COPYRIGHT HOLDER HAS NO OBLIGATION TO
 * PROVIDE MAINTENANCE, SUPPORT, UPDATES, ENHANCEMENTS, OR MODIFICATIONS.
 *
 * Google Author(s): Behdad Esfahbod
 */

#ifndef HB_BIT_PAGE_HH
#define HB_BIT_PAGE_HH

#include "hb.hh"


/* Compiler-assisted vectorization. */

/* Type behaving similar to vectorized vars defined using __attribute__((vector_size(...))),
 * basically a fixed-size bitset. */
template <typename elt_t, unsigned int byte_size>
struct hb_vector_size_t
{
  elt_t& operator [] (unsigned int i) { return v[i]; }
  const elt_t& operator [] (unsigned int i) const { return v[i]; }

  void clear (unsigned char v = 0) { hb_memset (this, v, sizeof (*this)); }

  template <typename Op>
  hb_vector_size_t process (const Op& op) const
  {
    hb_vector_size_t r;
    for (unsigned int i = 0; i < ARRAY_LENGTH (v); i++)
      r.v[i] = op (v[i]);
    return r;
  }
  template <typename Op>
  hb_vector_size_t process (const Op& op, const hb_vector_size_t &o) const
  {
    hb_vector_size_t r;
    for (unsigned int i = 0; i < ARRAY_LENGTH (v); i++)
      r.v[i] = op (v[i], o.v[i]);
    return r;
  }
  hb_vector_size_t operator | (const hb_vector_size_t &o) const
  { return process (hb_bitwise_or, o); }
  hb_vector_size_t operator & (const hb_vector_size_t &o) const
  { return process (hb_bitwise_and, o); }
  hb_vector_size_t operator ^ (const hb_vector_size_t &o) const
  { return process (hb_bitwise_xor, o); }
  hb_vector_size_t operator ~ () const
  { return process (hb_bitwise_neg); }

  hb_array_t<const elt_t> iter () const
  { return hb_array (v); }

  private:
  static_assert (0 == byte_size % sizeof (elt_t), "");
  elt_t v[byte_size / sizeof (elt_t)];
};


struct hb_bit_page_t
{
  void init0 () { v.clear (); }
  void init1 () { v.clear (0xFF); }

  constexpr unsigned len () const
  { return ARRAY_LENGTH_CONST (v); }

  bool is_empty () const
  {
    return
    + hb_iter (v)
    | hb_none
    ;
  }
  uint32_t hash () const
  {
    return
    + hb_iter (v)
    | hb_reduce ([] (uint32_t h, const elt_t &_) { return h * 31 + hb_hash (_); }, (uint32_t) 0u)
    ;
  }

  void add (hb_codepoint_t g) { elt (g) |= mask (g); }
  void del (hb_codepoint_t g) { elt (g) &= ~mask (g); }
  void set (hb_codepoint_t g, bool value) { if (value) add (g); else del (g); }
  bool get (hb_codepoint_t g) const { return elt (g) & mask (g); }

  void add_range (hb_codepoint_t a, hb_codepoint_t b)
  {
    elt_t *la = &elt (a);
    elt_t *lb = &elt (b);
    if (la == lb)
      *la |= (mask (b) << 1) - mask(a);
    else
    {
      *la |= ~(mask (a) - 1);
      la++;

      hb_memset (la, 0xff, (char *) lb - (char *) la);

      *lb |= ((mask (b) << 1) - 1);
    }
  }
  void del_range (hb_codepoint_t a, hb_codepoint_t b)
  {
    elt_t *la = &elt (a);
    elt_t *lb = &elt (b);
    if (la == lb)
      *la &= ~((mask (b) << 1) - mask(a));
    else
    {
      *la &= mask (a) - 1;
      la++;

      hb_memset (la, 0, (char *) lb - (char *) la);

      *lb &= ~((mask (b) << 1) - 1);
    }
  }
  void set_range (hb_codepoint_t a, hb_codepoint_t b, bool v)
  { if (v) add_range (a, b); else del_range (a, b); }


  // Writes out page values to the array p. Returns the number of values
  // written. At most size codepoints will be written.
  unsigned int write (uint32_t        base,
		      unsigned int    start_value,
		      hb_codepoint_t *p,
		      unsigned int    size) const
  {
    unsigned int start_v = start_value / ELT_BITS;
    unsigned int start_bit = start_value & ELT_MASK;
    unsigned int count = 0;
    for (unsigned i = start_v; i < len () && count < size; i++)
    {
      elt_t bits = v[i];
      uint32_t v_base = base | (i * ELT_BITS);
      for (unsigned int j = start_bit; j < ELT_BITS && count < size; j++)
      {
	if ((elt_t(1) << j) & bits) {
	  *p++ = v_base | j;
	  count++;
	}
      }
      start_bit = 0;
    }
    return count;
  }

  // Writes out the values NOT in this page to the array p. Returns the
  // number of values written. At most size codepoints will be written.
  // Returns the number of codepoints written. next_value holds the next value
  // that should be written (if not present in this page). This is used to fill
  // any missing value gaps between this page and the previous page, if any.
  // next_value is updated to one more than the last value present in this page.
  unsigned int write_inverted (uint32_t        base,
			       unsigned int    start_value,
			       hb_codepoint_t *p,
			       unsigned int    size,
			       hb_codepoint_t *next_value) const
  {
    unsigned int start_v = start_value / ELT_BITS;
    unsigned int start_bit = start_value & ELT_MASK;
    unsigned int count = 0;
    for (unsigned i = start_v; i < len () && count < size; i++)
    {
      elt_t bits = v[i];
      uint32_t v_offset = i * ELT_BITS;
      for (unsigned int j = start_bit; j < ELT_BITS && count < size; j++)
      {
	if ((elt_t(1) << j) & bits)
	{
	  hb_codepoint_t value = base | v_offset | j;
	  // Emit all the missing values from next_value up to value - 1.
	  for (hb_codepoint_t k = *next_value; k < value && count < size; k++)
	  {
	    *p++ = k;
	    count++;
	  }
	  // Skip over this value;
	  *next_value = value + 1;
	}
      }
      start_bit = 0;
    }
    return count;
  }

  bool is_equal (const hb_bit_page_t &other) const
  {
    for (unsigned i = 0; i < len (); i++)
      if (v[i] != other.v[i])
	return false;
    return true;
  }
  bool is_subset (const hb_bit_page_t &larger_page) const
  {
    for (unsigned i = 0; i < len (); i++)
      if (~larger_page.v[i] & v[i])
	return false;
    return true;
  }

  unsigned int get_population () const
  {
    return
    + hb_iter (v)
    | hb_reduce ([] (unsigned pop, const elt_t &_) { return pop + hb_popcount (_); }, 0u)
    ;
  }

  bool next (hb_codepoint_t *codepoint) const
  {
    unsigned int m = (*codepoint + 1) & MASK;
    if (!m)
    {
      *codepoint = INVALID;
      return false;
    }
    unsigned int i = m / ELT_BITS;
    unsigned int j = m & ELT_MASK;

    const elt_t vv = v[i] & ~((elt_t (1) << j) - 1);
    for (const elt_t *p = &vv; i < len (); p = &v[++i])
      if (*p)
      {
	*codepoint = i * ELT_BITS + elt_get_min (*p);
	return true;
      }

    *codepoint = INVALID;
    return false;
  }
  bool previous (hb_codepoint_t *codepoint) const
  {
    unsigned int m = (*codepoint - 1) & MASK;
    if (m == MASK)
    {
      *codepoint = INVALID;
      return false;
    }
    unsigned int i = m / ELT_BITS;
    unsigned int j = m & ELT_MASK;

    /* Fancy mask to avoid shifting by elt_t bitsize, which is undefined. */
    const elt_t mask = j < 8 * sizeof (elt_t) - 1 ?
		       ((elt_t (1) << (j + 1)) - 1) :
		       (elt_t) -1;
    const elt_t vv = v[i] & mask;
    const elt_t *p = &vv;
    while (true)
    {
      if (*p)
      {
	*codepoint = i * ELT_BITS + elt_get_max (*p);
	return true;
      }
      if ((int) i <= 0) break;
      p = &v[--i];
    }

    *codepoint = INVALID;
    return false;
  }
  hb_codepoint_t get_min () const
  {
    for (unsigned int i = 0; i < len (); i++)
      if (v[i])
	return i * ELT_BITS + elt_get_min (v[i]);
    return INVALID;
  }
  hb_codepoint_t get_max () const
  {
    for (int i = len () - 1; i >= 0; i--)
      if (v[i])
	return i * ELT_BITS + elt_get_max (v[i]);
    return 0;
  }

  static constexpr hb_codepoint_t INVALID = HB_SET_VALUE_INVALID;

  typedef unsigned long long elt_t;
  static constexpr unsigned PAGE_BITS = 512;
  static_assert ((PAGE_BITS & ((PAGE_BITS) - 1)) == 0, "");
  static constexpr unsigned PAGE_BITS_LOG_2 = 9;
  static_assert (1 << PAGE_BITS_LOG_2 == PAGE_BITS, "");
  static constexpr unsigned PAGE_BITMASK = PAGE_BITS - 1;

  static unsigned int elt_get_min (const elt_t &elt) { return hb_ctz (elt); }
  static unsigned int elt_get_max (const elt_t &elt) { return hb_bit_storage (elt) - 1; }

  typedef hb_vector_size_t<elt_t, PAGE_BITS / 8> vector_t;

  static constexpr unsigned ELT_BITS = sizeof (elt_t) * 8;
  static constexpr unsigned ELT_MASK = ELT_BITS - 1;

  static constexpr unsigned BITS = sizeof (vector_t) * 8;
  static constexpr unsigned MASK = BITS - 1;
  static_assert ((unsigned) PAGE_BITS == (unsigned) BITS, "");

  elt_t &elt (hb_codepoint_t g) { return v[(g & MASK) / ELT_BITS]; }
  const elt_t& elt (hb_codepoint_t g) const { return v[(g & MASK) / ELT_BITS]; }
  static constexpr elt_t mask (hb_codepoint_t g) { return elt_t (1) << (g & ELT_MASK); }

  vector_t v;
};
static_assert (hb_bit_page_t::PAGE_BITS == sizeof (hb_bit_page_t) * 8, "");


#endif /* HB_BIT_PAGE_HH */
