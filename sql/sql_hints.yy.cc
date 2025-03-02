/* A Bison parser, made by GNU Bison 3.0.4.  */

/* Bison implementation for Yacc-like parsers in C

   Copyright (C) 1984, 1989-1990, 2000-2015 Free Software Foundation, Inc.

   This program is free software: you can redistribute it and/or modify
   it under the terms of the GNU General Public License as published by
   the Free Software Foundation, either version 3 of the License, or
   (at your option) any later version.

   This program is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
   GNU General Public License for more details.

   You should have received a copy of the GNU General Public License
   along with this program.  If not, see <http://www.gnu.org/licenses/>.  */

/* As a special exception, you may create a larger work that contains
   part or all of the Bison parser skeleton and distribute that work
   under terms of your choice, so long as that work isn't itself a
   parser generator using the skeleton or a modified version thereof
   as a parser skeleton.  Alternatively, if you modify or redistribute
   the parser skeleton itself, you may (at your option) remove this
   special exception, which will cause the skeleton and the resulting
   Bison output files to be licensed under the GNU General Public
   License without this special exception.

   This special exception was added by the Free Software Foundation in
   version 2.2 of Bison.  */

/* C LALR(1) parser skeleton written by Richard Stallman, by
   simplifying the original so-called "semantic" parser.  */

/* All symbols defined below should begin with yy or YY, to avoid
   infringing on user name space.  This should be done even for local
   variables, as they might otherwise be expanded by user macros.
   There are some unavoidable exceptions within include files to
   define necessary library symbols; they are noted "INFRINGES ON
   USER NAME SPACE" below.  */

/* Identify Bison output.  */
#define YYBISON 1

/* Bison version.  */
#define YYBISON_VERSION "3.0.4"

/* Skeleton name.  */
#define YYSKELETON_NAME "yacc.c"

/* Pure parsers.  */
#define YYPURE 1

/* Push parsers.  */
#define YYPUSH 0

/* Pull parsers.  */
#define YYPULL 1


/* Substitute the variable and function names.  */
#define yyparse         HINT_PARSER_parse
#define yylex           HINT_PARSER_lex
#define yyerror         HINT_PARSER_error
#define yydebug         HINT_PARSER_debug
#define yynerrs         HINT_PARSER_nerrs


/* Copy the first part of user declarations.  */
#line 28 "/export/home3/pb2/build/sb_4-33646267-1555156040.89/mysql-8.0.16-release-export-14634434_gpl/sql/sql_hints.yy" /* yacc.c:339  */

#include "my_inttypes.h"
#include "sql/derror.h"
#include "sql/parse_tree_hints.h"
#include "sql/sql_class.h"
#include "sql/sql_const.h"
#include "sql/sql_lex.h"
#include "sql/sql_lex_hints.h"

#define NEW_PTN new (thd->mem_root)

static bool parse_int(longlong *to, const char *from, size_t from_length)
{
  int error;
  const char *end= from + from_length;
  *to= my_strtoll10(from, &end, &error);
  return error != 0 || end != from + from_length;
}


#line 93 "/export/home3/pb2/build/sb_4-33646267-1555156040.89/dist_GPL/sql/sql_hints.yy.cc" /* yacc.c:339  */

# ifndef YY_NULLPTR
#  if defined __cplusplus && 201103L <= __cplusplus
#   define YY_NULLPTR nullptr
#  else
#   define YY_NULLPTR 0
#  endif
# endif

/* Enabling verbose error messages.  */
#ifdef YYERROR_VERBOSE
# undef YYERROR_VERBOSE
# define YYERROR_VERBOSE 1
#else
# define YYERROR_VERBOSE 0
#endif

/* In a future release of Bison, this section will be replaced
   by #include "sql_hints.yy.h".  */
#ifndef YY_HINT_PARSER_EXPORT_HOME3_PB2_BUILD_SB_4_33646267_1555156040_89_DIST_GPL_SQL_SQL_HINTS_YY_H_INCLUDED
# define YY_HINT_PARSER_EXPORT_HOME3_PB2_BUILD_SB_4_33646267_1555156040_89_DIST_GPL_SQL_SQL_HINTS_YY_H_INCLUDED
/* Debug traces.  */
#ifndef YYDEBUG
# define YYDEBUG 0
#endif
#if YYDEBUG
extern int HINT_PARSER_debug;
#endif

/* Token type.  */
#ifndef YYTOKENTYPE
# define YYTOKENTYPE
  enum yytokentype
  {
    MAX_EXECUTION_TIME_HINT = 258,
    RESOURCE_GROUP_HINT = 259,
    BKA_HINT = 260,
    BNL_HINT = 261,
    DUPSWEEDOUT_HINT = 262,
    FIRSTMATCH_HINT = 263,
    INTOEXISTS_HINT = 264,
    LOOSESCAN_HINT = 265,
    MATERIALIZATION_HINT = 266,
    NO_BKA_HINT = 267,
    NO_BNL_HINT = 268,
    NO_ICP_HINT = 269,
    NO_MRR_HINT = 270,
    NO_RANGE_OPTIMIZATION_HINT = 271,
    NO_SEMIJOIN_HINT = 272,
    MRR_HINT = 273,
    QB_NAME_HINT = 274,
    SEMIJOIN_HINT = 275,
    SUBQUERY_HINT = 276,
    DERIVED_MERGE_HINT = 277,
    NO_DERIVED_MERGE_HINT = 278,
    JOIN_PREFIX_HINT = 279,
    JOIN_SUFFIX_HINT = 280,
    JOIN_ORDER_HINT = 281,
    JOIN_FIXED_ORDER_HINT = 282,
    INDEX_MERGE_HINT = 283,
    NO_INDEX_MERGE_HINT = 284,
    SET_VAR_HINT = 285,
    SKIP_SCAN_HINT = 286,
    NO_SKIP_SCAN_HINT = 287,
    HINT_ARG_NUMBER = 288,
    HINT_ARG_IDENT = 289,
    HINT_ARG_QB_NAME = 290,
    HINT_ARG_TEXT = 291,
    HINT_IDENT_OR_NUMBER_WITH_SCALE = 292,
    HINT_CLOSE = 293,
    HINT_ERROR = 294
  };
#endif
/* Tokens.  */
#define MAX_EXECUTION_TIME_HINT 258
#define RESOURCE_GROUP_HINT 259
#define BKA_HINT 260
#define BNL_HINT 261
#define DUPSWEEDOUT_HINT 262
#define FIRSTMATCH_HINT 263
#define INTOEXISTS_HINT 264
#define LOOSESCAN_HINT 265
#define MATERIALIZATION_HINT 266
#define NO_BKA_HINT 267
#define NO_BNL_HINT 268
#define NO_ICP_HINT 269
#define NO_MRR_HINT 270
#define NO_RANGE_OPTIMIZATION_HINT 271
#define NO_SEMIJOIN_HINT 272
#define MRR_HINT 273
#define QB_NAME_HINT 274
#define SEMIJOIN_HINT 275
#define SUBQUERY_HINT 276
#define DERIVED_MERGE_HINT 277
#define NO_DERIVED_MERGE_HINT 278
#define JOIN_PREFIX_HINT 279
#define JOIN_SUFFIX_HINT 280
#define JOIN_ORDER_HINT 281
#define JOIN_FIXED_ORDER_HINT 282
#define INDEX_MERGE_HINT 283
#define NO_INDEX_MERGE_HINT 284
#define SET_VAR_HINT 285
#define SKIP_SCAN_HINT 286
#define NO_SKIP_SCAN_HINT 287
#define HINT_ARG_NUMBER 288
#define HINT_ARG_IDENT 289
#define HINT_ARG_QB_NAME 290
#define HINT_ARG_TEXT 291
#define HINT_IDENT_OR_NUMBER_WITH_SCALE 292
#define HINT_CLOSE 293
#define HINT_ERROR 294

/* Value type.  */



int HINT_PARSER_parse (class THD *thd, class Hint_scanner *scanner, class PT_hint_list **ret);

#endif /* !YY_HINT_PARSER_EXPORT_HOME3_PB2_BUILD_SB_4_33646267_1555156040_89_DIST_GPL_SQL_SQL_HINTS_YY_H_INCLUDED  */

/* Copy the second part of user declarations.  */

#line 216 "/export/home3/pb2/build/sb_4-33646267-1555156040.89/dist_GPL/sql/sql_hints.yy.cc" /* yacc.c:358  */

#ifdef short
# undef short
#endif

#ifdef YYTYPE_UINT8
typedef YYTYPE_UINT8 yytype_uint8;
#else
typedef unsigned char yytype_uint8;
#endif

#ifdef YYTYPE_INT8
typedef YYTYPE_INT8 yytype_int8;
#else
typedef signed char yytype_int8;
#endif

#ifdef YYTYPE_UINT16
typedef YYTYPE_UINT16 yytype_uint16;
#else
typedef unsigned short int yytype_uint16;
#endif

#ifdef YYTYPE_INT16
typedef YYTYPE_INT16 yytype_int16;
#else
typedef short int yytype_int16;
#endif

#ifndef YYSIZE_T
# ifdef __SIZE_TYPE__
#  define YYSIZE_T __SIZE_TYPE__
# elif defined size_t
#  define YYSIZE_T size_t
# elif ! defined YYSIZE_T
#  include <stddef.h> /* INFRINGES ON USER NAME SPACE */
#  define YYSIZE_T size_t
# else
#  define YYSIZE_T unsigned int
# endif
#endif

#define YYSIZE_MAXIMUM ((YYSIZE_T) -1)

#ifndef YY_
# if defined YYENABLE_NLS && YYENABLE_NLS
#  if ENABLE_NLS
#   include <libintl.h> /* INFRINGES ON USER NAME SPACE */
#   define YY_(Msgid) dgettext ("bison-runtime", Msgid)
#  endif
# endif
# ifndef YY_
#  define YY_(Msgid) Msgid
# endif
#endif

#ifndef YY_ATTRIBUTE
# if (defined __GNUC__                                               \
      && (2 < __GNUC__ || (__GNUC__ == 2 && 96 <= __GNUC_MINOR__)))  \
     || defined __SUNPRO_C && 0x5110 <= __SUNPRO_C
#  define YY_ATTRIBUTE(Spec) __attribute__(Spec)
# else
#  define YY_ATTRIBUTE(Spec) /* empty */
# endif
#endif

#ifndef YY_ATTRIBUTE_PURE
# define YY_ATTRIBUTE_PURE   YY_ATTRIBUTE ((__pure__))
#endif

#ifndef YY_ATTRIBUTE_UNUSED
# define YY_ATTRIBUTE_UNUSED YY_ATTRIBUTE ((__unused__))
#endif

#if !defined _Noreturn \
     && (!defined __STDC_VERSION__ || __STDC_VERSION__ < 201112)
# if defined _MSC_VER && 1200 <= _MSC_VER
#  define _Noreturn __declspec (noreturn)
# else
#  define _Noreturn YY_ATTRIBUTE ((__noreturn__))
# endif
#endif

/* Suppress unused-variable warnings by "using" E.  */
#if ! defined lint || defined __GNUC__
# define YYUSE(E) ((void) (E))
#else
# define YYUSE(E) /* empty */
#endif

#if defined __GNUC__ && 407 <= __GNUC__ * 100 + __GNUC_MINOR__
/* Suppress an incorrect diagnostic about yylval being uninitialized.  */
# define YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN \
    _Pragma ("GCC diagnostic push") \
    _Pragma ("GCC diagnostic ignored \"-Wuninitialized\"")\
    _Pragma ("GCC diagnostic ignored \"-Wmaybe-uninitialized\"")
# define YY_IGNORE_MAYBE_UNINITIALIZED_END \
    _Pragma ("GCC diagnostic pop")
#else
# define YY_INITIAL_VALUE(Value) Value
#endif
#ifndef YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
# define YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
# define YY_IGNORE_MAYBE_UNINITIALIZED_END
#endif
#ifndef YY_INITIAL_VALUE
# define YY_INITIAL_VALUE(Value) /* Nothing. */
#endif


#if ! defined yyoverflow || YYERROR_VERBOSE

/* The parser invokes alloca or malloc; define the necessary symbols.  */

# ifdef YYSTACK_USE_ALLOCA
#  if YYSTACK_USE_ALLOCA
#   ifdef __GNUC__
#    define YYSTACK_ALLOC __builtin_alloca
#   elif defined __BUILTIN_VA_ARG_INCR
#    include <alloca.h> /* INFRINGES ON USER NAME SPACE */
#   elif defined _AIX
#    define YYSTACK_ALLOC __alloca
#   elif defined _MSC_VER
#    include <malloc.h> /* INFRINGES ON USER NAME SPACE */
#    define alloca _alloca
#   else
#    define YYSTACK_ALLOC alloca
#    if ! defined _ALLOCA_H && ! defined EXIT_SUCCESS
#     include <stdlib.h> /* INFRINGES ON USER NAME SPACE */
      /* Use EXIT_SUCCESS as a witness for stdlib.h.  */
#     ifndef EXIT_SUCCESS
#      define EXIT_SUCCESS 0
#     endif
#    endif
#   endif
#  endif
# endif

# ifdef YYSTACK_ALLOC
   /* Pacify GCC's 'empty if-body' warning.  */
#  define YYSTACK_FREE(Ptr) do { /* empty */; } while (0)
#  ifndef YYSTACK_ALLOC_MAXIMUM
    /* The OS might guarantee only one guard page at the bottom of the stack,
       and a page size can be as small as 4096 bytes.  So we cannot safely
       invoke alloca (N) if N exceeds 4096.  Use a slightly smaller number
       to allow for a few compiler-allocated temporary stack slots.  */
#   define YYSTACK_ALLOC_MAXIMUM 4032 /* reasonable circa 2006 */
#  endif
# else
#  define YYSTACK_ALLOC YYMALLOC
#  define YYSTACK_FREE YYFREE
#  ifndef YYSTACK_ALLOC_MAXIMUM
#   define YYSTACK_ALLOC_MAXIMUM YYSIZE_MAXIMUM
#  endif
#  if (defined __cplusplus && ! defined EXIT_SUCCESS \
       && ! ((defined YYMALLOC || defined malloc) \
             && (defined YYFREE || defined free)))
#   include <stdlib.h> /* INFRINGES ON USER NAME SPACE */
#   ifndef EXIT_SUCCESS
#    define EXIT_SUCCESS 0
#   endif
#  endif
#  ifndef YYMALLOC
#   define YYMALLOC malloc
#   if ! defined malloc && ! defined EXIT_SUCCESS
void *malloc (YYSIZE_T); /* INFRINGES ON USER NAME SPACE */
#   endif
#  endif
#  ifndef YYFREE
#   define YYFREE free
#   if ! defined free && ! defined EXIT_SUCCESS
void free (void *); /* INFRINGES ON USER NAME SPACE */
#   endif
#  endif
# endif
#endif /* ! defined yyoverflow || YYERROR_VERBOSE */


#if (! defined yyoverflow \
     && (! defined __cplusplus \
         || (defined YYSTYPE_IS_TRIVIAL && YYSTYPE_IS_TRIVIAL)))

/* A type that is properly aligned for any stack member.  */
union yyalloc
{
  yytype_int16 yyss_alloc;
  YYSTYPE yyvs_alloc;
};

/* The size of the maximum gap between one aligned stack and the next.  */
# define YYSTACK_GAP_MAXIMUM (sizeof (union yyalloc) - 1)

/* The size of an array large to enough to hold all stacks, each with
   N elements.  */
# define YYSTACK_BYTES(N) \
     ((N) * (sizeof (yytype_int16) + sizeof (YYSTYPE)) \
      + YYSTACK_GAP_MAXIMUM)

# define YYCOPY_NEEDED 1

/* Relocate STACK from its old location to the new one.  The
   local variables YYSIZE and YYSTACKSIZE give the old and new number of
   elements in the stack, and YYPTR gives the new location of the
   stack.  Advance YYPTR to a properly aligned location for the next
   stack.  */
# define YYSTACK_RELOCATE(Stack_alloc, Stack)                           \
    do                                                                  \
      {                                                                 \
        YYSIZE_T yynewbytes;                                            \
        YYCOPY (&yyptr->Stack_alloc, Stack, yysize);                    \
        Stack = &yyptr->Stack_alloc;                                    \
        yynewbytes = yystacksize * sizeof (*Stack) + YYSTACK_GAP_MAXIMUM; \
        yyptr += yynewbytes / sizeof (*yyptr);                          \
      }                                                                 \
    while (0)

#endif

#if defined YYCOPY_NEEDED && YYCOPY_NEEDED
/* Copy COUNT objects from SRC to DST.  The source and destination do
   not overlap.  */
# ifndef YYCOPY
#  if defined __GNUC__ && 1 < __GNUC__
#   define YYCOPY(Dst, Src, Count) \
      __builtin_memcpy (Dst, Src, (Count) * sizeof (*(Src)))
#  else
#   define YYCOPY(Dst, Src, Count)              \
      do                                        \
        {                                       \
          YYSIZE_T yyi;                         \
          for (yyi = 0; yyi < (Count); yyi++)   \
            (Dst)[yyi] = (Src)[yyi];            \
        }                                       \
      while (0)
#  endif
# endif
#endif /* !YYCOPY_NEEDED */

/* YYFINAL -- State number of the termination state.  */
#define YYFINAL  53
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   165

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  44
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  34
/* YYNRULES -- Number of rules.  */
#define YYNRULES  84
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  152

/* YYTRANSLATE[YYX] -- Symbol number corresponding to YYX as returned
   by yylex, with out-of-bounds checking.  */
#define YYUNDEFTOK  2
#define YYMAXUTOK   294

#define YYTRANSLATE(YYX)                                                \
  ((unsigned int) (YYX) <= YYMAXUTOK ? yytranslate[YYX] : YYUNDEFTOK)

/* YYTRANSLATE[TOKEN-NUM] -- Symbol number corresponding to TOKEN-NUM
   as returned by yylex, without out-of-bounds checking.  */
static const yytype_uint8 yytranslate[] =
{
       0,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
      40,    41,     2,     2,    42,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,    43,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     1,     2,     3,     4,
       5,     6,     7,     8,     9,    10,    11,    12,    13,    14,
      15,    16,    17,    18,    19,    20,    21,    22,    23,    24,
      25,    26,    27,    28,    29,    30,    31,    32,    33,    34,
      35,    36,    37,    38,    39
};

#if YYDEBUG
  /* YYRLINE[YYN] -- Source line where rule number YYN was defined.  */
static const yytype_uint16 yyrline[] =
{
       0,   163,   163,   165,   167,   172,   178,   186,   187,   188,
     189,   190,   191,   192,   197,   217,   218,   222,   228,   237,
     238,   242,   248,   257,   258,   262,   268,   277,   281,   289,
     297,   298,   306,   307,   311,   318,   325,   332,   339,   346,
     353,   360,   367,   374,   383,   384,   388,   395,   396,   397,
     398,   402,   404,   409,   415,   422,   428,   438,   445,   455,
     459,   463,   470,   474,   478,   485,   489,   493,   497,   504,
     508,   512,   516,   523,   532,   541,   550,   551,   555,   570,
     605,   606,   610,   618,   619
};
#endif

#if YYDEBUG || YYERROR_VERBOSE || 0
/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "$end", "error", "$undefined", "MAX_EXECUTION_TIME_HINT",
  "RESOURCE_GROUP_HINT", "BKA_HINT", "BNL_HINT", "DUPSWEEDOUT_HINT",
  "FIRSTMATCH_HINT", "INTOEXISTS_HINT", "LOOSESCAN_HINT",
  "MATERIALIZATION_HINT", "NO_BKA_HINT", "NO_BNL_HINT", "NO_ICP_HINT",
  "NO_MRR_HINT", "NO_RANGE_OPTIMIZATION_HINT", "NO_SEMIJOIN_HINT",
  "MRR_HINT", "QB_NAME_HINT", "SEMIJOIN_HINT", "SUBQUERY_HINT",
  "DERIVED_MERGE_HINT", "NO_DERIVED_MERGE_HINT", "JOIN_PREFIX_HINT",
  "JOIN_SUFFIX_HINT", "JOIN_ORDER_HINT", "JOIN_FIXED_ORDER_HINT",
  "INDEX_MERGE_HINT", "NO_INDEX_MERGE_HINT", "SET_VAR_HINT",
  "SKIP_SCAN_HINT", "NO_SKIP_SCAN_HINT", "HINT_ARG_NUMBER",
  "HINT_ARG_IDENT", "HINT_ARG_QB_NAME", "HINT_ARG_TEXT",
  "HINT_IDENT_OR_NUMBER_WITH_SCALE", "HINT_CLOSE", "HINT_ERROR", "'('",
  "')'", "','", "'='", "$accept", "start", "hint_list", "hint",
  "max_execution_time_hint", "opt_hint_param_table_list",
  "hint_param_table_list", "opt_hint_param_table_list_empty_qb",
  "hint_param_table_list_empty_qb", "opt_hint_param_index_list",
  "hint_param_index_list", "hint_param_index", "hint_param_table_empty_qb",
  "hint_param_table", "hint_param_table_ext", "opt_qb_name",
  "qb_level_hint", "semijoin_strategies", "semijoin_strategy",
  "subquery_strategy", "table_level_hint", "index_level_hint",
  "table_level_hint_type_on", "table_level_hint_type_off",
  "key_level_hint_type_on", "key_level_hint_type_off", "qb_name_hint",
  "set_var_hint", "resource_group_hint", "set_var_ident",
  "set_var_num_item", "set_var_text_value", "set_var_string_item",
  "set_var_arg", YY_NULLPTR
};
#endif

# ifdef YYPRINT
/* YYTOKNUM[NUM] -- (External) token number corresponding to the
   (internal) symbol number NUM (which must be that of a token).  */
static const yytype_uint16 yytoknum[] =
{
       0,   256,   257,   258,   259,   260,   261,   262,   263,   264,
     265,   266,   267,   268,   269,   270,   271,   272,   273,   274,
     275,   276,   277,   278,   279,   280,   281,   282,   283,   284,
     285,   286,   287,   288,   289,   290,   291,   292,   293,   294,
      40,    41,    44,    61
};
# endif

#define YYPACT_NINF -60

#define yypact_value_is_default(Yystate) \
  (!!((Yystate) == (-60)))

#define YYTABLE_NINF -1

#define yytable_value_is_error(Yytable_value) \
  0

  /* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
     STATE-NUM.  */
static const yytype_int8 yypact[] =
{
      39,   -28,    -5,    -3,   -60,   -60,   -60,   -60,   -60,   -60,
     -60,    41,   -60,    44,    46,    50,   -60,   -60,    53,    66,
      67,    68,   -60,   -60,    69,   -60,   -60,   105,     1,   -60,
     -60,   -60,   -60,   -60,    70,    71,    72,    73,   -60,   -60,
     -60,   -60,     8,    80,    82,    84,    82,    82,    12,    14,
      45,    82,     0,   -60,    77,   -60,   -60,    61,    63,    65,
      65,    75,    78,   -60,    81,    79,    81,    27,    82,    87,
      83,    85,   -60,    87,    88,    87,    89,    90,   -60,   -60,
      91,   -60,    87,    92,    87,    94,    98,   -60,   102,   102,
     -60,   -60,   -60,   -60,   -60,   -60,    60,   -60,   -60,    62,
     -60,   -60,    96,   -60,   -60,    97,    86,   -60,   -60,   106,
     100,   -60,   101,   -60,   -60,   -25,   103,   -60,   104,   -60,
     -60,   -60,   107,   108,   -60,   110,   -60,    81,   -60,   -60,
     -60,    87,   -60,   -60,   -60,   -60,   -60,   -60,   -60,   -60,
     -60,   -60,   111,   -60,   -60,   -60,   102,   -60,   -60,   -60,
     -60,   -60
};

  /* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
     Performed when YYTABLE does not specify something else to do.  Zero
     means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
       0,     0,     0,     0,    59,    60,    62,    63,    69,    70,
      66,     0,    65,     0,     0,     0,    61,    64,     0,     0,
       0,     0,    67,    71,     0,    68,    72,     0,     0,     5,
      11,     9,     8,     7,     0,     0,     0,     0,    10,    12,
      13,     4,     0,     0,    32,     0,    32,    32,    15,    15,
      15,    32,     0,     1,     0,     2,     6,    15,    15,     0,
       0,     0,     0,    33,    44,     0,    44,     0,    32,    19,
       0,    16,    17,    19,     0,    19,     0,     0,    77,    76,
       0,     3,    19,     0,    19,     0,     0,    30,    23,    23,
      14,    75,    50,    47,    48,    49,     0,    45,    73,     0,
      52,    51,     0,    29,    28,     0,    20,    21,    37,     0,
       0,    39,     0,    41,    43,     0,     0,    53,     0,    55,
      31,    27,     0,    24,    25,     0,    35,     0,    34,    36,
      38,     0,    18,    40,    42,    78,    80,    81,    79,    84,
      82,    83,     0,    54,    56,    57,     0,    58,    46,    22,
      74,    26
};

  /* YYPGOTO[NTERM-NUM].  */
static const yytype_int8 yypgoto[] =
{
     -60,   -60,   -60,    95,   -60,    25,   -60,     3,   -60,    33,
     -60,   -21,    15,   -59,    93,    26,   -60,    99,    -1,   -60,
     -60,   -60,   -60,   -60,   -60,   -60,   -60,   -60,   -60,   -60,
     -60,   -60,   -60,   -60
};

  /* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,    27,    28,    29,    30,    70,    71,   105,   106,   122,
     123,   124,   107,    72,    88,    64,    31,    96,    97,   102,
      32,    33,    34,    35,    36,    37,    38,    39,    40,    80,
     139,   140,   141,   142
};

  /* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
     positive, shift that token.  If negative, reduce the rule whose
     number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_uint8 yytable[] =
{
      87,    87,    54,    78,     2,     3,     4,     5,   135,   136,
      41,   137,   138,     6,     7,     8,     9,    10,    11,    12,
      13,    14,    15,    16,    17,    18,    19,    20,    21,    22,
      23,    24,    25,    26,    79,    42,   100,    43,   101,    55,
       1,    61,     2,     3,     4,     5,    68,    69,    68,    73,
     132,     6,     7,     8,     9,    10,    11,    12,    13,    14,
      15,    16,    17,    18,    19,    20,    21,    22,    23,    24,
      25,    26,    66,    67,    74,    76,   110,    77,   112,    68,
      75,    44,    83,    85,    45,   116,    46,   118,    92,    93,
      47,    94,    95,    48,   103,    68,    82,    68,    84,    68,
      86,   126,   127,   128,   127,    53,    49,    50,    51,    52,
      57,    58,    59,    60,    62,    81,    90,    63,    65,    91,
      98,   104,   125,    56,   108,   151,   148,   109,   131,   111,
     113,   114,   120,   117,   115,   119,   121,   129,   130,     0,
      68,   133,   134,     0,   143,   144,   149,     0,   145,     0,
     146,   147,   150,    89,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,    99
};

static const yytype_int16 yycheck[] =
{
      59,    60,     1,     3,     3,     4,     5,     6,    33,    34,
      38,    36,    37,    12,    13,    14,    15,    16,    17,    18,
      19,    20,    21,    22,    23,    24,    25,    26,    27,    28,
      29,    30,    31,    32,    34,    40,     9,    40,    11,    38,
       1,    33,     3,     4,     5,     6,    34,    35,    34,    35,
     109,    12,    13,    14,    15,    16,    17,    18,    19,    20,
      21,    22,    23,    24,    25,    26,    27,    28,    29,    30,
      31,    32,    46,    47,    49,    50,    73,    51,    75,    34,
      35,    40,    57,    58,    40,    82,    40,    84,     7,     8,
      40,    10,    11,    40,    68,    34,    35,    34,    35,    34,
      35,    41,    42,    41,    42,     0,    40,    40,    40,    40,
      40,    40,    40,    40,    34,    38,    41,    35,    34,    41,
      41,    34,    89,    28,    41,   146,   127,    42,    42,    41,
      41,    41,    34,    41,    43,    41,    34,    41,    41,    -1,
      34,    41,    41,    -1,    41,    41,   131,    -1,    41,    -1,
      42,    41,    41,    60,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    66
};

  /* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
     symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,     1,     3,     4,     5,     6,    12,    13,    14,    15,
      16,    17,    18,    19,    20,    21,    22,    23,    24,    25,
      26,    27,    28,    29,    30,    31,    32,    45,    46,    47,
      48,    60,    64,    65,    66,    67,    68,    69,    70,    71,
      72,    38,    40,    40,    40,    40,    40,    40,    40,    40,
      40,    40,    40,     0,     1,    38,    47,    40,    40,    40,
      40,    33,    34,    35,    59,    34,    59,    59,    34,    35,
      49,    50,    57,    35,    49,    35,    49,    59,     3,    34,
      73,    38,    35,    49,    35,    49,    35,    57,    58,    58,
      41,    41,     7,     8,    10,    11,    61,    62,    41,    61,
       9,    11,    63,    59,    34,    51,    52,    56,    41,    42,
      51,    41,    51,    41,    41,    43,    51,    41,    51,    41,
      34,    34,    53,    54,    55,    53,    41,    42,    41,    41,
      41,    42,    57,    41,    41,    33,    34,    36,    37,    74,
      75,    76,    77,    41,    41,    41,    42,    41,    62,    56,
      41,    55
};

  /* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint8 yyr1[] =
{
       0,    44,    45,    45,    45,    46,    46,    47,    47,    47,
      47,    47,    47,    47,    48,    49,    49,    50,    50,    51,
      51,    52,    52,    53,    53,    54,    54,    55,    56,    57,
      58,    58,    59,    59,    60,    60,    60,    60,    60,    60,
      60,    60,    60,    60,    61,    61,    61,    62,    62,    62,
      62,    63,    63,    64,    64,    64,    64,    65,    65,    66,
      66,    66,    67,    67,    67,    68,    68,    68,    68,    69,
      69,    69,    69,    70,    71,    72,    73,    73,    74,    74,
      75,    75,    76,    77,    77
};

  /* YYR2[YYN] -- Number of symbols on the right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,     2,     3,     2,     1,     2,     1,     1,     1,
       1,     1,     1,     1,     4,     0,     1,     1,     3,     0,
       1,     1,     3,     0,     1,     1,     3,     1,     1,     2,
       1,     2,     0,     1,     5,     5,     5,     4,     5,     4,
       5,     4,     5,     4,     0,     1,     3,     1,     1,     1,
       1,     1,     1,     4,     5,     4,     5,     5,     5,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     4,     6,     4,     1,     1,     1,     1,
       1,     1,     1,     1,     1
};


#define yyerrok         (yyerrstatus = 0)
#define yyclearin       (yychar = YYEMPTY)
#define YYEMPTY         (-2)
#define YYEOF           0

#define YYACCEPT        goto yyacceptlab
#define YYABORT         goto yyabortlab
#define YYERROR         goto yyerrorlab


#define YYRECOVERING()  (!!yyerrstatus)

#define YYBACKUP(Token, Value)                                  \
do                                                              \
  if (yychar == YYEMPTY)                                        \
    {                                                           \
      yychar = (Token);                                         \
      yylval = (Value);                                         \
      YYPOPSTACK (yylen);                                       \
      yystate = *yyssp;                                         \
      goto yybackup;                                            \
    }                                                           \
  else                                                          \
    {                                                           \
      yyerror (thd, scanner, ret, YY_("syntax error: cannot back up")); \
      YYERROR;                                                  \
    }                                                           \
while (0)

/* Error token number */
#define YYTERROR        1
#define YYERRCODE       256



/* Enable debugging if requested.  */
#if YYDEBUG

# ifndef YYFPRINTF
#  include <stdio.h> /* INFRINGES ON USER NAME SPACE */
#  define YYFPRINTF fprintf
# endif

# define YYDPRINTF(Args)                        \
do {                                            \
  if (yydebug)                                  \
    YYFPRINTF Args;                             \
} while (0)

/* This macro is provided for backward compatibility. */
#ifndef YY_LOCATION_PRINT
# define YY_LOCATION_PRINT(File, Loc) ((void) 0)
#endif


# define YY_SYMBOL_PRINT(Title, Type, Value, Location)                    \
do {                                                                      \
  if (yydebug)                                                            \
    {                                                                     \
      YYFPRINTF (stderr, "%s ", Title);                                   \
      yy_symbol_print (stderr,                                            \
                  Type, Value, thd, scanner, ret); \
      YYFPRINTF (stderr, "\n");                                           \
    }                                                                     \
} while (0)


/*----------------------------------------.
| Print this symbol's value on YYOUTPUT.  |
`----------------------------------------*/

static void
yy_symbol_value_print (FILE *yyoutput, int yytype, YYSTYPE const * const yyvaluep, class THD *thd, class Hint_scanner *scanner, class PT_hint_list **ret)
{
  FILE *yyo = yyoutput;
  YYUSE (yyo);
  YYUSE (thd);
  YYUSE (scanner);
  YYUSE (ret);
  if (!yyvaluep)
    return;
# ifdef YYPRINT
  if (yytype < YYNTOKENS)
    YYPRINT (yyoutput, yytoknum[yytype], *yyvaluep);
# endif
  YYUSE (yytype);
}


/*--------------------------------.
| Print this symbol on YYOUTPUT.  |
`--------------------------------*/

static void
yy_symbol_print (FILE *yyoutput, int yytype, YYSTYPE const * const yyvaluep, class THD *thd, class Hint_scanner *scanner, class PT_hint_list **ret)
{
  YYFPRINTF (yyoutput, "%s %s (",
             yytype < YYNTOKENS ? "token" : "nterm", yytname[yytype]);

  yy_symbol_value_print (yyoutput, yytype, yyvaluep, thd, scanner, ret);
  YYFPRINTF (yyoutput, ")");
}

/*------------------------------------------------------------------.
| yy_stack_print -- Print the state stack from its BOTTOM up to its |
| TOP (included).                                                   |
`------------------------------------------------------------------*/

static void
yy_stack_print (yytype_int16 *yybottom, yytype_int16 *yytop)
{
  YYFPRINTF (stderr, "Stack now");
  for (; yybottom <= yytop; yybottom++)
    {
      int yybot = *yybottom;
      YYFPRINTF (stderr, " %d", yybot);
    }
  YYFPRINTF (stderr, "\n");
}

# define YY_STACK_PRINT(Bottom, Top)                            \
do {                                                            \
  if (yydebug)                                                  \
    yy_stack_print ((Bottom), (Top));                           \
} while (0)


/*------------------------------------------------.
| Report that the YYRULE is going to be reduced.  |
`------------------------------------------------*/

static void
yy_reduce_print (yytype_int16 *yyssp, YYSTYPE *yyvsp, int yyrule, class THD *thd, class Hint_scanner *scanner, class PT_hint_list **ret)
{
  unsigned long int yylno = yyrline[yyrule];
  int yynrhs = yyr2[yyrule];
  int yyi;
  YYFPRINTF (stderr, "Reducing stack by rule %d (line %lu):\n",
             yyrule - 1, yylno);
  /* The symbols being reduced.  */
  for (yyi = 0; yyi < yynrhs; yyi++)
    {
      YYFPRINTF (stderr, "   $%d = ", yyi + 1);
      yy_symbol_print (stderr,
                       yystos[yyssp[yyi + 1 - yynrhs]],
                       &(yyvsp[(yyi + 1) - (yynrhs)])
                                              , thd, scanner, ret);
      YYFPRINTF (stderr, "\n");
    }
}

# define YY_REDUCE_PRINT(Rule)          \
do {                                    \
  if (yydebug)                          \
    yy_reduce_print (yyssp, yyvsp, Rule, thd, scanner, ret); \
} while (0)

/* Nonzero means print parse trace.  It is left uninitialized so that
   multiple parsers can coexist.  */
int yydebug;
#else /* !YYDEBUG */
# define YYDPRINTF(Args)
# define YY_SYMBOL_PRINT(Title, Type, Value, Location)
# define YY_STACK_PRINT(Bottom, Top)
# define YY_REDUCE_PRINT(Rule)
#endif /* !YYDEBUG */


/* YYINITDEPTH -- initial size of the parser's stacks.  */
#ifndef YYINITDEPTH
# define YYINITDEPTH 200
#endif

/* YYMAXDEPTH -- maximum size the stacks can grow to (effective only
   if the built-in stack extension method is used).

   Do not make this value too large; the results are undefined if
   YYSTACK_ALLOC_MAXIMUM < YYSTACK_BYTES (YYMAXDEPTH)
   evaluated with infinite-precision integer arithmetic.  */

#ifndef YYMAXDEPTH
# define YYMAXDEPTH 10000
#endif


#if YYERROR_VERBOSE

# ifndef yystrlen
#  if defined __GLIBC__ && defined _STRING_H
#   define yystrlen strlen
#  else
/* Return the length of YYSTR.  */
static YYSIZE_T
yystrlen (const char *yystr)
{
  YYSIZE_T yylen;
  for (yylen = 0; yystr[yylen]; yylen++)
    continue;
  return yylen;
}
#  endif
# endif

# ifndef yystpcpy
#  if defined __GLIBC__ && defined _STRING_H && defined _GNU_SOURCE
#   define yystpcpy stpcpy
#  else
/* Copy YYSRC to YYDEST, returning the address of the terminating '\0' in
   YYDEST.  */
static char *
yystpcpy (char *yydest, const char *yysrc)
{
  char *yyd = yydest;
  const char *yys = yysrc;

  while ((*yyd++ = *yys++) != '\0')
    continue;

  return yyd - 1;
}
#  endif
# endif

# ifndef yytnamerr
/* Copy to YYRES the contents of YYSTR after stripping away unnecessary
   quotes and backslashes, so that it's suitable for yyerror.  The
   heuristic is that double-quoting is unnecessary unless the string
   contains an apostrophe, a comma, or backslash (other than
   backslash-backslash).  YYSTR is taken from yytname.  If YYRES is
   null, do not copy; instead, return the length of what the result
   would have been.  */
static YYSIZE_T
yytnamerr (char *yyres, const char *yystr)
{
  if (*yystr == '"')
    {
      YYSIZE_T yyn = 0;
      char const *yyp = yystr;

      for (;;)
        switch (*++yyp)
          {
          case '\'':
          case ',':
            goto do_not_strip_quotes;

          case '\\':
            if (*++yyp != '\\')
              goto do_not_strip_quotes;
            /* Fall through.  */
          default:
            if (yyres)
              yyres[yyn] = *yyp;
            yyn++;
            break;

          case '"':
            if (yyres)
              yyres[yyn] = '\0';
            return yyn;
          }
    do_not_strip_quotes: ;
    }

  if (! yyres)
    return yystrlen (yystr);

  return yystpcpy (yyres, yystr) - yyres;
}
# endif

/* Copy into *YYMSG, which is of size *YYMSG_ALLOC, an error message
   about the unexpected token YYTOKEN for the state stack whose top is
   YYSSP.

   Return 0 if *YYMSG was successfully written.  Return 1 if *YYMSG is
   not large enough to hold the message.  In that case, also set
   *YYMSG_ALLOC to the required number of bytes.  Return 2 if the
   required number of bytes is too large to store.  */
static int
yysyntax_error (YYSIZE_T *yymsg_alloc, char **yymsg,
                yytype_int16 *yyssp, int yytoken)
{
  YYSIZE_T yysize0 = yytnamerr (YY_NULLPTR, yytname[yytoken]);
  YYSIZE_T yysize = yysize0;
  enum { YYERROR_VERBOSE_ARGS_MAXIMUM = 5 };
  /* Internationalized format string. */
  const char *yyformat = YY_NULLPTR;
  /* Arguments of yyformat. */
  char const *yyarg[YYERROR_VERBOSE_ARGS_MAXIMUM];
  /* Number of reported tokens (one for the "unexpected", one per
     "expected"). */
  int yycount = 0;

  /* There are many possibilities here to consider:
     - If this state is a consistent state with a default action, then
       the only way this function was invoked is if the default action
       is an error action.  In that case, don't check for expected
       tokens because there are none.
     - The only way there can be no lookahead present (in yychar) is if
       this state is a consistent state with a default action.  Thus,
       detecting the absence of a lookahead is sufficient to determine
       that there is no unexpected or expected token to report.  In that
       case, just report a simple "syntax error".
     - Don't assume there isn't a lookahead just because this state is a
       consistent state with a default action.  There might have been a
       previous inconsistent state, consistent state with a non-default
       action, or user semantic action that manipulated yychar.
     - Of course, the expected token list depends on states to have
       correct lookahead information, and it depends on the parser not
       to perform extra reductions after fetching a lookahead from the
       scanner and before detecting a syntax error.  Thus, state merging
       (from LALR or IELR) and default reductions corrupt the expected
       token list.  However, the list is correct for canonical LR with
       one exception: it will still contain any token that will not be
       accepted due to an error action in a later state.
  */
  if (yytoken != YYEMPTY)
    {
      int yyn = yypact[*yyssp];
      yyarg[yycount++] = yytname[yytoken];
      if (!yypact_value_is_default (yyn))
        {
          /* Start YYX at -YYN if negative to avoid negative indexes in
             YYCHECK.  In other words, skip the first -YYN actions for
             this state because they are default actions.  */
          int yyxbegin = yyn < 0 ? -yyn : 0;
          /* Stay within bounds of both yycheck and yytname.  */
          int yychecklim = YYLAST - yyn + 1;
          int yyxend = yychecklim < YYNTOKENS ? yychecklim : YYNTOKENS;
          int yyx;

          for (yyx = yyxbegin; yyx < yyxend; ++yyx)
            if (yycheck[yyx + yyn] == yyx && yyx != YYTERROR
                && !yytable_value_is_error (yytable[yyx + yyn]))
              {
                if (yycount == YYERROR_VERBOSE_ARGS_MAXIMUM)
                  {
                    yycount = 1;
                    yysize = yysize0;
                    break;
                  }
                yyarg[yycount++] = yytname[yyx];
                {
                  YYSIZE_T yysize1 = yysize + yytnamerr (YY_NULLPTR, yytname[yyx]);
                  if (! (yysize <= yysize1
                         && yysize1 <= YYSTACK_ALLOC_MAXIMUM))
                    return 2;
                  yysize = yysize1;
                }
              }
        }
    }

  switch (yycount)
    {
# define YYCASE_(N, S)                      \
      case N:                               \
        yyformat = S;                       \
      break
      YYCASE_(0, YY_("syntax error"));
      YYCASE_(1, YY_("syntax error, unexpected %s"));
      YYCASE_(2, YY_("syntax error, unexpected %s, expecting %s"));
      YYCASE_(3, YY_("syntax error, unexpected %s, expecting %s or %s"));
      YYCASE_(4, YY_("syntax error, unexpected %s, expecting %s or %s or %s"));
      YYCASE_(5, YY_("syntax error, unexpected %s, expecting %s or %s or %s or %s"));
# undef YYCASE_
    }

  {
    YYSIZE_T yysize1 = yysize + yystrlen (yyformat);
    if (! (yysize <= yysize1 && yysize1 <= YYSTACK_ALLOC_MAXIMUM))
      return 2;
    yysize = yysize1;
  }

  if (*yymsg_alloc < yysize)
    {
      *yymsg_alloc = 2 * yysize;
      if (! (yysize <= *yymsg_alloc
             && *yymsg_alloc <= YYSTACK_ALLOC_MAXIMUM))
        *yymsg_alloc = YYSTACK_ALLOC_MAXIMUM;
      return 1;
    }

  /* Avoid sprintf, as that infringes on the user's name space.
     Don't have undefined behavior even if the translation
     produced a string with the wrong number of "%s"s.  */
  {
    char *yyp = *yymsg;
    int yyi = 0;
    while ((*yyp = *yyformat) != '\0')
      if (*yyp == '%' && yyformat[1] == 's' && yyi < yycount)
        {
          yyp += yytnamerr (yyp, yyarg[yyi++]);
          yyformat += 2;
        }
      else
        {
          yyp++;
          yyformat++;
        }
  }
  return 0;
}
#endif /* YYERROR_VERBOSE */

/*-----------------------------------------------.
| Release the memory associated to this symbol.  |
`-----------------------------------------------*/

static void
yydestruct (const char *yymsg, int yytype, YYSTYPE *yyvaluep, class THD *thd, class Hint_scanner *scanner, class PT_hint_list **ret)
{
  YYUSE (yyvaluep);
  YYUSE (thd);
  YYUSE (scanner);
  YYUSE (ret);
  if (!yymsg)
    yymsg = "Deleting";
  YY_SYMBOL_PRINT (yymsg, yytype, yyvaluep, yylocationp);

  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  YYUSE (yytype);
  YY_IGNORE_MAYBE_UNINITIALIZED_END
}




/*----------.
| yyparse.  |
`----------*/

int
yyparse (class THD *thd, class Hint_scanner *scanner, class PT_hint_list **ret)
{
/* The lookahead symbol.  */
int yychar;


/* The semantic value of the lookahead symbol.  */
/* Default value used for initialization, for pacifying older GCCs
   or non-GCC compilers.  */
YY_INITIAL_VALUE (static YYSTYPE yyval_default;)
YYSTYPE yylval YY_INITIAL_VALUE (= yyval_default);

    /* Number of syntax errors so far.  */
    int yynerrs;

    int yystate;
    /* Number of tokens to shift before error messages enabled.  */
    int yyerrstatus;

    /* The stacks and their tools:
       'yyss': related to states.
       'yyvs': related to semantic values.

       Refer to the stacks through separate pointers, to allow yyoverflow
       to reallocate them elsewhere.  */

    /* The state stack.  */
    yytype_int16 yyssa[YYINITDEPTH];
    yytype_int16 *yyss;
    yytype_int16 *yyssp;

    /* The semantic value stack.  */
    YYSTYPE yyvsa[YYINITDEPTH];
    YYSTYPE *yyvs;
    YYSTYPE *yyvsp;

    YYSIZE_T yystacksize;

  int yyn;
  int yyresult;
  /* Lookahead token as an internal (translated) token number.  */
  int yytoken = 0;
  /* The variables used to return semantic value and location from the
     action routines.  */
  YYSTYPE yyval;

#if YYERROR_VERBOSE
  /* Buffer for error messages, and its allocated size.  */
  char yymsgbuf[128];
  char *yymsg = yymsgbuf;
  YYSIZE_T yymsg_alloc = sizeof yymsgbuf;
#endif

#define YYPOPSTACK(N)   (yyvsp -= (N), yyssp -= (N))

  /* The number of symbols on the RHS of the reduced rule.
     Keep to zero when no symbol should be popped.  */
  int yylen = 0;

  yyssp = yyss = yyssa;
  yyvsp = yyvs = yyvsa;
  yystacksize = YYINITDEPTH;

  YYDPRINTF ((stderr, "Starting parse\n"));

  yystate = 0;
  yyerrstatus = 0;
  yynerrs = 0;
  yychar = YYEMPTY; /* Cause a token to be read.  */
  goto yysetstate;

/*------------------------------------------------------------.
| yynewstate -- Push a new state, which is found in yystate.  |
`------------------------------------------------------------*/
 yynewstate:
  /* In all cases, when you get here, the value and location stacks
     have just been pushed.  So pushing a state here evens the stacks.  */
  yyssp++;

 yysetstate:
  *yyssp = yystate;

  if (yyss + yystacksize - 1 <= yyssp)
    {
      /* Get the current used size of the three stacks, in elements.  */
      YYSIZE_T yysize = yyssp - yyss + 1;

#ifdef yyoverflow
      {
        /* Give user a chance to reallocate the stack.  Use copies of
           these so that the &'s don't force the real ones into
           memory.  */
        YYSTYPE *yyvs1 = yyvs;
        yytype_int16 *yyss1 = yyss;

        /* Each stack pointer address is followed by the size of the
           data in use in that stack, in bytes.  This used to be a
           conditional around just the two extra args, but that might
           be undefined if yyoverflow is a macro.  */
        yyoverflow (YY_("memory exhausted"),
                    &yyss1, yysize * sizeof (*yyssp),
                    &yyvs1, yysize * sizeof (*yyvsp),
                    &yystacksize);

        yyss = yyss1;
        yyvs = yyvs1;
      }
#else /* no yyoverflow */
# ifndef YYSTACK_RELOCATE
      goto yyexhaustedlab;
# else
      /* Extend the stack our own way.  */
      if (YYMAXDEPTH <= yystacksize)
        goto yyexhaustedlab;
      yystacksize *= 2;
      if (YYMAXDEPTH < yystacksize)
        yystacksize = YYMAXDEPTH;

      {
        yytype_int16 *yyss1 = yyss;
        union yyalloc *yyptr =
          (union yyalloc *) YYSTACK_ALLOC (YYSTACK_BYTES (yystacksize));
        if (! yyptr)
          goto yyexhaustedlab;
        YYSTACK_RELOCATE (yyss_alloc, yyss);
        YYSTACK_RELOCATE (yyvs_alloc, yyvs);
#  undef YYSTACK_RELOCATE
        if (yyss1 != yyssa)
          YYSTACK_FREE (yyss1);
      }
# endif
#endif /* no yyoverflow */

      yyssp = yyss + yysize - 1;
      yyvsp = yyvs + yysize - 1;

      YYDPRINTF ((stderr, "Stack size increased to %lu\n",
                  (unsigned long int) yystacksize));

      if (yyss + yystacksize - 1 <= yyssp)
        YYABORT;
    }

  YYDPRINTF ((stderr, "Entering state %d\n", yystate));

  if (yystate == YYFINAL)
    YYACCEPT;

  goto yybackup;

/*-----------.
| yybackup.  |
`-----------*/
yybackup:

  /* Do appropriate processing given the current state.  Read a
     lookahead token if we need one and don't already have one.  */

  /* First try to decide what to do without reference to lookahead token.  */
  yyn = yypact[yystate];
  if (yypact_value_is_default (yyn))
    goto yydefault;

  /* Not known => get a lookahead token if don't already have one.  */

  /* YYCHAR is either YYEMPTY or YYEOF or a valid lookahead symbol.  */
  if (yychar == YYEMPTY)
    {
      YYDPRINTF ((stderr, "Reading a token: "));
      yychar = yylex (&yylval, scanner);
    }

  if (yychar <= YYEOF)
    {
      yychar = yytoken = YYEOF;
      YYDPRINTF ((stderr, "Now at end of input.\n"));
    }
  else
    {
      yytoken = YYTRANSLATE (yychar);
      YY_SYMBOL_PRINT ("Next token is", yytoken, &yylval, &yylloc);
    }

  /* If the proper action on seeing token YYTOKEN is to reduce or to
     detect an error, take that action.  */
  yyn += yytoken;
  if (yyn < 0 || YYLAST < yyn || yycheck[yyn] != yytoken)
    goto yydefault;
  yyn = yytable[yyn];
  if (yyn <= 0)
    {
      if (yytable_value_is_error (yyn))
        goto yyerrlab;
      yyn = -yyn;
      goto yyreduce;
    }

  /* Count tokens shifted since error; after three, turn off error
     status.  */
  if (yyerrstatus)
    yyerrstatus--;

  /* Shift the lookahead token.  */
  YY_SYMBOL_PRINT ("Shifting", yytoken, &yylval, &yylloc);

  /* Discard the shifted token.  */
  yychar = YYEMPTY;

  yystate = yyn;
  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  *++yyvsp = yylval;
  YY_IGNORE_MAYBE_UNINITIALIZED_END

  goto yynewstate;


/*-----------------------------------------------------------.
| yydefault -- do the default action for the current state.  |
`-----------------------------------------------------------*/
yydefault:
  yyn = yydefact[yystate];
  if (yyn == 0)
    goto yyerrlab;
  goto yyreduce;


/*-----------------------------.
| yyreduce -- Do a reduction.  |
`-----------------------------*/
yyreduce:
  /* yyn is the number of a rule to reduce with.  */
  yylen = yyr2[yyn];

  /* If YYLEN is nonzero, implement the default value of the action:
     '$$ = $1'.

     Otherwise, the following line sets YYVAL to garbage.
     This behavior is undocumented and Bison
     users should not rely upon it.  Assigning to YYVAL
     unconditionally makes the parser a bit smaller, and it avoids a
     GCC warning that YYVAL may be used uninitialized.  */
  yyval = yyvsp[1-yylen];


  YY_REDUCE_PRINT (yyn);
  switch (yyn)
    {
        case 2:
#line 164 "/export/home3/pb2/build/sb_4-33646267-1555156040.89/mysql-8.0.16-release-export-14634434_gpl/sql/sql_hints.yy" /* yacc.c:1646  */
    { *ret= (yyvsp[-1].hint_list); }
#line 1429 "/export/home3/pb2/build/sb_4-33646267-1555156040.89/dist_GPL/sql/sql_hints.yy.cc" /* yacc.c:1646  */
    break;

  case 3:
#line 166 "/export/home3/pb2/build/sb_4-33646267-1555156040.89/mysql-8.0.16-release-export-14634434_gpl/sql/sql_hints.yy" /* yacc.c:1646  */
    { *ret= (yyvsp[-2].hint_list); }
#line 1435 "/export/home3/pb2/build/sb_4-33646267-1555156040.89/dist_GPL/sql/sql_hints.yy.cc" /* yacc.c:1646  */
    break;

  case 4:
#line 168 "/export/home3/pb2/build/sb_4-33646267-1555156040.89/mysql-8.0.16-release-export-14634434_gpl/sql/sql_hints.yy" /* yacc.c:1646  */
    { *ret= NULL; }
#line 1441 "/export/home3/pb2/build/sb_4-33646267-1555156040.89/dist_GPL/sql/sql_hints.yy.cc" /* yacc.c:1646  */
    break;

  case 5:
#line 173 "/export/home3/pb2/build/sb_4-33646267-1555156040.89/mysql-8.0.16-release-export-14634434_gpl/sql/sql_hints.yy" /* yacc.c:1646  */
    {
            (yyval.hint_list)= NEW_PTN PT_hint_list(thd->mem_root);
            if ((yyval.hint_list) == NULL || (yyval.hint_list)->push_back((yyvsp[0].hint)))
              YYABORT; // OOM
          }
#line 1451 "/export/home3/pb2/build/sb_4-33646267-1555156040.89/dist_GPL/sql/sql_hints.yy.cc" /* yacc.c:1646  */
    break;

  case 6:
#line 179 "/export/home3/pb2/build/sb_4-33646267-1555156040.89/mysql-8.0.16-release-export-14634434_gpl/sql/sql_hints.yy" /* yacc.c:1646  */
    {
            (yyvsp[-1].hint_list)->push_back((yyvsp[0].hint));
            (yyval.hint_list)= (yyvsp[-1].hint_list);
          }
#line 1460 "/export/home3/pb2/build/sb_4-33646267-1555156040.89/dist_GPL/sql/sql_hints.yy.cc" /* yacc.c:1646  */
    break;

  case 14:
#line 198 "/export/home3/pb2/build/sb_4-33646267-1555156040.89/mysql-8.0.16-release-export-14634434_gpl/sql/sql_hints.yy" /* yacc.c:1646  */
    {
            longlong n;
            if (parse_int(&n, (yyvsp[-1].lexer.hint_string).str, (yyvsp[-1].lexer.hint_string).length) || n > UINT_MAX32)
            {
              scanner->syntax_warning(ER_THD(thd,
                                             ER_WARN_BAD_MAX_EXECUTION_TIME));
              (yyval.hint)= NULL;
            }
            else
            {
              (yyval.hint)= NEW_PTN PT_hint_max_execution_time(n);
              if ((yyval.hint) == NULL)
                YYABORT; // OOM
            }
          }
#line 1480 "/export/home3/pb2/build/sb_4-33646267-1555156040.89/dist_GPL/sql/sql_hints.yy.cc" /* yacc.c:1646  */
    break;

  case 15:
#line 217 "/export/home3/pb2/build/sb_4-33646267-1555156040.89/mysql-8.0.16-release-export-14634434_gpl/sql/sql_hints.yy" /* yacc.c:1646  */
    { (yyval.hint_param_table_list).init(thd->mem_root); }
#line 1486 "/export/home3/pb2/build/sb_4-33646267-1555156040.89/dist_GPL/sql/sql_hints.yy.cc" /* yacc.c:1646  */
    break;

  case 17:
#line 223 "/export/home3/pb2/build/sb_4-33646267-1555156040.89/mysql-8.0.16-release-export-14634434_gpl/sql/sql_hints.yy" /* yacc.c:1646  */
    {
            (yyval.hint_param_table_list).init(thd->mem_root);
            if ((yyval.hint_param_table_list).push_back((yyvsp[0].hint_param_table)))
              YYABORT; // OOM
          }
#line 1496 "/export/home3/pb2/build/sb_4-33646267-1555156040.89/dist_GPL/sql/sql_hints.yy.cc" /* yacc.c:1646  */
    break;

  case 18:
#line 229 "/export/home3/pb2/build/sb_4-33646267-1555156040.89/mysql-8.0.16-release-export-14634434_gpl/sql/sql_hints.yy" /* yacc.c:1646  */
    {
            if ((yyvsp[-2].hint_param_table_list).push_back((yyvsp[0].hint_param_table)))
              YYABORT; // OOM
            (yyval.hint_param_table_list)= (yyvsp[-2].hint_param_table_list);
          }
#line 1506 "/export/home3/pb2/build/sb_4-33646267-1555156040.89/dist_GPL/sql/sql_hints.yy.cc" /* yacc.c:1646  */
    break;

  case 19:
#line 237 "/export/home3/pb2/build/sb_4-33646267-1555156040.89/mysql-8.0.16-release-export-14634434_gpl/sql/sql_hints.yy" /* yacc.c:1646  */
    { (yyval.hint_param_table_list).init(thd->mem_root); }
#line 1512 "/export/home3/pb2/build/sb_4-33646267-1555156040.89/dist_GPL/sql/sql_hints.yy.cc" /* yacc.c:1646  */
    break;

  case 21:
#line 243 "/export/home3/pb2/build/sb_4-33646267-1555156040.89/mysql-8.0.16-release-export-14634434_gpl/sql/sql_hints.yy" /* yacc.c:1646  */
    {
            (yyval.hint_param_table_list).init(thd->mem_root);
            if ((yyval.hint_param_table_list).push_back((yyvsp[0].hint_param_table)))
              YYABORT; // OOM
          }
#line 1522 "/export/home3/pb2/build/sb_4-33646267-1555156040.89/dist_GPL/sql/sql_hints.yy.cc" /* yacc.c:1646  */
    break;

  case 22:
#line 249 "/export/home3/pb2/build/sb_4-33646267-1555156040.89/mysql-8.0.16-release-export-14634434_gpl/sql/sql_hints.yy" /* yacc.c:1646  */
    {
            if ((yyvsp[-2].hint_param_table_list).push_back((yyvsp[0].hint_param_table)))
              YYABORT; // OOM
            (yyval.hint_param_table_list)= (yyvsp[-2].hint_param_table_list);
          }
#line 1532 "/export/home3/pb2/build/sb_4-33646267-1555156040.89/dist_GPL/sql/sql_hints.yy.cc" /* yacc.c:1646  */
    break;

  case 23:
#line 257 "/export/home3/pb2/build/sb_4-33646267-1555156040.89/mysql-8.0.16-release-export-14634434_gpl/sql/sql_hints.yy" /* yacc.c:1646  */
    { (yyval.hint_param_index_list).init(thd->mem_root); }
#line 1538 "/export/home3/pb2/build/sb_4-33646267-1555156040.89/dist_GPL/sql/sql_hints.yy.cc" /* yacc.c:1646  */
    break;

  case 25:
#line 263 "/export/home3/pb2/build/sb_4-33646267-1555156040.89/mysql-8.0.16-release-export-14634434_gpl/sql/sql_hints.yy" /* yacc.c:1646  */
    {
            (yyval.hint_param_index_list).init(thd->mem_root);
            if ((yyval.hint_param_index_list).push_back((yyvsp[0].lexer.hint_string)))
              YYABORT; // OOM
          }
#line 1548 "/export/home3/pb2/build/sb_4-33646267-1555156040.89/dist_GPL/sql/sql_hints.yy.cc" /* yacc.c:1646  */
    break;

  case 26:
#line 269 "/export/home3/pb2/build/sb_4-33646267-1555156040.89/mysql-8.0.16-release-export-14634434_gpl/sql/sql_hints.yy" /* yacc.c:1646  */
    {
            if ((yyvsp[-2].hint_param_index_list).push_back((yyvsp[0].lexer.hint_string)))
              YYABORT; // OOM
            (yyval.hint_param_index_list)= (yyvsp[-2].hint_param_index_list);
          }
#line 1558 "/export/home3/pb2/build/sb_4-33646267-1555156040.89/dist_GPL/sql/sql_hints.yy.cc" /* yacc.c:1646  */
    break;

  case 28:
#line 282 "/export/home3/pb2/build/sb_4-33646267-1555156040.89/mysql-8.0.16-release-export-14634434_gpl/sql/sql_hints.yy" /* yacc.c:1646  */
    {
            (yyval.hint_param_table).table= (yyvsp[0].lexer.hint_string);
            (yyval.hint_param_table).opt_query_block= NULL_CSTR;
          }
#line 1567 "/export/home3/pb2/build/sb_4-33646267-1555156040.89/dist_GPL/sql/sql_hints.yy.cc" /* yacc.c:1646  */
    break;

  case 29:
#line 290 "/export/home3/pb2/build/sb_4-33646267-1555156040.89/mysql-8.0.16-release-export-14634434_gpl/sql/sql_hints.yy" /* yacc.c:1646  */
    {
            (yyval.hint_param_table).table= (yyvsp[-1].lexer.hint_string);
            (yyval.hint_param_table).opt_query_block= (yyvsp[0].lexer.hint_string);
          }
#line 1576 "/export/home3/pb2/build/sb_4-33646267-1555156040.89/dist_GPL/sql/sql_hints.yy.cc" /* yacc.c:1646  */
    break;

  case 31:
#line 299 "/export/home3/pb2/build/sb_4-33646267-1555156040.89/mysql-8.0.16-release-export-14634434_gpl/sql/sql_hints.yy" /* yacc.c:1646  */
    {
            (yyval.hint_param_table).table= (yyvsp[0].lexer.hint_string);
            (yyval.hint_param_table).opt_query_block= (yyvsp[-1].lexer.hint_string);
          }
#line 1585 "/export/home3/pb2/build/sb_4-33646267-1555156040.89/dist_GPL/sql/sql_hints.yy.cc" /* yacc.c:1646  */
    break;

  case 32:
#line 306 "/export/home3/pb2/build/sb_4-33646267-1555156040.89/mysql-8.0.16-release-export-14634434_gpl/sql/sql_hints.yy" /* yacc.c:1646  */
    { (yyval.lexer.hint_string)= NULL_CSTR; }
#line 1591 "/export/home3/pb2/build/sb_4-33646267-1555156040.89/dist_GPL/sql/sql_hints.yy.cc" /* yacc.c:1646  */
    break;

  case 34:
#line 312 "/export/home3/pb2/build/sb_4-33646267-1555156040.89/mysql-8.0.16-release-export-14634434_gpl/sql/sql_hints.yy" /* yacc.c:1646  */
    {
            (yyval.hint)= NEW_PTN PT_qb_level_hint((yyvsp[-2].lexer.hint_string), true, SEMIJOIN_HINT_ENUM, (yyvsp[-1].ulong_num));
            if ((yyval.hint) == NULL)
              YYABORT; // OOM
          }
#line 1601 "/export/home3/pb2/build/sb_4-33646267-1555156040.89/dist_GPL/sql/sql_hints.yy.cc" /* yacc.c:1646  */
    break;

  case 35:
#line 319 "/export/home3/pb2/build/sb_4-33646267-1555156040.89/mysql-8.0.16-release-export-14634434_gpl/sql/sql_hints.yy" /* yacc.c:1646  */
    {
            (yyval.hint)= NEW_PTN PT_qb_level_hint((yyvsp[-2].lexer.hint_string), false, SEMIJOIN_HINT_ENUM, (yyvsp[-1].ulong_num));
            if ((yyval.hint) == NULL)
              YYABORT; // OOM
          }
#line 1611 "/export/home3/pb2/build/sb_4-33646267-1555156040.89/dist_GPL/sql/sql_hints.yy.cc" /* yacc.c:1646  */
    break;

  case 36:
#line 326 "/export/home3/pb2/build/sb_4-33646267-1555156040.89/mysql-8.0.16-release-export-14634434_gpl/sql/sql_hints.yy" /* yacc.c:1646  */
    {
            (yyval.hint)= NEW_PTN PT_qb_level_hint((yyvsp[-2].lexer.hint_string), true, SUBQUERY_HINT_ENUM, (yyvsp[-1].ulong_num));
            if ((yyval.hint) == NULL)
              YYABORT; // OOM
          }
#line 1621 "/export/home3/pb2/build/sb_4-33646267-1555156040.89/dist_GPL/sql/sql_hints.yy.cc" /* yacc.c:1646  */
    break;

  case 37:
#line 333 "/export/home3/pb2/build/sb_4-33646267-1555156040.89/mysql-8.0.16-release-export-14634434_gpl/sql/sql_hints.yy" /* yacc.c:1646  */
    {
            (yyval.hint)= NEW_PTN PT_qb_level_hint(NULL_CSTR, true, JOIN_PREFIX_HINT_ENUM, (yyvsp[-1].hint_param_table_list));
            if ((yyval.hint) == NULL)
              YYABORT; // OOM
          }
#line 1631 "/export/home3/pb2/build/sb_4-33646267-1555156040.89/dist_GPL/sql/sql_hints.yy.cc" /* yacc.c:1646  */
    break;

  case 38:
#line 340 "/export/home3/pb2/build/sb_4-33646267-1555156040.89/mysql-8.0.16-release-export-14634434_gpl/sql/sql_hints.yy" /* yacc.c:1646  */
    {
            (yyval.hint)= NEW_PTN PT_qb_level_hint((yyvsp[-2].lexer.hint_string), true, JOIN_PREFIX_HINT_ENUM, (yyvsp[-1].hint_param_table_list));
            if ((yyval.hint) == NULL)
              YYABORT; // OOM
          }
#line 1641 "/export/home3/pb2/build/sb_4-33646267-1555156040.89/dist_GPL/sql/sql_hints.yy.cc" /* yacc.c:1646  */
    break;

  case 39:
#line 347 "/export/home3/pb2/build/sb_4-33646267-1555156040.89/mysql-8.0.16-release-export-14634434_gpl/sql/sql_hints.yy" /* yacc.c:1646  */
    {
            (yyval.hint)= NEW_PTN PT_qb_level_hint(NULL_CSTR, true, JOIN_SUFFIX_HINT_ENUM, (yyvsp[-1].hint_param_table_list));
            if ((yyval.hint) == NULL)
              YYABORT; // OOM
          }
#line 1651 "/export/home3/pb2/build/sb_4-33646267-1555156040.89/dist_GPL/sql/sql_hints.yy.cc" /* yacc.c:1646  */
    break;

  case 40:
#line 354 "/export/home3/pb2/build/sb_4-33646267-1555156040.89/mysql-8.0.16-release-export-14634434_gpl/sql/sql_hints.yy" /* yacc.c:1646  */
    {
            (yyval.hint)= NEW_PTN PT_qb_level_hint((yyvsp[-2].lexer.hint_string), true, JOIN_SUFFIX_HINT_ENUM, (yyvsp[-1].hint_param_table_list));
            if ((yyval.hint) == NULL)
              YYABORT; // OOM
          }
#line 1661 "/export/home3/pb2/build/sb_4-33646267-1555156040.89/dist_GPL/sql/sql_hints.yy.cc" /* yacc.c:1646  */
    break;

  case 41:
#line 361 "/export/home3/pb2/build/sb_4-33646267-1555156040.89/mysql-8.0.16-release-export-14634434_gpl/sql/sql_hints.yy" /* yacc.c:1646  */
    {
            (yyval.hint)= NEW_PTN PT_qb_level_hint(NULL_CSTR, true, JOIN_ORDER_HINT_ENUM, (yyvsp[-1].hint_param_table_list));
            if ((yyval.hint) == NULL)
              YYABORT; // OOM
          }
#line 1671 "/export/home3/pb2/build/sb_4-33646267-1555156040.89/dist_GPL/sql/sql_hints.yy.cc" /* yacc.c:1646  */
    break;

  case 42:
#line 368 "/export/home3/pb2/build/sb_4-33646267-1555156040.89/mysql-8.0.16-release-export-14634434_gpl/sql/sql_hints.yy" /* yacc.c:1646  */
    {
            (yyval.hint)= NEW_PTN PT_qb_level_hint((yyvsp[-2].lexer.hint_string), true, JOIN_ORDER_HINT_ENUM, (yyvsp[-1].hint_param_table_list));
            if ((yyval.hint) == NULL)
              YYABORT; // OOM
          }
#line 1681 "/export/home3/pb2/build/sb_4-33646267-1555156040.89/dist_GPL/sql/sql_hints.yy.cc" /* yacc.c:1646  */
    break;

  case 43:
#line 375 "/export/home3/pb2/build/sb_4-33646267-1555156040.89/mysql-8.0.16-release-export-14634434_gpl/sql/sql_hints.yy" /* yacc.c:1646  */
    {
            (yyval.hint)= NEW_PTN PT_qb_level_hint((yyvsp[-1].lexer.hint_string), true, JOIN_FIXED_ORDER_HINT_ENUM, 0);
            if ((yyval.hint) == NULL)
              YYABORT; // OOM
          }
#line 1691 "/export/home3/pb2/build/sb_4-33646267-1555156040.89/dist_GPL/sql/sql_hints.yy.cc" /* yacc.c:1646  */
    break;

  case 44:
#line 383 "/export/home3/pb2/build/sb_4-33646267-1555156040.89/mysql-8.0.16-release-export-14634434_gpl/sql/sql_hints.yy" /* yacc.c:1646  */
    { (yyval.ulong_num)= 0; }
#line 1697 "/export/home3/pb2/build/sb_4-33646267-1555156040.89/dist_GPL/sql/sql_hints.yy.cc" /* yacc.c:1646  */
    break;

  case 45:
#line 385 "/export/home3/pb2/build/sb_4-33646267-1555156040.89/mysql-8.0.16-release-export-14634434_gpl/sql/sql_hints.yy" /* yacc.c:1646  */
    {
            (yyval.ulong_num)= (yyvsp[0].ulong_num);
          }
#line 1705 "/export/home3/pb2/build/sb_4-33646267-1555156040.89/dist_GPL/sql/sql_hints.yy.cc" /* yacc.c:1646  */
    break;

  case 46:
#line 389 "/export/home3/pb2/build/sb_4-33646267-1555156040.89/mysql-8.0.16-release-export-14634434_gpl/sql/sql_hints.yy" /* yacc.c:1646  */
    {
            (yyval.ulong_num)= (yyvsp[-2].ulong_num) | (yyvsp[0].ulong_num);
          }
#line 1713 "/export/home3/pb2/build/sb_4-33646267-1555156040.89/dist_GPL/sql/sql_hints.yy.cc" /* yacc.c:1646  */
    break;

  case 47:
#line 395 "/export/home3/pb2/build/sb_4-33646267-1555156040.89/mysql-8.0.16-release-export-14634434_gpl/sql/sql_hints.yy" /* yacc.c:1646  */
    { (yyval.ulong_num)= OPTIMIZER_SWITCH_FIRSTMATCH; }
#line 1719 "/export/home3/pb2/build/sb_4-33646267-1555156040.89/dist_GPL/sql/sql_hints.yy.cc" /* yacc.c:1646  */
    break;

  case 48:
#line 396 "/export/home3/pb2/build/sb_4-33646267-1555156040.89/mysql-8.0.16-release-export-14634434_gpl/sql/sql_hints.yy" /* yacc.c:1646  */
    { (yyval.ulong_num)= OPTIMIZER_SWITCH_LOOSE_SCAN; }
#line 1725 "/export/home3/pb2/build/sb_4-33646267-1555156040.89/dist_GPL/sql/sql_hints.yy.cc" /* yacc.c:1646  */
    break;

  case 49:
#line 397 "/export/home3/pb2/build/sb_4-33646267-1555156040.89/mysql-8.0.16-release-export-14634434_gpl/sql/sql_hints.yy" /* yacc.c:1646  */
    { (yyval.ulong_num)= OPTIMIZER_SWITCH_MATERIALIZATION; }
#line 1731 "/export/home3/pb2/build/sb_4-33646267-1555156040.89/dist_GPL/sql/sql_hints.yy.cc" /* yacc.c:1646  */
    break;

  case 50:
#line 398 "/export/home3/pb2/build/sb_4-33646267-1555156040.89/mysql-8.0.16-release-export-14634434_gpl/sql/sql_hints.yy" /* yacc.c:1646  */
    { (yyval.ulong_num)= OPTIMIZER_SWITCH_DUPSWEEDOUT; }
#line 1737 "/export/home3/pb2/build/sb_4-33646267-1555156040.89/dist_GPL/sql/sql_hints.yy.cc" /* yacc.c:1646  */
    break;

  case 51:
#line 402 "/export/home3/pb2/build/sb_4-33646267-1555156040.89/mysql-8.0.16-release-export-14634434_gpl/sql/sql_hints.yy" /* yacc.c:1646  */
    { (yyval.ulong_num)=
                                   Item_exists_subselect::EXEC_MATERIALIZATION; }
#line 1744 "/export/home3/pb2/build/sb_4-33646267-1555156040.89/dist_GPL/sql/sql_hints.yy.cc" /* yacc.c:1646  */
    break;

  case 52:
#line 404 "/export/home3/pb2/build/sb_4-33646267-1555156040.89/mysql-8.0.16-release-export-14634434_gpl/sql/sql_hints.yy" /* yacc.c:1646  */
    { (yyval.ulong_num)= Item_exists_subselect::EXEC_EXISTS; }
#line 1750 "/export/home3/pb2/build/sb_4-33646267-1555156040.89/dist_GPL/sql/sql_hints.yy.cc" /* yacc.c:1646  */
    break;

  case 53:
#line 410 "/export/home3/pb2/build/sb_4-33646267-1555156040.89/mysql-8.0.16-release-export-14634434_gpl/sql/sql_hints.yy" /* yacc.c:1646  */
    {
            (yyval.hint)= NEW_PTN PT_table_level_hint(NULL_CSTR, (yyvsp[-1].hint_param_table_list), true, (yyvsp[-3].hint_type));
            if ((yyval.hint) == NULL)
              YYABORT; // OOM
          }
#line 1760 "/export/home3/pb2/build/sb_4-33646267-1555156040.89/dist_GPL/sql/sql_hints.yy.cc" /* yacc.c:1646  */
    break;

  case 54:
#line 417 "/export/home3/pb2/build/sb_4-33646267-1555156040.89/mysql-8.0.16-release-export-14634434_gpl/sql/sql_hints.yy" /* yacc.c:1646  */
    {
            (yyval.hint)= NEW_PTN PT_table_level_hint((yyvsp[-2].lexer.hint_string), (yyvsp[-1].hint_param_table_list), true, (yyvsp[-4].hint_type));
            if ((yyval.hint) == NULL)
              YYABORT; // OOM
          }
#line 1770 "/export/home3/pb2/build/sb_4-33646267-1555156040.89/dist_GPL/sql/sql_hints.yy.cc" /* yacc.c:1646  */
    break;

  case 55:
#line 423 "/export/home3/pb2/build/sb_4-33646267-1555156040.89/mysql-8.0.16-release-export-14634434_gpl/sql/sql_hints.yy" /* yacc.c:1646  */
    {
            (yyval.hint)= NEW_PTN PT_table_level_hint(NULL_CSTR, (yyvsp[-1].hint_param_table_list), false, (yyvsp[-3].hint_type));
            if ((yyval.hint) == NULL)
              YYABORT; // OOM
          }
#line 1780 "/export/home3/pb2/build/sb_4-33646267-1555156040.89/dist_GPL/sql/sql_hints.yy.cc" /* yacc.c:1646  */
    break;

  case 56:
#line 430 "/export/home3/pb2/build/sb_4-33646267-1555156040.89/mysql-8.0.16-release-export-14634434_gpl/sql/sql_hints.yy" /* yacc.c:1646  */
    {
            (yyval.hint)= NEW_PTN PT_table_level_hint((yyvsp[-2].lexer.hint_string), (yyvsp[-1].hint_param_table_list), false, (yyvsp[-4].hint_type));
            if ((yyval.hint) == NULL)
              YYABORT; // OOM
          }
#line 1790 "/export/home3/pb2/build/sb_4-33646267-1555156040.89/dist_GPL/sql/sql_hints.yy.cc" /* yacc.c:1646  */
    break;

  case 57:
#line 440 "/export/home3/pb2/build/sb_4-33646267-1555156040.89/mysql-8.0.16-release-export-14634434_gpl/sql/sql_hints.yy" /* yacc.c:1646  */
    {
            (yyval.hint)= NEW_PTN PT_key_level_hint((yyvsp[-2].hint_param_table), (yyvsp[-1].hint_param_index_list), true, (yyvsp[-4].hint_type));
            if ((yyval.hint) == NULL)
              YYABORT; // OOM
          }
#line 1800 "/export/home3/pb2/build/sb_4-33646267-1555156040.89/dist_GPL/sql/sql_hints.yy.cc" /* yacc.c:1646  */
    break;

  case 58:
#line 447 "/export/home3/pb2/build/sb_4-33646267-1555156040.89/mysql-8.0.16-release-export-14634434_gpl/sql/sql_hints.yy" /* yacc.c:1646  */
    {
            (yyval.hint)= NEW_PTN PT_key_level_hint((yyvsp[-2].hint_param_table), (yyvsp[-1].hint_param_index_list), false, (yyvsp[-4].hint_type));
            if ((yyval.hint) == NULL)
              YYABORT; // OOM
          }
#line 1810 "/export/home3/pb2/build/sb_4-33646267-1555156040.89/dist_GPL/sql/sql_hints.yy.cc" /* yacc.c:1646  */
    break;

  case 59:
#line 456 "/export/home3/pb2/build/sb_4-33646267-1555156040.89/mysql-8.0.16-release-export-14634434_gpl/sql/sql_hints.yy" /* yacc.c:1646  */
    {
            (yyval.hint_type)= BKA_HINT_ENUM;
          }
#line 1818 "/export/home3/pb2/build/sb_4-33646267-1555156040.89/dist_GPL/sql/sql_hints.yy.cc" /* yacc.c:1646  */
    break;

  case 60:
#line 460 "/export/home3/pb2/build/sb_4-33646267-1555156040.89/mysql-8.0.16-release-export-14634434_gpl/sql/sql_hints.yy" /* yacc.c:1646  */
    {
            (yyval.hint_type)= BNL_HINT_ENUM;
          }
#line 1826 "/export/home3/pb2/build/sb_4-33646267-1555156040.89/dist_GPL/sql/sql_hints.yy.cc" /* yacc.c:1646  */
    break;

  case 61:
#line 464 "/export/home3/pb2/build/sb_4-33646267-1555156040.89/mysql-8.0.16-release-export-14634434_gpl/sql/sql_hints.yy" /* yacc.c:1646  */
    {
            (yyval.hint_type)= DERIVED_MERGE_HINT_ENUM;
          }
#line 1834 "/export/home3/pb2/build/sb_4-33646267-1555156040.89/dist_GPL/sql/sql_hints.yy.cc" /* yacc.c:1646  */
    break;

  case 62:
#line 471 "/export/home3/pb2/build/sb_4-33646267-1555156040.89/mysql-8.0.16-release-export-14634434_gpl/sql/sql_hints.yy" /* yacc.c:1646  */
    {
            (yyval.hint_type)= BKA_HINT_ENUM;
          }
#line 1842 "/export/home3/pb2/build/sb_4-33646267-1555156040.89/dist_GPL/sql/sql_hints.yy.cc" /* yacc.c:1646  */
    break;

  case 63:
#line 475 "/export/home3/pb2/build/sb_4-33646267-1555156040.89/mysql-8.0.16-release-export-14634434_gpl/sql/sql_hints.yy" /* yacc.c:1646  */
    {
            (yyval.hint_type)= BNL_HINT_ENUM;
          }
#line 1850 "/export/home3/pb2/build/sb_4-33646267-1555156040.89/dist_GPL/sql/sql_hints.yy.cc" /* yacc.c:1646  */
    break;

  case 64:
#line 479 "/export/home3/pb2/build/sb_4-33646267-1555156040.89/mysql-8.0.16-release-export-14634434_gpl/sql/sql_hints.yy" /* yacc.c:1646  */
    {
            (yyval.hint_type)= DERIVED_MERGE_HINT_ENUM;
          }
#line 1858 "/export/home3/pb2/build/sb_4-33646267-1555156040.89/dist_GPL/sql/sql_hints.yy.cc" /* yacc.c:1646  */
    break;

  case 65:
#line 486 "/export/home3/pb2/build/sb_4-33646267-1555156040.89/mysql-8.0.16-release-export-14634434_gpl/sql/sql_hints.yy" /* yacc.c:1646  */
    {
            (yyval.hint_type)= MRR_HINT_ENUM;
          }
#line 1866 "/export/home3/pb2/build/sb_4-33646267-1555156040.89/dist_GPL/sql/sql_hints.yy.cc" /* yacc.c:1646  */
    break;

  case 66:
#line 490 "/export/home3/pb2/build/sb_4-33646267-1555156040.89/mysql-8.0.16-release-export-14634434_gpl/sql/sql_hints.yy" /* yacc.c:1646  */
    {
            (yyval.hint_type)= NO_RANGE_HINT_ENUM;
          }
#line 1874 "/export/home3/pb2/build/sb_4-33646267-1555156040.89/dist_GPL/sql/sql_hints.yy.cc" /* yacc.c:1646  */
    break;

  case 67:
#line 494 "/export/home3/pb2/build/sb_4-33646267-1555156040.89/mysql-8.0.16-release-export-14634434_gpl/sql/sql_hints.yy" /* yacc.c:1646  */
    {
            (yyval.hint_type)= INDEX_MERGE_HINT_ENUM;
          }
#line 1882 "/export/home3/pb2/build/sb_4-33646267-1555156040.89/dist_GPL/sql/sql_hints.yy.cc" /* yacc.c:1646  */
    break;

  case 68:
#line 498 "/export/home3/pb2/build/sb_4-33646267-1555156040.89/mysql-8.0.16-release-export-14634434_gpl/sql/sql_hints.yy" /* yacc.c:1646  */
    {
            (yyval.hint_type)= SKIP_SCAN_HINT_ENUM;
          }
#line 1890 "/export/home3/pb2/build/sb_4-33646267-1555156040.89/dist_GPL/sql/sql_hints.yy.cc" /* yacc.c:1646  */
    break;

  case 69:
#line 505 "/export/home3/pb2/build/sb_4-33646267-1555156040.89/mysql-8.0.16-release-export-14634434_gpl/sql/sql_hints.yy" /* yacc.c:1646  */
    {
            (yyval.hint_type)= ICP_HINT_ENUM;
          }
#line 1898 "/export/home3/pb2/build/sb_4-33646267-1555156040.89/dist_GPL/sql/sql_hints.yy.cc" /* yacc.c:1646  */
    break;

  case 70:
#line 509 "/export/home3/pb2/build/sb_4-33646267-1555156040.89/mysql-8.0.16-release-export-14634434_gpl/sql/sql_hints.yy" /* yacc.c:1646  */
    {
            (yyval.hint_type)= MRR_HINT_ENUM;
          }
#line 1906 "/export/home3/pb2/build/sb_4-33646267-1555156040.89/dist_GPL/sql/sql_hints.yy.cc" /* yacc.c:1646  */
    break;

  case 71:
#line 513 "/export/home3/pb2/build/sb_4-33646267-1555156040.89/mysql-8.0.16-release-export-14634434_gpl/sql/sql_hints.yy" /* yacc.c:1646  */
    {
            (yyval.hint_type)= INDEX_MERGE_HINT_ENUM;
          }
#line 1914 "/export/home3/pb2/build/sb_4-33646267-1555156040.89/dist_GPL/sql/sql_hints.yy.cc" /* yacc.c:1646  */
    break;

  case 72:
#line 517 "/export/home3/pb2/build/sb_4-33646267-1555156040.89/mysql-8.0.16-release-export-14634434_gpl/sql/sql_hints.yy" /* yacc.c:1646  */
    {
            (yyval.hint_type)= SKIP_SCAN_HINT_ENUM;
          }
#line 1922 "/export/home3/pb2/build/sb_4-33646267-1555156040.89/dist_GPL/sql/sql_hints.yy.cc" /* yacc.c:1646  */
    break;

  case 73:
#line 524 "/export/home3/pb2/build/sb_4-33646267-1555156040.89/mysql-8.0.16-release-export-14634434_gpl/sql/sql_hints.yy" /* yacc.c:1646  */
    {
            (yyval.hint)= NEW_PTN PT_hint_qb_name((yyvsp[-1].lexer.hint_string));
            if ((yyval.hint) == NULL)
              YYABORT; // OOM
          }
#line 1932 "/export/home3/pb2/build/sb_4-33646267-1555156040.89/dist_GPL/sql/sql_hints.yy.cc" /* yacc.c:1646  */
    break;

  case 74:
#line 533 "/export/home3/pb2/build/sb_4-33646267-1555156040.89/mysql-8.0.16-release-export-14634434_gpl/sql/sql_hints.yy" /* yacc.c:1646  */
    {
            (yyval.hint)= NEW_PTN PT_hint_sys_var((yyvsp[-3].lexer.hint_string), (yyvsp[-1].item));
            if ((yyval.hint) == NULL)
              YYABORT; // OOM
          }
#line 1942 "/export/home3/pb2/build/sb_4-33646267-1555156040.89/dist_GPL/sql/sql_hints.yy.cc" /* yacc.c:1646  */
    break;

  case 75:
#line 542 "/export/home3/pb2/build/sb_4-33646267-1555156040.89/mysql-8.0.16-release-export-14634434_gpl/sql/sql_hints.yy" /* yacc.c:1646  */
    {
           (yyval.hint)= NEW_PTN PT_hint_resource_group((yyvsp[-1].lexer.hint_string));
           if ((yyval.hint) == nullptr)
              YYABORT; // OOM
         }
#line 1952 "/export/home3/pb2/build/sb_4-33646267-1555156040.89/dist_GPL/sql/sql_hints.yy.cc" /* yacc.c:1646  */
    break;

  case 78:
#line 556 "/export/home3/pb2/build/sb_4-33646267-1555156040.89/mysql-8.0.16-release-export-14634434_gpl/sql/sql_hints.yy" /* yacc.c:1646  */
    {
            longlong n;
            if (parse_int(&n, (yyvsp[0].lexer.hint_string).str, (yyvsp[0].lexer.hint_string).length))
            {
              scanner->syntax_warning(ER_THD(thd, ER_WRONG_SIZE_NUMBER));
              (yyval.item)= NULL;
            }
            else
            {
              (yyval.item)= NEW_PTN Item_int((ulonglong)n);
              if ((yyval.item) == NULL)
                YYABORT; // OOM
            }
          }
#line 1971 "/export/home3/pb2/build/sb_4-33646267-1555156040.89/dist_GPL/sql/sql_hints.yy.cc" /* yacc.c:1646  */
    break;

  case 79:
#line 571 "/export/home3/pb2/build/sb_4-33646267-1555156040.89/mysql-8.0.16-release-export-14634434_gpl/sql/sql_hints.yy" /* yacc.c:1646  */
    {
            longlong n;
            if (parse_int(&n, (yyvsp[0].lexer.hint_string).str, (yyvsp[0].lexer.hint_string).length - 1))
            {
              scanner->syntax_warning(ER_THD(thd, ER_WRONG_SIZE_NUMBER));
              (yyval.item)= NULL;
            }
            else
            {
              int multiplier;
              switch ((yyvsp[0].lexer.hint_string).str[(yyvsp[0].lexer.hint_string).length - 1]) {
              case 'K': multiplier= 1024; break;
              case 'M': multiplier= 1024 * 1024; break;
              case 'G': multiplier= 1024 * 1024 * 1024; break;
              default:
                DBUG_ASSERT(0); // should not happen
                YYABORT;        // for sure
              }
              if (1.0L * n * multiplier > LLONG_MAX)
              {
                scanner->syntax_warning(ER_THD(thd, ER_WRONG_SIZE_NUMBER));
                (yyval.item)= NULL;
              }
              else
              {
                (yyval.item)= NEW_PTN Item_int((ulonglong)n * multiplier);
                if ((yyval.item) == NULL)
                  YYABORT; // OOM
              }
            }
          }
#line 2007 "/export/home3/pb2/build/sb_4-33646267-1555156040.89/dist_GPL/sql/sql_hints.yy.cc" /* yacc.c:1646  */
    break;

  case 82:
#line 611 "/export/home3/pb2/build/sb_4-33646267-1555156040.89/mysql-8.0.16-release-export-14634434_gpl/sql/sql_hints.yy" /* yacc.c:1646  */
    {
          (yyval.item)= NEW_PTN Item_string((yyvsp[0].lexer.hint_string).str, (yyvsp[0].lexer.hint_string).length, thd->charset());
          if ((yyval.item) == NULL)
            YYABORT; // OOM
        }
#line 2017 "/export/home3/pb2/build/sb_4-33646267-1555156040.89/dist_GPL/sql/sql_hints.yy.cc" /* yacc.c:1646  */
    break;


#line 2021 "/export/home3/pb2/build/sb_4-33646267-1555156040.89/dist_GPL/sql/sql_hints.yy.cc" /* yacc.c:1646  */
      default: break;
    }
  /* User semantic actions sometimes alter yychar, and that requires
     that yytoken be updated with the new translation.  We take the
     approach of translating immediately before every use of yytoken.
     One alternative is translating here after every semantic action,
     but that translation would be missed if the semantic action invokes
     YYABORT, YYACCEPT, or YYERROR immediately after altering yychar or
     if it invokes YYBACKUP.  In the case of YYABORT or YYACCEPT, an
     incorrect destructor might then be invoked immediately.  In the
     case of YYERROR or YYBACKUP, subsequent parser actions might lead
     to an incorrect destructor call or verbose syntax error message
     before the lookahead is translated.  */
  YY_SYMBOL_PRINT ("-> $$ =", yyr1[yyn], &yyval, &yyloc);

  YYPOPSTACK (yylen);
  yylen = 0;
  YY_STACK_PRINT (yyss, yyssp);

  *++yyvsp = yyval;

  /* Now 'shift' the result of the reduction.  Determine what state
     that goes to, based on the state we popped back to and the rule
     number reduced by.  */

  yyn = yyr1[yyn];

  yystate = yypgoto[yyn - YYNTOKENS] + *yyssp;
  if (0 <= yystate && yystate <= YYLAST && yycheck[yystate] == *yyssp)
    yystate = yytable[yystate];
  else
    yystate = yydefgoto[yyn - YYNTOKENS];

  goto yynewstate;


/*--------------------------------------.
| yyerrlab -- here on detecting error.  |
`--------------------------------------*/
yyerrlab:
  /* Make sure we have latest lookahead translation.  See comments at
     user semantic actions for why this is necessary.  */
  yytoken = yychar == YYEMPTY ? YYEMPTY : YYTRANSLATE (yychar);

  /* If not already recovering from an error, report this error.  */
  if (!yyerrstatus)
    {
      ++yynerrs;
#if ! YYERROR_VERBOSE
      yyerror (thd, scanner, ret, YY_("syntax error"));
#else
# define YYSYNTAX_ERROR yysyntax_error (&yymsg_alloc, &yymsg, \
                                        yyssp, yytoken)
      {
        char const *yymsgp = YY_("syntax error");
        int yysyntax_error_status;
        yysyntax_error_status = YYSYNTAX_ERROR;
        if (yysyntax_error_status == 0)
          yymsgp = yymsg;
        else if (yysyntax_error_status == 1)
          {
            if (yymsg != yymsgbuf)
              YYSTACK_FREE (yymsg);
            yymsg = (char *) YYSTACK_ALLOC (yymsg_alloc);
            if (!yymsg)
              {
                yymsg = yymsgbuf;
                yymsg_alloc = sizeof yymsgbuf;
                yysyntax_error_status = 2;
              }
            else
              {
                yysyntax_error_status = YYSYNTAX_ERROR;
                yymsgp = yymsg;
              }
          }
        yyerror (thd, scanner, ret, yymsgp);
        if (yysyntax_error_status == 2)
          goto yyexhaustedlab;
      }
# undef YYSYNTAX_ERROR
#endif
    }



  if (yyerrstatus == 3)
    {
      /* If just tried and failed to reuse lookahead token after an
         error, discard it.  */

      if (yychar <= YYEOF)
        {
          /* Return failure if at end of input.  */
          if (yychar == YYEOF)
            YYABORT;
        }
      else
        {
          yydestruct ("Error: discarding",
                      yytoken, &yylval, thd, scanner, ret);
          yychar = YYEMPTY;
        }
    }

  /* Else will try to reuse lookahead token after shifting the error
     token.  */
  goto yyerrlab1;


/*---------------------------------------------------.
| yyerrorlab -- error raised explicitly by YYERROR.  |
`---------------------------------------------------*/
yyerrorlab:

  /* Pacify compilers like GCC when the user code never invokes
     YYERROR and the label yyerrorlab therefore never appears in user
     code.  */
  if (/*CONSTCOND*/ 0)
     goto yyerrorlab;

  /* Do not reclaim the symbols of the rule whose action triggered
     this YYERROR.  */
  YYPOPSTACK (yylen);
  yylen = 0;
  YY_STACK_PRINT (yyss, yyssp);
  yystate = *yyssp;
  goto yyerrlab1;


/*-------------------------------------------------------------.
| yyerrlab1 -- common code for both syntax error and YYERROR.  |
`-------------------------------------------------------------*/
yyerrlab1:
  yyerrstatus = 3;      /* Each real token shifted decrements this.  */

  for (;;)
    {
      yyn = yypact[yystate];
      if (!yypact_value_is_default (yyn))
        {
          yyn += YYTERROR;
          if (0 <= yyn && yyn <= YYLAST && yycheck[yyn] == YYTERROR)
            {
              yyn = yytable[yyn];
              if (0 < yyn)
                break;
            }
        }

      /* Pop the current state because it cannot handle the error token.  */
      if (yyssp == yyss)
        YYABORT;


      yydestruct ("Error: popping",
                  yystos[yystate], yyvsp, thd, scanner, ret);
      YYPOPSTACK (1);
      yystate = *yyssp;
      YY_STACK_PRINT (yyss, yyssp);
    }

  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  *++yyvsp = yylval;
  YY_IGNORE_MAYBE_UNINITIALIZED_END


  /* Shift the error token.  */
  YY_SYMBOL_PRINT ("Shifting", yystos[yyn], yyvsp, yylsp);

  yystate = yyn;
  goto yynewstate;


/*-------------------------------------.
| yyacceptlab -- YYACCEPT comes here.  |
`-------------------------------------*/
yyacceptlab:
  yyresult = 0;
  goto yyreturn;

/*-----------------------------------.
| yyabortlab -- YYABORT comes here.  |
`-----------------------------------*/
yyabortlab:
  yyresult = 1;
  goto yyreturn;

#if !defined yyoverflow || YYERROR_VERBOSE
/*-------------------------------------------------.
| yyexhaustedlab -- memory exhaustion comes here.  |
`-------------------------------------------------*/
yyexhaustedlab:
  yyerror (thd, scanner, ret, YY_("memory exhausted"));
  yyresult = 2;
  /* Fall through.  */
#endif

yyreturn:
  if (yychar != YYEMPTY)
    {
      /* Make sure we have latest lookahead translation.  See comments at
         user semantic actions for why this is necessary.  */
      yytoken = YYTRANSLATE (yychar);
      yydestruct ("Cleanup: discarding lookahead",
                  yytoken, &yylval, thd, scanner, ret);
    }
  /* Do not reclaim the symbols of the rule whose action triggered
     this YYABORT or YYACCEPT.  */
  YYPOPSTACK (yylen);
  YY_STACK_PRINT (yyss, yyssp);
  while (yyssp != yyss)
    {
      yydestruct ("Cleanup: popping",
                  yystos[*yyssp], yyvsp, thd, scanner, ret);
      YYPOPSTACK (1);
    }
#ifndef yyoverflow
  if (yyss != yyssa)
    YYSTACK_FREE (yyss);
#endif
#if YYERROR_VERBOSE
  if (yymsg != yymsgbuf)
    YYSTACK_FREE (yymsg);
#endif
  return yyresult;
}
