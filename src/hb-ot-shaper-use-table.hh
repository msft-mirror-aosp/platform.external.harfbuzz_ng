/* == Start of generated table == */
/*
 * The following table is generated by running:
 *
 *   ./gen-use-table.py IndicSyllabicCategory.txt IndicPositionalCategory.txt ArabicShaping.txt DerivedCoreProperties.txt UnicodeData.txt Blocks.txt Scripts.txt IndicSyllabicCategory-Additional.txt IndicPositionalCategory-Additional.txt
 *
 * on files with these headers:
 *
 * # IndicSyllabicCategory-15.0.0.txt
 * # Date: 2022-05-26, 02:18:00 GMT [KW, RP]
 * # IndicPositionalCategory-15.0.0.txt
 * # Date: 2022-05-26, 02:18:00 GMT [KW, RP]
 * # ArabicShaping-15.0.0.txt
 * # Date: 2022-02-14, 18:50:00 GMT [KW, RP]
 * # DerivedCoreProperties-15.0.0.txt
 * # Date: 2022-08-05, 22:17:05 GMT
 * # Blocks-15.0.0.txt
 * # Date: 2022-01-28, 20:58:00 GMT [KW]
 * # Scripts-15.0.0.txt
 * # Date: 2022-04-26, 23:15:02 GMT
 * # Override values For Indic_Syllabic_Category
 * # Not derivable
 * # Initial version based on Unicode 7.0 by Andrew Glass 2014-03-17
 * # Updated for Unicode 10.0 by Andrew Glass 2017-07-25
 * # Updated for Unicode 12.1 by Andrew Glass 2019-05-24
 * # Updated for Unicode 13.0 by Andrew Glass 2020-07-28
 * # Updated for Unicode 14.0 by Andrew Glass 2021-09-25
 * # Updated for Unicode 15.0 by Andrew Glass 2022-09-16
 * # Override values For Indic_Positional_Category
 * # Not derivable
 * # Initial version based on Unicode 7.0 by Andrew Glass 2014-03-17
 * # Updated for Unicode 10.0 by Andrew Glass 2017-07-25
 * # Ammended for Unicode 10.0 by Andrew Glass 2018-09-21
 * # Updated for L2/19-083    by Andrew Glass 2019-05-06
 * # Updated for Unicode 12.1 by Andrew Glass 2019-05-30
 * # Updated for Unicode 13.0 by Andrew Glass 2020-07-28
 * # Updated for Unicode 14.0 by Andrew Glass 2021-09-28
 * # Updated for Unicode 15.0 by Andrew Glass 2022-09-16
 * UnicodeData.txt does not have a header.
 */

#ifndef HB_OT_SHAPER_USE_TABLE_HH
#define HB_OT_SHAPER_USE_TABLE_HH

#include "hb.hh"

#include "hb-ot-shaper-use-machine.hh"

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wunused-macros"
#define B	USE(B)	/* BASE */
#define CGJ	USE(CGJ)	/* CGJ */
#define CS	USE(CS)	/* CONS_WITH_STACKER */
#define G	USE(G)	/* HIEROGLYPH */
#define GB	USE(GB)	/* BASE_OTHER */
#define H	USE(H)	/* HALANT */
#define HN	USE(HN)	/* HALANT_NUM */
#define HVM	USE(HVM)	/* HALANT_OR_VOWEL_MODIFIER */
#define IS	USE(IS)	/* INVISIBLE_STACKER */
#define J	USE(J)	/* HIEROGLYPH_JOINER */
#define N	USE(N)	/* BASE_NUM */
#define O	USE(O)	/* OTHER */
#define R	USE(R)	/* REPHA */
#define SB	USE(SB)	/* HIEROGLYPH_SEGMENT_BEGIN */
#define SE	USE(SE)	/* HIEROGLYPH_SEGMENT_END */
#define SUB	USE(SUB)	/* CONS_SUB */
#define Sk	USE(Sk)	/* SAKOT */
#define WJ	USE(WJ)	/* Word_Joiner */
#define ZWNJ	USE(ZWNJ)	/* ZWNJ */
#define CMAbv	USE(CMAbv)
#define CMBlw	USE(CMBlw)
#define FAbv	USE(FAbv)
#define FBlw	USE(FBlw)
#define FPst	USE(FPst)
#define FMAbv	USE(FMAbv)
#define FMBlw	USE(FMBlw)
#define FMPst	USE(FMPst)
#define MAbv	USE(MAbv)
#define MBlw	USE(MBlw)
#define MPst	USE(MPst)
#define MPre	USE(MPre)
#define SMAbv	USE(SMAbv)
#define SMBlw	USE(SMBlw)
#define VAbv	USE(VAbv)
#define VBlw	USE(VBlw)
#define VPst	USE(VPst)
#define VPre	USE(VPre)
#define VMAbv	USE(VMAbv)
#define VMBlw	USE(VMBlw)
#define VMPst	USE(VMPst)
#define VMPre	USE(VMPre)
#pragma GCC diagnostic pop

static const uint8_t
hb_use_u8[3141] =
{
     16,   50,   51,   51,   51,   52,   51,   83,  118,  131,   51,   57,   58,  179,  195,   61,
     51,   51,   51,   51,   51,   51,   51,   51,   51,   51,   51,   51,   51,   51,   51,   51,
     51,   51,   51,   51,   51,   51,   51,   51,   51,   51,   51,   51,   51,   51,   51,   51,
     51,   51,   51,   51,   51,   51,   51,   51,   51,   51,   51,   51,   51,   51,   51,   51,
     51,   51,   51,   51,   51,   51,   51,   51,   51,   51,   51,   51,   51,   51,   51,   51,
     51,   51,   51,   51,   51,   51,   51,   51,   51,   51,   51,   51,   51,   51,   51,   51,
     51,   51,   51,   51,   51,   51,   51,   51,   51,   51,   51,   51,   51,   51,   51,   51,
     14,    0,    1,    2,    2,    2,    2,    3,    2,    2,    2,    2,    2,    4,    2,    2,
      5,    6,    2,    7,    8,    9,   10,   11,   12,   13,   14,   15,   16,    2,    2,   17,
     18,   19,   20,    2,    2,    2,    2,    2,    2,    2,    2,    2,    2,    2,    2,   21,
     22,   23,   24,   25,   26,   27,   28,   29,   30,   31,   32,    2,   33,    2,    2,    2,
      2,   34,   35,    2,    2,    2,    2,    2,    2,    2,    2,    2,   36,    2,    2,    2,
      2,    2,    2,    2,    2,    2,    2,    2,    2,    2,    2,   37,    2,    2,    2,    2,
      2,    2,    2,    2,    2,    2,    2,    2,    2,    2,    2,    2,    2,    2,    2,    2,
      2,    2,    2,    2,    2,    2,    2,    2,    2,    2,    2,    2,    2,    2,    2,    2,
      2,    2,    2,    2,    2,    2,    2,    2,    2,    2,    2,    2,    2,    2,    2,    2,
      2,   38,   39,   40,   41,   42,   43,    2,   44,    2,    2,    2,    2,    2,    2,    2,
      2,    2,    2,    2,    2,    2,    2,    2,    2,    2,    2,    2,    2,    2,    2,    2,
      2,    2,    2,    2,    2,    2,    2,    2,    2,    2,    2,    2,    2,   45,   46,    2,
     47,    2,    2,    2,    2,    2,    2,    2,    2,    2,    2,   48,   49,    2,    2,    2,
      2,    2,    2,    2,    2,   50,   51,    2,   52,    2,    2,   53,    2,    2,   54,   55,
     56,   57,   58,   59,   60,   61,   62,   63,    2,   64,   65,    2,   66,   67,   68,   69,
      2,   70,    2,   71,   72,   73,   74,    2,    2,   75,   76,   77,   78,    2,   79,   80,
      2,   81,   81,   81,   81,   81,   81,   81,   81,   82,    2,    2,    2,    2,    2,    2,
      2,    2,    2,    2,    2,    2,    2,    2,    2,    2,    2,    2,    2,    2,    2,    2,
      2,    2,    2,    2,    2,    2,    2,    2,    2,    2,    2,    2,    2,    2,    2,    2,
      2,    2,    2,    2,    2,    2,   83,   84,    2,    2,    2,    2,    2,    2,    2,   85,
     86,    2,    2,    2,    2,    2,    2,    2,    2,    2,    2,    2,    2,    2,    2,    2,
      2,    2,    2,    2,    2,    2,    2,   81,   81,   81,   87,    2,    2,    2,    2,    2,
      2,    2,    2,    2,    2,    2,    2,    2,    2,    2,    2,    2,    2,    2,    2,    2,
      2,    2,    2,    2,    2,    2,    2,    2,    2,   88,   89,    2,    2,    2,    2,    2,
      2,    2,    2,   90,    2,    2,    2,    2,    2,    2,    2,    2,    2,    2,    2,    2,
      2,    2,    2,    2,    2,    2,    2,    2,    2,    2,    2,    2,    2,    2,    2,    2,
      2,    2,    2,   91,    2,    2,   92,    2,    2,    2,   93,    2,    2,    2,    2,    2,
      2,    2,    2,   94,    2,    2,    2,    2,    2,    2,    2,    2,    2,    2,    2,    2,
      2,   95,   95,   96,   97,   95,   95,   95,   95,   95,   95,   95,   95,   95,   95,   95,
     95,   95,   95,   95,   95,   95,   95,   95,   95,   95,   95,   95,   95,   95,   95,   95,
     95,    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,    1,
      0,    2,    2,    2,    2,    2,    0,    0,    0,    3,    0,    0,    0,    0,    0,    4,
      0,    0,    5,    0,    0,    0,    0,    0,    0,    0,    0,    0,    1,    0,    0,    0,
      0,    0,    0,    0,    0,    0,    0,    0,    6,    7,    0,    0,    0,    0,    0,    0,
      0,    0,    0,    0,    0,    0,    2,    2,    2,    2,    2,    2,    2,    2,    2,    2,
      2,    2,    2,    2,    2,    2,    8,    9,    9,    9,    9,    0,    0,    0,    7,   10,
      0,    2,    2,    2,    2,   11,   12,    0,    0,    9,   13,    2,    2,    2,    2,    2,
      2,    2,    2,    2,    2,    2,   14,   15,   16,   17,   18,   19,   20,   14,   21,   22,
     23,   10,   24,   25,   18,    2,    2,    2,    2,    2,   18,    0,    2,    2,    2,    2,
      2,    0,    2,    2,    2,    2,    2,    2,    2,   26,   27,   28,    2,    2,    2,    7,
     28,    7,   28,    2,    2,    2,    2,    2,    2,    2,    2,    2,    2,    7,    2,    2,
      2,    7,    7,    0,    2,    2,    0,   15,   16,   17,   18,   29,   30,   31,   30,   32,
      0,    0,    0,    0,   33,    0,    0,    2,   28,    2,    0,    0,    0,    0,    0,    7,
     34,   10,   13,   28,    2,    2,    7,    0,   28,    7,    2,   28,    7,    2,    0,   35,
     16,   17,   29,    0,   25,   36,   25,   37,    0,   38,    0,    0,    0,   28,    2,    7,
      7,    0,    0,    0,    2,    2,    2,    2,    2,   39,   40,   41,    0,    0,    0,    0,
      0,   10,   13,   28,    2,    2,    2,    2,   28,    2,   28,    2,    2,    2,    2,    2,
      2,    7,    2,   28,    2,    2,    0,   15,   16,   17,   18,   19,   25,   20,   33,   22,
      0,    0,    0,    0,    0,   28,   39,   39,   42,   10,   27,   28,    2,    2,    2,    7,
     28,    7,    2,   28,    2,    2,    0,   15,   43,    0,    0,   25,   20,    0,    0,    2,
     28,   28,    0,    0,    0,    0,    0,    0,    0,    0,   44,   28,    2,    2,    7,    0,
      2,    7,    2,    2,    0,   28,    7,    7,    2,    0,   28,    7,    0,    2,    7,    0,
      2,    2,    2,    2,    2,    2,    0,    0,   21,   14,   45,    0,   46,   31,   46,   32,
      0,    0,    0,    0,   33,    0,    0,    0,    0,   13,   27,   47,    2,    2,    2,    7,
      2,    7,    2,    2,    2,    2,    2,    2,    2,    2,    2,    2,    2,    2,    0,   15,
     20,   14,   21,   45,   20,   36,   20,   37,    0,    0,    0,   25,   29,    2,    7,    0,
      0,    8,   27,   28,    2,    2,    2,    7,    2,    2,    2,   28,    2,    2,    0,   15,
     43,    0,    0,   33,   45,    0,    0,    0,    7,   48,   49,    0,    0,    0,    0,    0,
      0,    9,   27,    2,    2,    2,    2,    7,    2,    2,    2,    2,    2,    2,   50,   51,
     21,   21,   17,   29,   46,   31,   46,   32,   52,    0,    0,    0,   33,    0,    0,    0,
     28,   10,   27,   28,    2,    2,    2,    2,    2,    2,    2,    2,    7,    0,    2,    2,
      2,    2,   28,    2,    2,    2,    2,   28,    0,    2,    2,    2,    7,    0,   53,    0,
     33,   21,   20,   29,   29,   16,   46,   46,   23,    0,   21,    0,    0,    0,    0,    0,
      0,    2,    0,    2,    7,    0,    0,    0,    0,    0,    0,    0,    0,   18,    0,    0,
      0,    2,    2,   54,   54,   55,    0,    0,   16,    2,    2,    2,    2,   28,    2,    2,
      2,    2,    2,    2,    2,    2,    2,    7,    0,   56,   19,   57,   20,   20,   18,   18,
     44,   19,    9,   29,    9,    2,    2,   58,   59,   59,   59,   59,   59,   60,   59,   59,
     59,   59,   59,   59,   59,   59,   59,   59,   59,   59,   59,   59,   59,   59,   59,   61,
      0,    0,    0,    0,   62,    0,    0,    0,    0,    2,    2,    2,    2,    2,   63,   43,
     57,   64,   20,   20,   65,   66,   67,   68,   69,    2,    2,    2,    2,    2,    1,    0,
      3,    2,    2,    2,   21,   18,    2,    2,   70,   69,   71,   72,   63,   71,   27,   27,
      2,   50,   20,   51,    2,    2,    2,    2,    2,    2,   73,   74,   75,   27,   27,   76,
     77,    2,    2,    2,    2,    2,   27,   43,    0,    2,   57,   78,    0,    0,    0,    0,
     28,    2,   57,   45,    0,    0,    0,    0,    0,    2,   57,    0,    0,    0,    0,    0,
      0,    2,    2,    2,    2,    2,    2,    7,    2,    7,   57,    0,    0,    0,    0,    0,
      0,    2,    2,   79,   43,   20,   57,   18,   46,   46,   46,   46,   13,   80,   81,   82,
     83,   84,   85,    0,    0,    0,    0,   86,    0,    7,    0,    0,   28,    0,   87,   79,
     88,    2,    2,    2,    2,    7,    0,    0,    0,   40,   40,   89,   90,    2,    2,    2,
      2,    2,    2,    2,    2,   11,    7,    0,    0,   91,    2,    2,    2,    2,    2,    2,
      2,    2,    2,    2,    2,    2,    2,    2,    7,   20,   78,   43,   20,   92,   59,    0,
      0,   93,   94,   93,   93,   95,   96,    0,    0,    2,    2,    2,    2,    2,    2,    2,
      0,    2,    2,    7,    0,    0,    0,    0,    0,    2,    2,    2,    2,    2,    2,    0,
      0,    2,    2,    2,    2,   27,    0,    0,    0,    2,    2,    2,    2,    2,    7,    0,
      0,    2,    2,    2,   50,   97,   43,    0,    0,    2,    2,   98,   99,  100,  101,   59,
     61,  102,   14,   43,   20,   57,   19,   78,   46,   46,   74,    9,    9,    9,  103,   44,
     38,    9,  104,   72,    2,    2,    2,    2,    2,    2,    2,  105,   20,   18,   18,   20,
     46,   46,   20,  106,    2,    2,    2,    7,    0,    0,    0,    0,    0,    0,  107,  108,
    109,  109,  109,    0,    0,    0,    0,    0,    0,  104,   72,    2,    2,    2,    2,    2,
      2,   58,   59,   57,   23,   20,  110,   59,    2,    2,    2,    2,  105,   20,   21,   43,
     43,  100,   12,    0,    0,    0,    0,    0,    0,    2,    2,   59,   16,   46,   21,  111,
    100,  100,  100,  112,  113,    0,    0,    0,    0,    2,    2,    2,    2,    2,    0,   28,
      2,    9,   44,  114,  114,  114,    9,  114,  114,   13,  114,  114,  114,   24,    0,   38,
      0,    0,    0,  115,   49,    9,    3,    0,    0,    0,    0,    0,    0,    0,  116,    0,
      0,    0,    0,    0,    0,    0,    4,  117,  118,   40,   40,    3,    0,    0,    0,    0,
      0,    0,    0,    0,    0,    0,  118,  118,  119,  118,  118,  118,  118,  118,  118,  118,
    118,    0,    0,  120,    0,    0,    0,    0,    0,    0,    5,  120,    0,    0,    0,    0,
      0,   44,    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,    7,
      0,    2,    2,    2,    2,    0,    0,    0,   28,    0,    0,    0,    0,    0,    0,    0,
    121,    2,   51,    2,  106,    2,    8,    2,    2,    2,   63,   17,   14,    0,    0,   29,
      0,    2,    2,    0,    0,    0,    0,    0,    0,   27,    2,    2,    2,    2,    2,    2,
      2,    2,    2,  122,   21,   21,   21,   21,   21,   21,   21,  123,    0,    0,    0,    0,
      0,    9,    9,    9,    9,    9,    9,    9,    9,    9,    2,    0,    0,    0,    0,    0,
     50,    2,    2,    2,   20,   20,  124,  114,    0,    2,    2,    2,  125,   18,   57,   18,
    111,  100,  126,    0,    0,    0,    0,    0,    0,    9,  127,    2,    2,    2,    2,    2,
      2,    2,  128,   21,   20,   18,   46,  129,  130,  131,    0,    0,    0,    0,    0,    0,
      0,    2,    2,   50,   28,    2,    2,    2,    2,    2,    2,    2,    2,    8,   20,   57,
     97,   74,  132,  133,  134,    0,    0,    0,    0,    2,  135,    2,    2,    2,    2,  136,
      0,   28,    2,   40,    3,    0,   77,   13,    2,   51,   20,  137,   50,   51,    2,    2,
    103,    8,    7,    0,    0,    0,    0,    0,    0,    2,    2,    2,    2,    2,  138,   19,
     23,    0,    0,  139,  140,    0,    0,    0,    0,    2,   63,   43,   21,   78,   45,  141,
      0,   79,   79,   79,   79,   79,   79,   79,   79,    0,    0,    0,    0,    0,    0,    0,
      4,  118,  118,  118,  118,  119,    0,    0,    0,    2,    2,    2,    2,    2,    7,    2,
      2,    2,    7,    2,   28,    2,    2,    2,    2,    2,   28,    2,    2,    2,   28,    7,
      0,  125,   18,   25,   29,    0,    0,  142,  143,    2,    2,   28,    2,   28,    2,    2,
      2,    2,    2,    2,    0,   12,   35,    0,  144,    2,    2,   11,   35,    0,   28,    2,
      2,    2,    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,   28,    2,    2,
      7,    2,    2,    9,   39,    0,    0,    0,    0,    2,    2,    2,    2,    2,   25,   36,
      0,    2,    2,    2,  114,  114,  114,  114,  114,  145,    2,    7,    0,    0,    0,    0,
      0,    2,   12,   12,    0,    0,    0,    0,    0,    7,    2,    2,    7,    2,    2,    2,
      2,   28,    2,    7,    0,   28,    2,    0,    0,  146,  147,  148,    2,    2,    2,    2,
      2,    2,    2,    2,    2,   20,   20,   18,   18,   18,   20,   20,  131,    0,    0,    0,
      0,    0,  149,  149,  149,  149,  149,  149,  149,  149,  149,  149,    2,    2,    2,    2,
      2,   51,   50,   51,    0,    0,    0,    0,  150,    9,   72,    2,    2,    2,    2,    2,
      2,   16,   17,   19,   14,   22,   35,    0,    0,    0,   29,    0,    0,    0,    0,    0,
      0,    9,   47,    2,    2,    2,    2,    2,    2,    2,    2,    2,  125,   18,   20,  151,
     20,   19,  152,  153,    2,    2,    2,    2,    2,    0,    0,   63,  154,    0,    0,    0,
      0,    2,   11,    0,    0,    0,    0,    0,    0,    2,   63,   23,   18,   18,   18,   20,
     20,  106,  155,    0,    0,   54,  156,   29,  157,   28,    2,    2,    2,    2,    2,    2,
      2,    2,    2,    2,    2,    2,    2,   21,   17,   20,   20,  158,   42,    0,    0,    0,
     47,  125,    0,    0,    0,    0,    0,    0,    0,    2,    2,    2,    7,    7,    2,    2,
     28,    2,    2,    2,    2,    2,    2,    2,   28,    2,    2,    2,    2,    2,    2,    2,
      8,   16,   17,   19,   20,  159,   29,    0,    0,    9,    9,   28,    2,    2,    2,    7,
     28,    7,    2,   28,    2,    2,   56,   15,   21,   14,   21,   45,   30,   31,   30,   32,
      0,    0,    0,    0,   33,    0,    0,    0,    2,    2,   21,    0,    9,    9,    9,   44,
      0,    9,    9,   44,    0,    0,    0,    0,    0,    2,    2,   63,   23,   18,   18,   18,
     20,   21,  123,   13,   15,    0,    0,    0,    0,    2,    2,    2,    2,    2,    0,    0,
    160,  161,    0,    0,    0,    0,    0,    0,    0,   16,   17,   18,   18,   64,   97,   23,
    157,    9,  162,    7,    0,    0,    0,    0,    0,    2,    2,    2,    2,    2,    2,    2,
     63,   23,   18,   18,    0,   46,   46,    9,  163,   35,    0,    0,    0,    0,    0,    0,
      0,    0,    0,    0,    0,    2,    2,   18,    0,   21,   17,   18,   18,   19,   14,   80,
    163,   36,    0,    0,    0,    0,    0,    0,    0,    2,    2,    2,    2,    2,    8,  164,
     23,   18,   20,   20,  162,    7,    0,    0,    0,    2,    2,    2,    2,    2,    7,   41,
    133,   21,   20,   18,   74,   19,   20,    0,    0,    2,    2,    2,    7,    0,    0,    0,
      0,    2,    2,    2,    2,    2,    2,   16,   17,   18,   19,   20,  103,  163,   35,    0,
      0,    2,    2,    2,    7,   28,    0,    2,    2,    2,    2,   28,    7,    2,    2,    2,
      2,   21,   21,   16,   30,   31,   10,  165,  166,  167,  168,    0,    0,    0,    0,    0,
      0,    2,    2,    2,    2,    0,    2,    2,    2,   63,   23,   18,   18,    0,   20,   21,
     27,  106,    0,   31,    0,    0,    0,    0,    0,   50,   18,   20,   20,   20,  137,    2,
      2,    2,  169,  170,    9,   13,  171,   70,  172,    0,    0,    1,  144,    0,    0,    0,
      0,   50,   18,   20,   14,   17,   18,    2,    2,    2,    2,  155,  155,  155,  173,  173,
    173,  173,  173,  173,   13,  174,    0,   28,    0,   20,   18,   18,   29,   20,   20,    9,
    163,    0,   59,   59,   59,   59,   59,   59,   59,   64,   19,   80,   44,    0,    0,    0,
      0,    2,    2,    2,    7,    2,   28,    2,    2,   50,   20,   20,   29,    0,   36,   20,
     25,    9,  156,  175,  171,    0,    0,    0,    0,    2,    2,    2,   28,    7,    2,    2,
      2,    2,    2,    2,    2,    2,   21,   21,   45,   20,   33,   80,   66,    0,    0,    0,
      0,    2,  176,   64,   45,    0,    0,    0,    0,    9,  177,    2,    2,    2,    2,    2,
      2,    2,    2,   21,   20,   18,   29,    0,   46,   14,  140,    0,    0,    0,    0,    0,
      0,  178,  178,  178,  106,  179,  178,    0,    0,  145,    2,    2,  180,  114,  114,  114,
    114,  114,  114,  114,    0,    0,    0,    0,    0,    9,    9,    9,   44,    0,    0,    0,
      0,    2,    2,    2,    2,    2,    7,    0,   56,  181,   18,   18,   18,   18,   18,   18,
     18,   18,   18,   18,   18,   18,   18,   18,   18,   18,   18,   18,   18,    0,    0,    0,
     38,  114,   24,    0,    0,    0,    0,    0,    0,    0,    0,    7,    0,    0,    0,    0,
      0,    2,    2,    2,    0,    0,    0,    0,    0,    2,    2,    2,    2,    2,    0,   56,
     35,    0,    4,  118,  118,  118,  119,    0,    0,    9,    9,    9,   47,    2,    2,    2,
      0,    2,    2,    2,    2,    2,    0,    0,    2,    2,    2,    2,    2,    2,    2,    2,
     44,    2,    2,    2,    2,    2,    2,    9,    9,    2,    2,    2,    2,    2,    2,   20,
     20,    2,    2,   42,   42,   42,   90,    0,    0,    O,    O,    O,   GB,    B,    B,   GB,
      O,    O,   WJ,FMPst,FMPst,    O,  CGJ,    B,    O,    B,VMAbv,VMAbv,VMAbv,    O,VMAbv,    B,
  CMBlw,CMBlw,CMBlw,VMAbv,VMPst, VAbv, VPst,CMBlw,    B, VPst, VPre, VPst, VBlw, VBlw, VBlw, VBlw,
   VAbv, VAbv, VAbv, VPst, VPst, VPst,    H, VPre, VPst,VMBlw,    O,    O, VAbv,   GB,VMAbv,VMPst,
  VMPst,    O,    B, VBlw,    O,    O, VPre, VPre,    O, VPre,    H,    O, VPst,FMAbv,    O,CMBlw,
      O, VAbv,    O, VAbv,    H,    O,VMBlw,VMAbv,CMAbv,   GB,   GB,    O, MBlw,CMAbv,CMAbv, VPst,
   VAbv,VMAbv,    O, VPst,    O, VPre, VPre,VMAbv,    B,    O,   CS,   CS,VMPst,    B, VAbv, VAbv,
      B,    R,    O,  HVM,    O,    O,FMBlw,    O,CMAbv,    O,CMBlw, VAbv, VBlw,    B,  SUB,  SUB,
    SUB,    O,  SUB,  SUB,    O,FMBlw,    O,    B, VPst, VBlw, VPre,VMAbv,VMBlw,VMPst,   IS, VAbv,
   MPst, MPre, MBlw, MBlw,    B, MBlw, MBlw, VPst,VMPst,VMPst,    B, MBlw, VPst, VPre, VAbv, VAbv,
  VMPst,VMPst,VMBlw,    B,VMPst, VBlw, VPst,  CGJ,  CGJ, VPst,VMAbv,VMAbv,FMAbv, FAbv,CMAbv,FMAbv,
  VMAbv,FMAbv, VAbv,   IS,FMAbv,    B,FMAbv,    B,  CGJ,   WJ,  CGJ,   GB,CMAbv,CMAbv,    B,   GB,
      B, VAbv,  SUB, FPst, FPst,VMBlw, FPst, FPst, FBlw,VMAbv,FMBlw, VAbv, VPre,    B, MPre, MBlw,
    SUB, FAbv, FAbv, MAbv,  SUB,   Sk, VPst, VAbv,VMAbv,VMAbv, FAbv,CMAbv, VPst,    H,    B,    O,
  SMAbv,SMBlw,SMAbv,SMAbv,SMAbv, VPst,   IS, VBlw, FAbv,VMPre,VMPre,FMAbv,CMBlw,VMBlw,VMBlw,VMAbv,
     CS,    O,FMAbv, ZWNJ,  CGJ,   WJ,   WJ,   WJ,    O,FMPst,    O,    O,    H, MPst, VPst,    H,
  VMAbv, VAbv,VMBlw,    B, VBlw, FPst, VPst, FAbv,VMPst,    B,CMAbv, VAbv, MBlw, MPst, MBlw,    H,
      O, VBlw, MPst, MPre, MAbv, MBlw,    O,    B, FAbv, FAbv, FPst, VBlw,    B,    B, VPre,    O,
  VMPst,   IS,    O,VMPst, VBlw, VPst,VMBlw,VMBlw,VMAbv,    O,   IS,VMBlw,    B,VMPst,VMAbv,VMPst,
     CS,   CS,    B,    N,    N,    O,   HN, VPre, VBlw, VAbv,   IS,CMAbv,    O, VPst,    B,    R,
      R,CMBlw, VAbv, VPre,VMAbv,VMAbv,    H, VAbv,CMBlw,FMAbv,    B,   CS,   CS,    H,CMBlw,VMPst,
      H,VMPst, VAbv,VMAbv, VPst,   IS,    R, MPst,    R, MPst,CMBlw,    B,FMBlw, VBlw,VMAbv,    R,
   MBlw, MBlw,   GB, FBlw, FBlw,CMAbv,   IS, VBlw,   IS,   GB, VAbv,    R,VMPst,    H,    H,    B,
      H,    B,VMBlw,    O, VBlw,
};
static const uint16_t
hb_use_u16[784] =
{
    0,  0,  1,  2,  0,  0,  0,  0,  0,  0,  3,  4,  0,  5,  0,  0,
    0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  6,  0,  0,  0,
    0,  0,  0,  0,  7,  0,  0,  0,  0,  0,  0,  0,  8,  9, 10, 11,
    0,  0,  0,  0,  9, 12,  0,  0, 13,  9,  9, 14, 15, 16, 17, 18,
   19, 20, 21, 22, 23, 24, 17, 25, 26, 20, 21, 27, 28, 29, 30, 31,
   32, 33, 21, 34, 35,  0, 17, 36, 37, 20, 21, 38, 23, 39, 17, 40,
   41, 42, 43, 44, 45, 46, 30,  0, 47, 48, 21, 49, 50, 51, 17,  0,
   52, 48, 21, 53, 50, 54, 17, 55, 56, 48,  9, 57, 58, 59, 17,  0,
   60, 61,  9, 62, 63, 64, 30, 65, 66, 67,  9, 68, 69,  9, 70, 71,
   72, 73, 74, 75, 76,  0,  0,  0,  9,  9, 77, 78, 79, 80, 81, 82,
   83, 84,  0,  0,  0,  0,  0,  0,  9, 85,  9, 86,  9, 87, 88, 89,
    9,  9,  9, 90, 91, 92,  2,  0, 93,  0,  9,  9,  9,  9,  9, 94,
   95,  9, 96,  0,  0,  0,  0,  0, 97, 98, 99,100, 30,  9,101,102,
    9,  9,103,  9,104,105,  0,  0,  9,106,  9,  9,  9,107,108,109,
    2,  2,  0,  0,  0,  0,  0,  0,110,  9,  9,111,112,  2,113,114,
  115,  9,116,  9,  9,  9,117,118,  9,  9,119,120,121,  0,  0,  0,
    0,  0,  0,  0,  0,122,123,124,  0,  0,  0,  0,  0,  0,  0,125,
  126,127,128,  0,  0,  0,129,130,131,  0,  0,  0,  0,  0,  0,132,
    0,  0,  0,  0,133,  0,  0,  0,  0,  0,  0,  9,  9,  9,134,135,
  136,  9,137,  0,  9,  9,  9,138,139,  9,  9,140,141,  2,142,143,
    9,  9,144,  9,145,146,  0,  0,147,  9,  9,148,149,  2,150, 98,
    9,  9,151,152,153,  2,  9,154,  9,  9,  9,155,156,  0,157,158,
    0,  0,  0,  0,  9,  9,159,  2,160,  0,  0,  0,  0,  0,  0,  0,
    0,  0,  0,  0,  0,  0,  0,161,  0,  0,  0,  0,  0,  0,  0,162,
    0,  0,  0,  0,  0,  0,  0,163,163,164, 33,165,  0,  0,  0,  0,
  166,167,  9,168, 94,  0,  0,  0,  0,  0,  0,  0, 69,  9,169,  0,
    9,170,171,  0,  0,  0,  0,  0,  9,  9,172,  2,  0,  0,  0,  0,
    9,  9,173,170,  0,  0,  0,  0,  0,  0,  0,  9,174,175,  0,  9,
  176,  0,  0,177,178,  0,  0,  0,179,  9,  9,180,181,182,183,184,
  185,  9,  9,186,187,  0,  0,  0,188,  9,189,190,191,  9,  9,192,
  185,  9,  9,193,194,105,195,102,  9, 33,196,197,198,  0,  0,  0,
  199,200, 94,  9,  9,201,202,  2,203, 20, 21,204,205,206,207,208,
    9,  9,  9,209,210,211,212,  0,195,  9,  9,213,214,  2,  0,  0,
    9,  9,215,216,217,218,  0,  0,  9,  9,  9,219,220,  2,  0,  0,
    9,  9,221,222,  2,  0,  0,  0,  9,223,224,103,225,  0,  0,  0,
    9,  9,226,227,  0,  0,  0,  0,228,229,  9,230,231,  2,  0,  0,
    0,  0,232,  9,  9,233,234,  0,235,  9,  9,236,237,238,  9,  9,
  239,240,  0,  0,  0,  0,  0,  0, 21,  9,215,241,  7,  9, 70, 18,
    9,242, 73,243,  0,  0,  0,  0,244,  9,  9,245,246,  2,247,  9,
  248,249,  2,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  9,250,
  251, 48,  9,252,253,  2,  0,  0,  9,  9,  9,  9,  9,  9,  9,  9,
    9,  9,  9,254,255,256,  0,  0,  0,  0,  0,  0,  2,  0,  0,  0,
    9,  9,  9,257,  0,  0,  0,  0,  9,  9,  9,  9,258,259,260,260,
  261,262,  0,  0,  0,  0,263,  0,  9,  9,  9,  9,  9,264,  0,  0,
    9,  9,  9,  9,  9,  9,105, 70, 94,265,  0,  0,  0,  0,  0,  0,
    0,  0,  0,  0,  0,  0,  0,266,  9,  9, 70,267,268,  0,  0,  0,
    0,  9,269,  0,  9,  9,270,  2,  0,  0,  0,  0,  0,  9,271,  2,
    9,  9,  9,  9,272,  2,  0,  0,129,129,129,129,129,129,129,129,
  160,160,160,160,160,160,160,160,160,160,160,160,160,160,160,129,
};

static inline unsigned
hb_use_b4 (const uint8_t* a, unsigned i)
{
  return (a[i>>1]>>((i&1u)<<2))&15u;
}
static inline uint_fast8_t
hb_use_get_category (unsigned u)
{
  return u<921600u?hb_use_u8[2777+(((hb_use_u8[593+(((hb_use_u16[((hb_use_u8[113+(((hb_use_b4(hb_use_u8,u>>1>>3>>3>>5))<<5)+((u>>1>>3>>3)&31u))])<<3)+((u>>1>>3)&7u)])<<3)+((u>>1)&7u))])<<1)+((u)&1u))]:O;
}

#undef B
#undef CGJ
#undef CS
#undef G
#undef GB
#undef H
#undef HN
#undef HVM
#undef IS
#undef J
#undef N
#undef O
#undef R
#undef SB
#undef SE
#undef SUB
#undef Sk
#undef WJ
#undef ZWNJ
#undef CMAbv
#undef CMBlw
#undef FAbv
#undef FBlw
#undef FPst
#undef FMAbv
#undef FMBlw
#undef FMPst
#undef MAbv
#undef MBlw
#undef MPst
#undef MPre
#undef SMAbv
#undef SMBlw
#undef VAbv
#undef VBlw
#undef VPst
#undef VPre
#undef VMAbv
#undef VMBlw
#undef VMPst
#undef VMPre


#endif /* HB_OT_SHAPER_USE_TABLE_HH */
/* == End of generated table == */
