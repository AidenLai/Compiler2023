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
#define YYPURE 0

/* Push parsers.  */
#define YYPUSH 0

/* Pull parsers.  */
#define YYPULL 1




/* Copy the first part of user declarations.  */
#line 1 "parser.y" /* yacc.c:339  */

#include "codegen.hpp"
#include "lex.yy.cpp"
#include <sstream>
#define Trace(t)        printf(t)
void yyerror(string s);
symboltables symtab;
int param_num = 0;
string filename;
string className;
ofstream output;

#line 79 "y.tab.cpp" /* yacc.c:339  */

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
   by #include "y.tab.hpp".  */
#ifndef YY_YY_Y_TAB_HPP_INCLUDED
# define YY_YY_Y_TAB_HPP_INCLUDED
/* Debug traces.  */
#ifndef YYDEBUG
# define YYDEBUG 0
#endif
#if YYDEBUG
extern int yydebug;
#endif

/* Token type.  */
#ifndef YYTOKENTYPE
# define YYTOKENTYPE
  enum yytokentype
  {
    ARRAY = 258,
    BEGIN_ = 259,
    BOOL = 260,
    CHAR = 261,
    CONST = 262,
    DECREASING = 263,
    DEFAULT = 264,
    DO = 265,
    ELSE = 266,
    END = 267,
    EXIT = 268,
    FALSE = 269,
    FOR = 270,
    FUNCTION = 271,
    GET = 272,
    IF = 273,
    INT = 274,
    LOOP = 275,
    OF = 276,
    PUT = 277,
    PROCEDURE = 278,
    REAL = 279,
    RESULT = 280,
    RETURN = 281,
    SKIP = 282,
    STRING = 283,
    THEN = 284,
    TRUE = 285,
    VAR = 286,
    WHEN = 287,
    ASSIGN = 288,
    AND = 289,
    OR = 290,
    NOT = 291,
    NOT_EQU = 292,
    LE = 293,
    GE = 294,
    MOD = 295,
    IDENTIFIER = 296,
    INT_NUM = 297,
    REAL_NUM = 298,
    STRING_CONSTANTS = 299,
    UMINUS = 300
  };
#endif
/* Tokens.  */
#define ARRAY 258
#define BEGIN_ 259
#define BOOL 260
#define CHAR 261
#define CONST 262
#define DECREASING 263
#define DEFAULT 264
#define DO 265
#define ELSE 266
#define END 267
#define EXIT 268
#define FALSE 269
#define FOR 270
#define FUNCTION 271
#define GET 272
#define IF 273
#define INT 274
#define LOOP 275
#define OF 276
#define PUT 277
#define PROCEDURE 278
#define REAL 279
#define RESULT 280
#define RETURN 281
#define SKIP 282
#define STRING 283
#define THEN 284
#define TRUE 285
#define VAR 286
#define WHEN 287
#define ASSIGN 288
#define AND 289
#define OR 290
#define NOT 291
#define NOT_EQU 292
#define LE 293
#define GE 294
#define MOD 295
#define IDENTIFIER 296
#define INT_NUM 297
#define REAL_NUM 298
#define STRING_CONSTANTS 299
#define UMINUS 300

/* Value type.  */
#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED

union YYSTYPE
{
#line 19 "parser.y" /* yacc.c:355  */

  int ival;
  float fval;
  string *sval;
  type var_type;
  Symbol *symval;

#line 217 "y.tab.cpp" /* yacc.c:355  */
};

typedef union YYSTYPE YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE yylval;

int yyparse (void);

#endif /* !YY_YY_Y_TAB_HPP_INCLUDED  */

/* Copy the second part of user declarations.  */

#line 234 "y.tab.cpp" /* yacc.c:358  */

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
#define YYFINAL  3
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   408

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  60
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  49
/* YYNRULES -- Number of rules.  */
#define YYNRULES  105
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  189

/* YYTRANSLATE[YYX] -- Symbol number corresponding to YYX as returned
   by yylex, with out-of-bounds checking.  */
#define YYUNDEFTOK  2
#define YYMAXUTOK   300

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
      53,    57,    50,    48,    58,    49,    56,    51,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,    55,     2,
      45,    46,    47,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,    54,     2,    59,     2,     2,     2,     2,     2,     2,
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
      35,    36,    37,    38,    39,    40,    41,    42,    43,    44,
      52
};

#if YYDEBUG
  /* YYRLINE[YYN] -- Source line where rule number YYN was defined.  */
static const yytype_uint16 yyrline[] =
{
       0,    48,    48,    52,    48,    62,    63,    65,    66,    67,
      68,    70,    71,    73,    74,    75,    77,    78,    79,    81,
      96,   107,   111,   115,   119,   124,   128,   132,   136,   140,
     145,   165,   182,   199,   218,   222,   234,   247,   233,   267,
     281,   266,   299,   300,   302,   303,   305,   306,   308,   309,
     311,   328,   327,   344,   368,   367,   375,   388,   392,   396,
     397,   401,   403,   410,   413,   428,   444,   460,   476,   490,
     502,   516,   530,   541,   557,   573,   590,   605,   620,   636,
     640,   669,   679,   680,   682,   702,   715,   716,   718,   719,
     721,   728,   727,   749,   748,   765,   772,   771,   789,   795,
     809,   818,   835,   788,   850,   851
};
#endif

#if YYDEBUG || YYERROR_VERBOSE || 0
/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "$end", "error", "$undefined", "ARRAY", "BEGIN_", "BOOL", "CHAR",
  "CONST", "DECREASING", "DEFAULT", "DO", "ELSE", "END", "EXIT", "FALSE",
  "FOR", "FUNCTION", "GET", "IF", "INT", "LOOP", "OF", "PUT", "PROCEDURE",
  "REAL", "RESULT", "RETURN", "SKIP", "STRING", "THEN", "TRUE", "VAR",
  "WHEN", "ASSIGN", "AND", "OR", "NOT", "NOT_EQU", "LE", "GE", "MOD",
  "IDENTIFIER", "INT_NUM", "REAL_NUM", "STRING_CONSTANTS", "'<'", "'='",
  "'>'", "'+'", "'-'", "'*'", "'/'", "UMINUS", "'('", "'['", "':'", "'.'",
  "')'", "','", "']'", "$accept", "program", "$@1", "$@2", "statements",
  "statement", "declarations", "declaration_function", "declaration",
  "constants", "type", "constant_exp", "variable", "array", "number",
  "function", "$@3", "$@4", "procedure", "$@5", "$@6", "function_bodys",
  "function_body", "parameters_block", "parameters", "parameter", "block",
  "$@7", "simple", "$@8", "when", "expression", "function_procedure",
  "array_reference", "argument_body", "arguments", "func_expression",
  "if_head", "$@9", "condition", "$@10", "loop", "$@11", "$@12", "$@13",
  "$@14", "$@15", "$@16", "decreasing", YY_NULLPTR
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
     295,   296,   297,   298,   299,    60,    61,    62,    43,    45,
      42,    47,   300,    40,    91,    58,    46,    41,    44,    93
};
# endif

#define YYPACT_NINF -154

#define yypact_value_is_default(Yystate) \
  (!!((Yystate) == (-154)))

#define YYTABLE_NINF -1

#define yytable_value_is_error(Yytable_value) \
  (!!((Yytable_value) == (-1)))

  /* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
     STATE-NUM.  */
static const yytype_int16 yypact[] =
{
    -154,     7,  -154,  -154,     5,   -32,   -30,   -25,   -17,   -14,
    -154,  -154,  -154,  -154,  -154,  -154,  -154,  -154,   -37,   -18,
    -154,  -154,    26,    31,    17,    20,    49,     6,    -1,    14,
      20,    27,  -154,    37,    67,    39,   -11,  -154,  -154,   -11,
    -154,  -154,   -27,  -154,  -154,  -154,  -154,     2,  -154,  -154,
     -19,  -154,  -154,  -154,  -154,  -154,  -154,  -154,  -154,  -154,
    -154,    20,    45,    45,  -154,    20,  -154,   -11,  -154,  -154,
    -154,  -154,   -11,    35,   -11,   -11,  -154,   306,  -154,  -154,
    -154,   -11,   324,   -11,   -11,  -154,    66,  -154,  -154,    40,
    -154,    42,    41,    44,  -154,    46,  -154,   141,   324,    58,
     357,   -11,  -154,   282,  -154,   -11,   -11,   -11,   -11,   -11,
     -11,   -11,   -11,   -11,   -11,   -11,   -11,   -11,   166,   324,
     324,   324,    47,    64,  -154,  -154,  -154,    51,  -154,    42,
      45,  -154,  -154,  -154,  -154,  -154,  -154,   264,  -154,  -154,
     357,   342,    43,    43,    43,  -154,    43,    43,    43,    15,
      15,  -154,  -154,    80,  -154,   -11,   191,   -19,  -154,  -154,
    -154,    68,  -154,   266,  -154,  -154,    83,   103,  -154,   216,
     -19,  -154,    42,   241,    84,  -154,  -154,    85,  -154,    71,
    -154,    72,   -19,  -154,  -154,   266,   117,   115,  -154
};

  /* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
     Performed when YYTABLE does not specify something else to do.  Zero
     means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
       2,     0,    12,     1,     3,     0,     0,     0,     0,     0,
       6,    11,    13,    16,    17,    18,    14,    15,     0,     0,
      36,    39,     0,     4,     0,     0,     0,     0,     0,     0,
       0,    31,    51,    63,   105,     0,     0,    96,    54,     0,
      58,    60,     0,     5,     7,     8,    61,     0,     9,    10,
       0,    29,    28,    25,    26,    27,    20,    23,    21,    22,
      24,     0,    47,    47,    32,     0,    43,     0,    59,   104,
      98,    56,     0,    80,     0,     0,    81,     0,    82,    83,
      43,     0,    57,     0,    87,    93,     0,    35,    34,     0,
      19,     0,     0,    46,    49,     0,    30,     0,    62,     0,
      72,     0,    69,     0,    91,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,    55,
      53,    90,     0,    86,    89,    43,    95,     0,    50,     0,
       0,    40,    52,    45,    44,    42,    99,     0,    79,    43,
      70,    71,    78,    74,    76,    68,    73,    75,    77,    64,
      65,    66,    67,     0,    84,     0,     0,     0,    37,    48,
      43,     0,    85,    92,    97,    88,     0,     0,    43,     0,
       0,    94,     0,     0,     0,   100,    33,     0,    41,     0,
      38,     0,     0,   101,    43,   102,     0,     0,   103
};

  /* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -154,  -154,  -154,  -154,  -154,   108,  -154,  -154,   128,  -154,
     -21,   -20,  -154,  -154,  -153,  -154,  -154,  -154,  -154,  -154,
    -154,   -78,  -154,    73,  -154,     8,  -154,  -154,  -154,  -154,
    -154,     4,   -23,  -154,  -154,  -154,   -16,  -154,  -154,  -154,
    -154,  -154,  -154,  -154,  -154,  -154,  -154,  -154,  -154
};

  /* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,     1,     2,    10,    23,   133,     4,    11,   134,    13,
      27,    76,    14,    15,    89,    16,    28,   168,    17,    29,
     160,    97,   135,    92,    93,    94,    44,    66,    45,    81,
      68,   121,    78,    79,   122,   123,   124,    47,   139,    48,
     125,    49,    80,    99,   161,   179,   184,   186,    70
};

  /* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
     positive, shift that token.  If negative, reduce the rule whose
     number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int16 yytable[] =
{
      46,    31,   118,    51,   167,    56,    83,     3,     5,    18,
      64,    19,     6,    85,    86,    25,    20,   175,    24,    52,
      50,     7,    87,    88,    21,    72,    84,    22,     8,   183,
      73,    53,    54,    55,    51,    32,     9,    26,    74,    61,
      77,    90,    75,    82,    33,    96,    34,   156,    35,    36,
      52,    37,    62,    38,    57,   110,    39,    40,    41,    30,
      65,   163,    53,    54,    55,   116,   117,    63,    58,    67,
     128,    98,    42,    59,    46,    69,   100,    60,   102,   103,
      71,    26,   169,   110,   126,   119,    91,   120,    84,   101,
     173,   114,   115,   116,   117,    46,   127,    26,   129,   136,
     164,   171,   130,   131,   154,   137,   185,   157,   158,   140,
     141,   142,   143,   144,   145,   146,   147,   148,   149,   150,
     151,   152,   155,   170,   172,   178,   180,   181,   182,   187,
     188,    43,    12,    46,     0,     0,    95,     0,   159,   165,
      46,     0,     0,     0,     5,    32,    46,     0,     6,     0,
      46,   176,     0,   132,    33,     0,    34,     0,    35,    36,
       0,    37,    46,    38,     0,     0,    39,    40,    41,     5,
      32,     0,     9,     6,     0,     0,     0,     0,   153,    33,
       0,    34,    42,    35,    36,     0,    37,     0,    38,     0,
       0,    39,    40,    41,     5,    32,     0,     9,     6,     0,
       0,     0,     0,   166,    33,     0,    34,    42,    35,    36,
       0,    37,     0,    38,     0,     0,    39,    40,    41,     5,
      32,     0,     9,     6,     0,     0,     0,     0,   174,    33,
       0,    34,    42,    35,    36,     0,    37,     0,    38,     0,
       0,    39,    40,    41,     5,    32,     0,     9,     6,     0,
       0,     0,     0,   177,    33,     0,    34,    42,    35,    36,
       0,    37,     0,    38,     0,     0,    39,    40,    41,     5,
      32,     0,     9,     6,     0,     0,     0,     0,     0,    33,
       0,    34,    42,    35,    36,     0,    37,     0,    38,     0,
       0,    39,    40,    41,     0,     0,     0,     9,   105,   106,
       0,   107,   108,   109,   110,     0,     0,    42,     0,   111,
     112,   113,   114,   115,   116,   117,   105,   106,     0,   107,
     108,   109,   110,   162,     0,     0,     0,   111,   112,   113,
     114,   115,   116,   117,     0,   104,     0,     0,     0,   138,
     105,   106,     0,   107,   108,   109,   110,     0,     0,     0,
       0,   111,   112,   113,   114,   115,   116,   117,   105,   106,
       0,   107,   108,   109,   110,     0,     0,     0,     0,   111,
     112,   113,   114,   115,   116,   117,   105,    -1,     0,   107,
     108,   109,   110,     0,     0,     0,     0,   111,   112,   113,
     114,   115,   116,   117,   107,   108,   109,   110,     0,     0,
       0,     0,   111,   112,   113,   114,   115,   116,   117
};

static const yytype_int16 yycheck[] =
{
      23,    22,    80,    14,   157,    25,    33,     0,     3,    41,
      30,    41,     7,    11,    12,    33,    41,   170,    55,    30,
       3,    16,    41,    42,    41,    36,    53,    41,    23,   182,
      41,    42,    43,    44,    14,     4,    31,    55,    49,    33,
      36,    61,    53,    39,    13,    65,    15,   125,    17,    18,
      30,    20,    53,    22,     5,    40,    25,    26,    27,    33,
      33,   139,    42,    43,    44,    50,    51,    53,    19,    32,
      91,    67,    41,    24,    97,     8,    72,    28,    74,    75,
      41,    55,   160,    40,    18,    81,    41,    83,    53,    54,
     168,    48,    49,    50,    51,   118,    56,    55,    57,    41,
      20,    18,    58,    57,    57,   101,   184,    56,   129,   105,
     106,   107,   108,   109,   110,   111,   112,   113,   114,   115,
     116,   117,    58,    55,    21,    41,    41,    56,    56,    12,
      15,    23,     4,   156,    -1,    -1,    63,    -1,   130,   155,
     163,    -1,    -1,    -1,     3,     4,   169,    -1,     7,    -1,
     173,   172,    -1,    12,    13,    -1,    15,    -1,    17,    18,
      -1,    20,   185,    22,    -1,    -1,    25,    26,    27,     3,
       4,    -1,    31,     7,    -1,    -1,    -1,    -1,    12,    13,
      -1,    15,    41,    17,    18,    -1,    20,    -1,    22,    -1,
      -1,    25,    26,    27,     3,     4,    -1,    31,     7,    -1,
      -1,    -1,    -1,    12,    13,    -1,    15,    41,    17,    18,
      -1,    20,    -1,    22,    -1,    -1,    25,    26,    27,     3,
       4,    -1,    31,     7,    -1,    -1,    -1,    -1,    12,    13,
      -1,    15,    41,    17,    18,    -1,    20,    -1,    22,    -1,
      -1,    25,    26,    27,     3,     4,    -1,    31,     7,    -1,
      -1,    -1,    -1,    12,    13,    -1,    15,    41,    17,    18,
      -1,    20,    -1,    22,    -1,    -1,    25,    26,    27,     3,
       4,    -1,    31,     7,    -1,    -1,    -1,    -1,    -1,    13,
      -1,    15,    41,    17,    18,    -1,    20,    -1,    22,    -1,
      -1,    25,    26,    27,    -1,    -1,    -1,    31,    34,    35,
      -1,    37,    38,    39,    40,    -1,    -1,    41,    -1,    45,
      46,    47,    48,    49,    50,    51,    34,    35,    -1,    37,
      38,    39,    40,    59,    -1,    -1,    -1,    45,    46,    47,
      48,    49,    50,    51,    -1,    29,    -1,    -1,    -1,    57,
      34,    35,    -1,    37,    38,    39,    40,    -1,    -1,    -1,
      -1,    45,    46,    47,    48,    49,    50,    51,    34,    35,
      -1,    37,    38,    39,    40,    -1,    -1,    -1,    -1,    45,
      46,    47,    48,    49,    50,    51,    34,    35,    -1,    37,
      38,    39,    40,    -1,    -1,    -1,    -1,    45,    46,    47,
      48,    49,    50,    51,    37,    38,    39,    40,    -1,    -1,
      -1,    -1,    45,    46,    47,    48,    49,    50,    51
};

  /* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
     symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,    61,    62,     0,    66,     3,     7,    16,    23,    31,
      63,    67,    68,    69,    72,    73,    75,    78,    41,    41,
      41,    41,    41,    64,    55,    33,    55,    70,    76,    79,
      33,    70,     4,    13,    15,    17,    18,    20,    22,    25,
      26,    27,    41,    65,    86,    88,    92,    97,    99,   101,
       3,    14,    30,    42,    43,    44,    71,     5,    19,    24,
      28,    33,    53,    53,    71,    33,    87,    32,    90,     8,
     108,    41,    36,    41,    49,    53,    71,    91,    92,    93,
     102,    89,    91,    33,    53,    11,    12,    41,    42,    74,
      71,    41,    83,    84,    85,    83,    71,    81,    91,   103,
      91,    54,    91,    91,    29,    34,    35,    37,    38,    39,
      40,    45,    46,    47,    48,    49,    50,    51,    81,    91,
      91,    91,    94,    95,    96,   100,    18,    56,    70,    57,
      58,    57,    12,    65,    68,    82,    41,    91,    57,    98,
      91,    91,    91,    91,    91,    91,    91,    91,    91,    91,
      91,    91,    91,    12,    57,    58,    81,    56,    70,    85,
      80,   104,    59,    81,    20,    96,    12,    74,    77,    81,
      55,    18,    21,    81,    12,    74,    70,    12,    41,   105,
      41,    56,    56,    74,   106,    81,   107,    12,    15
};

  /* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint8 yyr1[] =
{
       0,    60,    62,    63,    61,    64,    64,    65,    65,    65,
      65,    66,    66,    67,    67,    67,    68,    68,    68,    69,
      69,    70,    70,    70,    70,    71,    71,    71,    71,    71,
      72,    72,    72,    73,    74,    74,    76,    77,    75,    79,
      80,    78,    81,    81,    82,    82,    83,    83,    84,    84,
      85,    87,    86,    88,    89,    88,    88,    88,    88,    88,
      88,    88,    90,    90,    91,    91,    91,    91,    91,    91,
      91,    91,    91,    91,    91,    91,    91,    91,    91,    91,
      91,    91,    91,    91,    92,    93,    94,    94,    95,    95,
      96,    98,    97,   100,    99,    99,   102,   101,   103,   104,
     105,   106,   107,   101,   108,   108
};

  /* YYR2[YYN] -- Number of symbols on the right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,     0,     0,     4,     2,     0,     1,     1,     1,
       1,     2,     0,     1,     1,     1,     1,     1,     1,     5,
       4,     2,     2,     2,     2,     1,     1,     1,     1,     1,
       5,     3,     4,    10,     1,     1,     0,     0,    11,     0,
       0,    10,     2,     0,     1,     1,     1,     0,     3,     1,
       2,     0,     4,     3,     0,     3,     2,     2,     1,     2,
       1,     1,     2,     0,     3,     3,     3,     3,     3,     2,
       3,     3,     2,     3,     3,     3,     3,     3,     3,     3,
       1,     1,     1,     1,     4,     4,     1,     0,     3,     1,
       1,     0,     5,     0,     6,     3,     0,     5,     0,     0,
       0,     0,     0,    16,     1,     0
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
      yyerror (YY_("syntax error: cannot back up")); \
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
                  Type, Value); \
      YYFPRINTF (stderr, "\n");                                           \
    }                                                                     \
} while (0)


/*----------------------------------------.
| Print this symbol's value on YYOUTPUT.  |
`----------------------------------------*/

static void
yy_symbol_value_print (FILE *yyoutput, int yytype, YYSTYPE const * const yyvaluep)
{
  FILE *yyo = yyoutput;
  YYUSE (yyo);
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
yy_symbol_print (FILE *yyoutput, int yytype, YYSTYPE const * const yyvaluep)
{
  YYFPRINTF (yyoutput, "%s %s (",
             yytype < YYNTOKENS ? "token" : "nterm", yytname[yytype]);

  yy_symbol_value_print (yyoutput, yytype, yyvaluep);
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
yy_reduce_print (yytype_int16 *yyssp, YYSTYPE *yyvsp, int yyrule)
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
                                              );
      YYFPRINTF (stderr, "\n");
    }
}

# define YY_REDUCE_PRINT(Rule)          \
do {                                    \
  if (yydebug)                          \
    yy_reduce_print (yyssp, yyvsp, Rule); \
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
yydestruct (const char *yymsg, int yytype, YYSTYPE *yyvaluep)
{
  YYUSE (yyvaluep);
  if (!yymsg)
    yymsg = "Deleting";
  YY_SYMBOL_PRINT (yymsg, yytype, yyvaluep, yylocationp);

  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  YYUSE (yytype);
  YY_IGNORE_MAYBE_UNINITIALIZED_END
}




/* The lookahead symbol.  */
int yychar;

/* The semantic value of the lookahead symbol.  */
YYSTYPE yylval;
/* Number of syntax errors so far.  */
int yynerrs;


/*----------.
| yyparse.  |
`----------*/

int
yyparse (void)
{
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
      yychar = yylex ();
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
#line 48 "parser.y" /* yacc.c:1646  */
    {
                G_init();
        }
#line 1497 "y.tab.cpp" /* yacc.c:1646  */
    break;

  case 3:
#line 52 "parser.y" /* yacc.c:1646  */
    {
                G_main();
        }
#line 1505 "y.tab.cpp" /* yacc.c:1646  */
    break;

  case 4:
#line 56 "parser.y" /* yacc.c:1646  */
    {
                G_Return();
                G_main_end();
                G_end();
        }
#line 1515 "y.tab.cpp" /* yacc.c:1646  */
    break;

  case 19:
#line 82 "parser.y" /* yacc.c:1646  */
    {
                /* check if the identifier is already in the symbol table */
                if(symtab.lookup(*((yyvsp[-3].sval))) != NULL)
                        yyerror("const redefine");
                
                /* check if the type of the identifier is the same as the type of the constant */
                if ((yyvsp[-2].var_type) != (yyvsp[0].symval)->S_type)
                        printf("Warning: type mismatch\n");

                (yyvsp[0].symval)->init = true;
                /* insert the identifier into the symbol table */
                symtab.insert(*((yyvsp[-3].sval)), *(yyvsp[0].symval));
                
        }
#line 1534 "y.tab.cpp" /* yacc.c:1646  */
    break;

  case 20:
#line 97 "parser.y" /* yacc.c:1646  */
    {
                /* check if the identifier is already in the symbol table */
                if(symtab.lookup(*((yyvsp[-2].sval))) != NULL)
                        printf("ERROR");
                
                (yyvsp[0].symval)->init = true;
                /* insert the identifier into the symbol table */
                symtab.insert(*((yyvsp[-2].sval)), *(yyvsp[0].symval));
        }
#line 1548 "y.tab.cpp" /* yacc.c:1646  */
    break;

  case 21:
#line 108 "parser.y" /* yacc.c:1646  */
    {
                (yyval.var_type) = type::INT_TYPE;
        }
#line 1556 "y.tab.cpp" /* yacc.c:1646  */
    break;

  case 22:
#line 112 "parser.y" /* yacc.c:1646  */
    {
                (yyval.var_type) = type::REAL_TYPE;
        }
#line 1564 "y.tab.cpp" /* yacc.c:1646  */
    break;

  case 23:
#line 116 "parser.y" /* yacc.c:1646  */
    {
                (yyval.var_type) = type::BOOL_TYPE;
        }
#line 1572 "y.tab.cpp" /* yacc.c:1646  */
    break;

  case 24:
#line 120 "parser.y" /* yacc.c:1646  */
    {
                (yyval.var_type) = type::STRING_TYPE;
        }
#line 1580 "y.tab.cpp" /* yacc.c:1646  */
    break;

  case 25:
#line 125 "parser.y" /* yacc.c:1646  */
    {
                (yyval.symval) = intConst((yyvsp[0].ival));
        }
#line 1588 "y.tab.cpp" /* yacc.c:1646  */
    break;

  case 26:
#line 129 "parser.y" /* yacc.c:1646  */
    {
                (yyval.symval) = realConst((yyvsp[0].fval));
        }
#line 1596 "y.tab.cpp" /* yacc.c:1646  */
    break;

  case 27:
#line 133 "parser.y" /* yacc.c:1646  */
    {
                (yyval.symval) = stringConst((yyvsp[0].sval));
        }
#line 1604 "y.tab.cpp" /* yacc.c:1646  */
    break;

  case 28:
#line 137 "parser.y" /* yacc.c:1646  */
    {
                (yyval.symval) = boolConst(true);
        }
#line 1612 "y.tab.cpp" /* yacc.c:1646  */
    break;

  case 29:
#line 141 "parser.y" /* yacc.c:1646  */
    {
                (yyval.symval) = boolConst(false);
        }
#line 1620 "y.tab.cpp" /* yacc.c:1646  */
    break;

  case 30:
#line 146 "parser.y" /* yacc.c:1646  */
    {
                /* check if the identifier is already in the symbol table */
                if(symtab.lookup(*((yyvsp[-3].sval))) != NULL)
                        yyerror("variable redefine");
                
                /* check if the type of the identifier is the same as the type of the constant */
                if ((yyvsp[-2].var_type) != (yyvsp[0].symval)->S_type)
                        printf("Warning: type mismatch\n");

                (yyvsp[0].symval)->init = true;
                (yyvsp[0].symval)->S_flag = flag::VARIABLE;
                /* insert the identifier into the symbol table */
                symtab.insert(*((yyvsp[-3].sval)), *(yyvsp[0].symval));
                int index = symtab.get_index(*((yyvsp[-3].sval)));
                if(index == -1)
                        G_global_Var(*(yyvsp[-3].sval), (yyvsp[0].symval)->S_data.int_data);
                else
                        G_local_Var(index, (yyvsp[0].symval)->S_data.int_data);
        }
#line 1644 "y.tab.cpp" /* yacc.c:1646  */
    break;

  case 31:
#line 166 "parser.y" /* yacc.c:1646  */
    {
                /* check if the identifier is already in the symbol table */
                if(symtab.lookup(*((yyvsp[-1].sval))) != NULL)
                        yyerror("variable redefine");
                
                Symbol s;
                s.init = false;
                s.S_type = (yyvsp[0].var_type);
                s.S_flag = flag::VARIABLE;
                symtab.insert(*((yyvsp[-1].sval)), s);
                
                int index = symtab.get_index(*((yyvsp[-1].sval)));
                if(index == -1)
                        G_global_Var(*(yyvsp[-1].sval));
                
        }
#line 1665 "y.tab.cpp" /* yacc.c:1646  */
    break;

  case 32:
#line 183 "parser.y" /* yacc.c:1646  */
    {
                /* check if the identifier is already in the symbol table */
                if(symtab.lookup(*((yyvsp[-2].sval))) != NULL)
                        yyerror("variable redefine");
                
                (yyvsp[0].symval)->init = true;
                (yyvsp[0].symval)->S_flag = flag::VARIABLE;
                /* insert the identifier into the symbol table */
                symtab.insert(*((yyvsp[-2].sval)), *(yyvsp[0].symval));
                int index = symtab.get_index(*((yyvsp[-2].sval)));
                if(index == -1)
                        G_global_Var(*(yyvsp[-2].sval), (yyvsp[0].symval)->S_data.int_data);
                else
                        G_local_Var(index, (yyvsp[0].symval)->S_data.int_data);
        }
#line 1685 "y.tab.cpp" /* yacc.c:1646  */
    break;

  case 33:
#line 200 "parser.y" /* yacc.c:1646  */
    {
                /* check if the identifier is already in the symbol table */
                if(symtab.global_lookup(*((yyvsp[-8].sval))) != NULL)
                        yyerror("array redefine");
                
                if((yyvsp[-5].symval)->S_flag!=flag::CONSTANT || (yyvsp[-2].symval)->S_flag!=flag::CONSTANT)
                        yyerror("array index must be constant");

                if((yyvsp[-5].symval)->S_type != type::INT_TYPE || (yyvsp[-2].symval)->S_type != type::INT_TYPE)
                        yyerror("array index must be integer");

                Symbol s;
                s.init = true;
                s.S_flag = flag::ARRAY_FLAG;
                s.S_type = (yyvsp[0].var_type);
                symtab.insert(*((yyvsp[-8].sval)), s);
        }
#line 1707 "y.tab.cpp" /* yacc.c:1646  */
    break;

  case 34:
#line 219 "parser.y" /* yacc.c:1646  */
    {
                (yyval.symval) = intConst((yyvsp[0].ival));
        }
#line 1715 "y.tab.cpp" /* yacc.c:1646  */
    break;

  case 35:
#line 223 "parser.y" /* yacc.c:1646  */
    {
                /* check if the identifier is already in the symbol table */
                if(symtab.global_lookup(*((yyvsp[0].sval))) == NULL)
                        yyerror("identifier not found");
                
                Symbol *s = symtab.global_lookup(*((yyvsp[0].sval)));
                
                (yyval.symval) = s;
        }
#line 1729 "y.tab.cpp" /* yacc.c:1646  */
    break;

  case 36:
#line 234 "parser.y" /* yacc.c:1646  */
    {
                /* check if the identifier is already in the symbol table */
                if(symtab.lookup(*((yyvsp[0].sval))) != NULL)
                        yyerror("function redefine");
                
                Symbol s;
                s.init = true;
                s.S_flag = flag::FUNC;
                symtab.insert(*((yyvsp[0].sval)), s);
                symtab.push();
                param_num = 0;
        }
#line 1746 "y.tab.cpp" /* yacc.c:1646  */
    break;

  case 37:
#line 247 "parser.y" /* yacc.c:1646  */
    {
                Symbol *temp = symtab.global_lookup(*((yyvsp[-5].sval)));
                temp->param_num = param_num;
                G_method_Start(*symtab.global_lookup(*((yyvsp[-5].sval))));
        }
#line 1756 "y.tab.cpp" /* yacc.c:1646  */
    break;

  case 38:
#line 253 "parser.y" /* yacc.c:1646  */
    {
                cout<<"<-----------------------local variable------------------->"<<endl;
                symtab.tables.back().dump();
                cout<<"<-----------------------local variable end--------------->"<<endl;
                symtab.pop();
                symtab.tables.back().table.back().S_type = (yyvsp[-4].var_type);
                symtab.tables.back().table.back().param_num = param_num;
                param_num = 0;
                if (*(yyvsp[-9].sval) != *(yyvsp[0].sval))
                        yyerror("function declaration error");
                G_main_end();
        }
#line 1773 "y.tab.cpp" /* yacc.c:1646  */
    break;

  case 39:
#line 267 "parser.y" /* yacc.c:1646  */
    {
                /* check if the identifier is already in the symbol table */
                if(symtab.lookup(*((yyvsp[0].sval))) != NULL)
                        yyerror("procedure redefine");
                
                Symbol s;
                s.init = true;
                s.S_flag = flag::FUNC;
                s.S_type = type::NONE;
                symtab.insert(*((yyvsp[0].sval)), s);
                symtab.push();
                param_num = 0;
        }
#line 1791 "y.tab.cpp" /* yacc.c:1646  */
    break;

  case 40:
#line 281 "parser.y" /* yacc.c:1646  */
    {
                Symbol *temp = symtab.global_lookup(*((yyvsp[-4].sval)));
                temp->param_num = param_num;
                G_method_Start(*symtab.global_lookup(*((yyvsp[-4].sval))));
        }
#line 1801 "y.tab.cpp" /* yacc.c:1646  */
    break;

  case 41:
#line 287 "parser.y" /* yacc.c:1646  */
    {
                cout<<"<-----------------------local variable------------------->"<<endl;
                symtab.tables.back().dump();
                cout<<"<-----------------------local variable end--------------->"<<endl;
                symtab.pop();
                symtab.tables.back().table.back().param_num = param_num;
                param_num = 0;
                if (*(yyvsp[-8].sval) != *(yyvsp[0].sval))
                        yyerror("function declaration error");
                G_main_end();
        }
#line 1817 "y.tab.cpp" /* yacc.c:1646  */
    break;

  case 50:
#line 312 "parser.y" /* yacc.c:1646  */
    {
                /* check if the identifier is already in the symbol table */
                if(symtab.lookup(*((yyvsp[-1].sval))) != NULL)
                        yyerror("variable redefine");
                
                param_num++;

                Symbol s;
                s.init = true;
                s.S_type = (yyvsp[0].var_type);
                s.S_flag = flag::VARIABLE;
                symtab.insert(*((yyvsp[-1].sval)), s);
        }
#line 1835 "y.tab.cpp" /* yacc.c:1646  */
    break;

  case 51:
#line 328 "parser.y" /* yacc.c:1646  */
    {
                int temp = symtab.tables.back().index;
                symtab.push();
                symtab.tables.back().index = temp;

        }
#line 1846 "y.tab.cpp" /* yacc.c:1646  */
    break;

  case 52:
#line 335 "parser.y" /* yacc.c:1646  */
    {
                cout<<"<-----------------------local variable------------------->"<<endl;
                symtab.tables.back().dump();
                cout<<"<-----------------------local variable end--------------->"<<endl;
                int temp = symtab.tables.back().index;
                symtab.pop();
                symtab.tables.back().index = temp;
        }
#line 1859 "y.tab.cpp" /* yacc.c:1646  */
    break;

  case 53:
#line 345 "parser.y" /* yacc.c:1646  */
    {
                /* check if the identifier is in the symbol table */
                if(symtab.global_lookup(*((yyvsp[-2].sval))) == NULL)
                        yyerror("variable not defined");
                
                /* check if the identifier is a variable */
                if(symtab.global_lookup(*((yyvsp[-2].sval)))->S_flag != flag::VARIABLE)
                        yyerror("not a variable");
                
                /* check if the type of the identifier is the same as the type of the expression */
                if (symtab.global_lookup(*((yyvsp[-2].sval)))->S_type != (yyvsp[0].symval)->S_type)
                        yyerror("type mismatch");
                
                Symbol *s = symtab.global_lookup(*((yyvsp[-2].sval)));
                s->init = true;
                s->S_data = (yyvsp[0].symval)->S_data;
                int index = symtab.get_index(*((yyvsp[-2].sval)));
                if(index == -1)
                        G_set_global_Var(*(yyvsp[-2].sval));
                else
                        G_set_local_Var(index);
        }
#line 1886 "y.tab.cpp" /* yacc.c:1646  */
    break;

  case 54:
#line 368 "parser.y" /* yacc.c:1646  */
    {
                G_put_Dec();
        }
#line 1894 "y.tab.cpp" /* yacc.c:1646  */
    break;

  case 55:
#line 372 "parser.y" /* yacc.c:1646  */
    {
                G_put((yyvsp[0].symval)->S_type);
        }
#line 1902 "y.tab.cpp" /* yacc.c:1646  */
    break;

  case 56:
#line 376 "parser.y" /* yacc.c:1646  */
    {
                /* check if the identifier is in the symbol table */
                if(symtab.global_lookup(*((yyvsp[0].sval))) == NULL)
                        yyerror("variable not defined");
                
                /* check if the identifier is a variable */
                if(symtab.global_lookup(*((yyvsp[0].sval)))->S_flag != flag::VARIABLE)
                        yyerror("not a variable");
                
                Symbol *s = symtab.global_lookup(*((yyvsp[0].sval)));
                s->init = true;
        }
#line 1919 "y.tab.cpp" /* yacc.c:1646  */
    break;

  case 57:
#line 389 "parser.y" /* yacc.c:1646  */
    {
                G_Result();
        }
#line 1927 "y.tab.cpp" /* yacc.c:1646  */
    break;

  case 58:
#line 393 "parser.y" /* yacc.c:1646  */
    {
                G_Return();
        }
#line 1935 "y.tab.cpp" /* yacc.c:1646  */
    break;

  case 60:
#line 398 "parser.y" /* yacc.c:1646  */
    {
                G_skip();
        }
#line 1943 "y.tab.cpp" /* yacc.c:1646  */
    break;

  case 62:
#line 404 "parser.y" /* yacc.c:1646  */
    {
                /* type check */
                if((yyvsp[0].symval)->S_type != type::BOOL_TYPE)
                        yyerror("type mismatch");
                G_When();
        }
#line 1954 "y.tab.cpp" /* yacc.c:1646  */
    break;

  case 64:
#line 414 "parser.y" /* yacc.c:1646  */
    {
                /* type check */
                if((yyvsp[-2].symval)->S_type != (yyvsp[0].symval)->S_type)
                        cout << "WARNING:type mismatch" << endl;

                
                if((yyvsp[-2].symval)->S_type == type::INT_TYPE)
                        (yyval.symval) = intConst((yyvsp[-2].symval)->S_data.int_data + (yyvsp[0].symval)->S_data.int_data);
                else if((yyvsp[-2].symval)->S_type == type::REAL_TYPE)
                        (yyval.symval) = realConst((yyvsp[-2].symval)->S_data.real_data + (yyvsp[0].symval)->S_data.real_data);
                else
                        yyerror("operator error");
                G_Operator(op::A_D_D);
        }
#line 1973 "y.tab.cpp" /* yacc.c:1646  */
    break;

  case 65:
#line 429 "parser.y" /* yacc.c:1646  */
    {
                /* type check */
                if((yyvsp[-2].symval)->S_type != (yyvsp[0].symval)->S_type)
                        cout << "WARNING:type mismatch" << endl;

                
                if((yyvsp[-2].symval)->S_type == type::INT_TYPE)
                        (yyval.symval) = intConst((yyvsp[-2].symval)->S_data.int_data - (yyvsp[0].symval)->S_data.int_data);
                else if((yyvsp[-2].symval)->S_type == type::REAL_TYPE)
                        (yyval.symval) = realConst((yyvsp[-2].symval)->S_data.real_data - (yyvsp[0].symval)->S_data.real_data);
                else
                        yyerror("operator error");
                cout <<"Reduce exp - exp"<<endl;
                G_Operator(op::S_U_B);
        }
#line 1993 "y.tab.cpp" /* yacc.c:1646  */
    break;

  case 66:
#line 445 "parser.y" /* yacc.c:1646  */
    {
                /* type check */
                if((yyvsp[-2].symval)->S_type != (yyvsp[0].symval)->S_type)
                        cout << "WARNING:type mismatch" << endl;

                
                if((yyvsp[-2].symval)->S_type == type::INT_TYPE)
                        (yyval.symval) = intConst((yyvsp[-2].symval)->S_data.int_data * (yyvsp[0].symval)->S_data.int_data);
                else if((yyvsp[-2].symval)->S_type == type::REAL_TYPE)
                        (yyval.symval) = realConst((yyvsp[-2].symval)->S_data.real_data * (yyvsp[0].symval)->S_data.real_data);
                else
                        yyerror("operator error");
                
                G_Operator(op::M_U_L);
        }
#line 2013 "y.tab.cpp" /* yacc.c:1646  */
    break;

  case 67:
#line 461 "parser.y" /* yacc.c:1646  */
    {
                /* type check */
                if((yyvsp[-2].symval)->S_type != (yyvsp[0].symval)->S_type)
                        cout << "WARNING:type mismatch" << endl;

                
                if((yyvsp[-2].symval)->S_type == type::INT_TYPE)
                        (yyval.symval) = intConst((yyvsp[-2].symval)->S_data.int_data / (yyvsp[0].symval)->S_data.int_data);
                else if((yyvsp[-2].symval)->S_type == type::REAL_TYPE)
                        (yyval.symval) = realConst((yyvsp[-2].symval)->S_data.real_data / (yyvsp[0].symval)->S_data.real_data);
                else
                        yyerror("operator error");
                
                G_Operator(op::D_I_V);
        }
#line 2033 "y.tab.cpp" /* yacc.c:1646  */
    break;

  case 68:
#line 477 "parser.y" /* yacc.c:1646  */
    {
                /* type check */
                if((yyvsp[-2].symval)->S_type != (yyvsp[0].symval)->S_type)
                        cout << "WARNING:type mismatch" << endl;

                
                if((yyvsp[-2].symval)->S_type == type::INT_TYPE)
                        (yyval.symval) = intConst((yyvsp[-2].symval)->S_data.int_data % (yyvsp[0].symval)->S_data.int_data);
                else
                        yyerror("operator error");
                
                G_Operator(op::M_O_D);
        }
#line 2051 "y.tab.cpp" /* yacc.c:1646  */
    break;

  case 69:
#line 491 "parser.y" /* yacc.c:1646  */
    {
                if((yyvsp[0].symval)->S_type == type::INT_TYPE)
                        (yyval.symval) = intConst(-(yyvsp[0].symval)->S_data.int_data);
                else if((yyvsp[0].symval)->S_type == type::REAL_TYPE)
                        (yyval.symval) = realConst(-(yyvsp[0].symval)->S_data.real_data);
                else
                        yyerror("operator error");

                cout <<"Reduce - exp"<<endl;
                G_Operator(op::N_E_G);
        }
#line 2067 "y.tab.cpp" /* yacc.c:1646  */
    break;

  case 70:
#line 503 "parser.y" /* yacc.c:1646  */
    {
                /* type check */
                if((yyvsp[-2].symval)->S_type != (yyvsp[0].symval)->S_type)
                        cout << "WARNING:type mismatch" << endl;

                
                if((yyvsp[-2].symval)->S_type == type::BOOL_TYPE)
                        (yyval.symval) = boolConst((yyvsp[-2].symval)->S_data.bool_data && (yyvsp[0].symval)->S_data.bool_data);
                else
                        yyerror("operator error");
                G_Operator(op::A_N_D);
                
        }
#line 2085 "y.tab.cpp" /* yacc.c:1646  */
    break;

  case 71:
#line 517 "parser.y" /* yacc.c:1646  */
    {
                /* type check */
                if((yyvsp[-2].symval)->S_type != (yyvsp[0].symval)->S_type)
                        cout << "WARNING:type mismatch" << endl;

                
                if((yyvsp[-2].symval)->S_type == type::BOOL_TYPE)
                        (yyval.symval) = boolConst((yyvsp[-2].symval)->S_data.bool_data || (yyvsp[0].symval)->S_data.bool_data);
                else
                        yyerror("operator error");
                
                G_Operator(op::O_R);
        }
#line 2103 "y.tab.cpp" /* yacc.c:1646  */
    break;

  case 72:
#line 531 "parser.y" /* yacc.c:1646  */
    {
                
                if((yyvsp[0].symval)->S_type == type::BOOL_TYPE)
                        (yyval.symval) = (yyvsp[0].symval);
                else
                        yyerror("operator error");
                
                G_Operator(op::N_O_T);
                
        }
#line 2118 "y.tab.cpp" /* yacc.c:1646  */
    break;

  case 73:
#line 542 "parser.y" /* yacc.c:1646  */
    {
                /* type check */
                if((yyvsp[-2].symval)->S_type != (yyvsp[0].symval)->S_type)
                        cout << "WARNING:type mismatch" << endl;

                
                if((yyvsp[-2].symval)->S_type == type::INT_TYPE)
                        (yyval.symval) = boolConst((yyvsp[-2].symval)->S_data.int_data < (yyvsp[0].symval)->S_data.int_data);
                else if((yyvsp[-2].symval)->S_type == type::REAL_TYPE)
                        (yyval.symval) = boolConst((yyvsp[-2].symval)->S_data.real_data < (yyvsp[0].symval)->S_data.real_data);
                else
                        yyerror("operator error");
                
                G_Compare(condition::IFLT);  
        }
#line 2138 "y.tab.cpp" /* yacc.c:1646  */
    break;

  case 74:
#line 558 "parser.y" /* yacc.c:1646  */
    {
                /* type check */
                if((yyvsp[-2].symval)->S_type != (yyvsp[0].symval)->S_type)
                        cout << "WARNING:type mismatch" << endl;

                
                if((yyvsp[-2].symval)->S_type == type::INT_TYPE)
                        (yyval.symval) = boolConst((yyvsp[-2].symval)->S_data.int_data <= (yyvsp[0].symval)->S_data.int_data);
                else if((yyvsp[-2].symval)->S_type == type::REAL_TYPE)
                        (yyval.symval) = boolConst((yyvsp[-2].symval)->S_data.real_data <= (yyvsp[0].symval)->S_data.real_data);
                else
                        yyerror("operator error");
                
                G_Compare(condition::IFLE);  
        }
#line 2158 "y.tab.cpp" /* yacc.c:1646  */
    break;

  case 75:
#line 574 "parser.y" /* yacc.c:1646  */
    {
                /* type check */
                if((yyvsp[-2].symval)->S_type != (yyvsp[0].symval)->S_type)
                        cout << "WARNING:type mismatch" << endl;

                if((yyvsp[-2].symval)->S_type == type::INT_TYPE)
                        (yyval.symval) = boolConst((yyvsp[-2].symval)->S_data.int_data == (yyvsp[0].symval)->S_data.int_data);
                else if((yyvsp[-2].symval)->S_type == type::REAL_TYPE)
                        (yyval.symval) = boolConst((yyvsp[-2].symval)->S_data.real_data == (yyvsp[0].symval)->S_data.real_data);
                else if((yyvsp[-2].symval)->S_type == type::BOOL_TYPE)
                        (yyval.symval) = boolConst((yyvsp[-2].symval)->S_data.bool_data == (yyvsp[0].symval)->S_data.bool_data);
                else
                        yyerror("operator error");
                
                G_Compare(condition::IFEE);  
        }
#line 2179 "y.tab.cpp" /* yacc.c:1646  */
    break;

  case 76:
#line 591 "parser.y" /* yacc.c:1646  */
    {
                /* type check */
                if((yyvsp[-2].symval)->S_type != (yyvsp[0].symval)->S_type)
                        cout << "WARNING:type mismatch" << endl;

                if((yyvsp[-2].symval)->S_type == type::INT_TYPE)
                        (yyval.symval) = boolConst((yyvsp[-2].symval)->S_data.int_data >= (yyvsp[0].symval)->S_data.int_data);
                else if((yyvsp[-2].symval)->S_type == type::REAL_TYPE)
                        (yyval.symval) = boolConst((yyvsp[-2].symval)->S_data.real_data >= (yyvsp[0].symval)->S_data.real_data);
                else
                        yyerror("operator error");

                G_Compare(condition::IFGE);  
        }
#line 2198 "y.tab.cpp" /* yacc.c:1646  */
    break;

  case 77:
#line 606 "parser.y" /* yacc.c:1646  */
    {
                /* type check */
                if((yyvsp[-2].symval)->S_type != (yyvsp[0].symval)->S_type)
                        cout << "WARNING:type mismatch" << endl;

                if((yyvsp[-2].symval)->S_type == type::INT_TYPE)
                        (yyval.symval) = boolConst((yyvsp[-2].symval)->S_data.int_data > (yyvsp[0].symval)->S_data.int_data);
                else if((yyvsp[-2].symval)->S_type == type::REAL_TYPE)
                        (yyval.symval) = boolConst((yyvsp[-2].symval)->S_data.real_data > (yyvsp[0].symval)->S_data.real_data);
                else
                        yyerror("operator error");

                G_Compare(condition::IFGT);  
        }
#line 2217 "y.tab.cpp" /* yacc.c:1646  */
    break;

  case 78:
#line 621 "parser.y" /* yacc.c:1646  */
    {
                /* type check */
                if((yyvsp[-2].symval)->S_type != (yyvsp[0].symval)->S_type)
                        cout << "WARNING:type mismatch" << endl;

                if((yyvsp[-2].symval)->S_type == type::INT_TYPE)
                        (yyval.symval) = boolConst((yyvsp[-2].symval)->S_data.int_data != (yyvsp[0].symval)->S_data.int_data);
                else if((yyvsp[-2].symval)->S_type == type::REAL_TYPE)
                        (yyval.symval) = boolConst((yyvsp[-2].symval)->S_data.real_data != (yyvsp[0].symval)->S_data.real_data);
                else if((yyvsp[-2].symval)->S_type == type::BOOL_TYPE)
                        (yyval.symval) = boolConst((yyvsp[-2].symval)->S_data.bool_data != (yyvsp[0].symval)->S_data.bool_data);
                else
                        yyerror("operator error");
                G_Compare(condition::IFNE);  
        }
#line 2237 "y.tab.cpp" /* yacc.c:1646  */
    break;

  case 79:
#line 637 "parser.y" /* yacc.c:1646  */
    {
                (yyval.symval) = (yyvsp[-1].symval);
        }
#line 2245 "y.tab.cpp" /* yacc.c:1646  */
    break;

  case 80:
#line 641 "parser.y" /* yacc.c:1646  */
    {
                /* check if the identifier is in the symbol table */
                if(symtab.global_lookup(*((yyvsp[0].sval))) == NULL)
                        yyerror("Not defined error");
                
                if(symtab.global_lookup(*((yyvsp[0].sval)))->S_flag == flag::FUNC)
                        yyerror("Not a variable error");
                        
                (yyval.symval) = symtab.global_lookup(*((yyvsp[0].sval)));
                Symbol *temp = symtab.global_lookup(*((yyvsp[0].sval)));
                if(temp->S_flag == flag::CONSTANT)
                {
                        if(temp->S_type == type::INT_TYPE)
                                G_const_Int(temp->S_data.int_data);
                        else if(temp->S_type == type::BOOL_TYPE)
                                G_const_Bool(temp->S_data.bool_data);
                        else if(temp->S_type == type::STRING_TYPE)
                                G_const_Str(temp->S_data.string_data);
                }
                else
                {
                        int index = symtab.global_lookup(*((yyvsp[0].sval)))->index;
                        if(index == -1)
                                G_get_global_Var(*(yyvsp[0].sval));
                        else
                                G_get_local_Var(index);
                }
        }
#line 2278 "y.tab.cpp" /* yacc.c:1646  */
    break;

  case 81:
#line 670 "parser.y" /* yacc.c:1646  */
    {
                if((yyvsp[0].symval)->S_type == type::INT_TYPE)
                        G_const_Int((yyvsp[0].symval)->S_data.int_data);
                else if((yyvsp[0].symval)->S_type == type::BOOL_TYPE)
                        G_const_Bool((yyvsp[0].symval)->S_data.bool_data);
                else if((yyvsp[0].symval)->S_type == type::STRING_TYPE)
                        G_const_Str((yyvsp[0].symval)->S_data.string_data);
                        
        }
#line 2292 "y.tab.cpp" /* yacc.c:1646  */
    break;

  case 84:
#line 683 "parser.y" /* yacc.c:1646  */
    {
                /* check if the identifier is in the symbol table */
                if(symtab.global_lookup(*((yyvsp[-3].sval))) == NULL)
                        yyerror("Not defined error");
                else if (symtab.global_lookup(*((yyvsp[-3].sval)))->S_flag != flag::FUNC)
                        yyerror("Not a function error");
                else if (symtab.global_lookup(*((yyvsp[-3].sval)))->param_num != param_num)
                        yyerror("Parameter number mismatch");
                else
                {
                        param_num = 0;
                        (yyval.symval) = symtab.global_lookup(*((yyvsp[-3].sval)));
                        Symbol *temp = symtab.global_lookup(*((yyvsp[-3].sval)));
                        G_call_Func(*temp);
                }
                       
        }
#line 2314 "y.tab.cpp" /* yacc.c:1646  */
    break;

  case 85:
#line 703 "parser.y" /* yacc.c:1646  */
    {
                /* check if the identifier is in the symbol table */
                if(symtab.global_lookup(*((yyvsp[-3].sval))) == NULL)
                        yyerror("Not defined error");
                else if (symtab.global_lookup(*((yyvsp[-3].sval)))->S_flag != flag::ARRAY_FLAG)
                        yyerror("Not an array error");
                else if((yyvsp[-1].symval)->S_type != type::INT_TYPE)
                        yyerror("Array index must be an integer");
                else                        
                        (yyval.symval) = symtab.global_lookup(*((yyvsp[-3].sval)));
        }
#line 2330 "y.tab.cpp" /* yacc.c:1646  */
    break;

  case 90:
#line 722 "parser.y" /* yacc.c:1646  */
    {
                param_num++;
        }
#line 2338 "y.tab.cpp" /* yacc.c:1646  */
    break;

  case 91:
#line 728 "parser.y" /* yacc.c:1646  */
    {
                int temp = symtab.tables.back().index;
                symtab.push();
                symtab.tables.back().index = temp;
        }
#line 2348 "y.tab.cpp" /* yacc.c:1646  */
    break;

  case 92:
#line 734 "parser.y" /* yacc.c:1646  */
    {
                cout<<"<-----------------------local variable------------------->"<<endl;
                symtab.tables.back().dump();
                cout<<"<-----------------------local variable end--------------->"<<endl;
                int temp = symtab.tables.back().index;
                symtab.pop();
                symtab.tables.back().index = temp;

                if((yyvsp[-3].symval)->S_type != type::BOOL_TYPE)
                        yyerror("Condition must be a boolean");
                
                G_If_Start();
        
        }
#line 2367 "y.tab.cpp" /* yacc.c:1646  */
    break;

  case 93:
#line 749 "parser.y" /* yacc.c:1646  */
    {
                G_If_Else();
                int temp = symtab.tables.back().index;
                symtab.push();
                symtab.tables.back().index = temp;
        }
#line 2378 "y.tab.cpp" /* yacc.c:1646  */
    break;

  case 94:
#line 756 "parser.y" /* yacc.c:1646  */
    {
                cout<<"<-----------------------local variable------------------->"<<endl;
                symtab.tables.back().dump();
                cout<<"<-----------------------local variable end--------------->"<<endl;
                int temp = symtab.tables.back().index;
                symtab.pop();
                symtab.tables.back().index = temp;
                G_If_Else_End();
        }
#line 2392 "y.tab.cpp" /* yacc.c:1646  */
    break;

  case 95:
#line 766 "parser.y" /* yacc.c:1646  */
    {
                G_If_End();
        }
#line 2400 "y.tab.cpp" /* yacc.c:1646  */
    break;

  case 96:
#line 772 "parser.y" /* yacc.c:1646  */
    {
                int temp = symtab.tables.back().index;
                symtab.push();
                symtab.tables.back().index = temp;
                G_Loop_Start();
        }
#line 2411 "y.tab.cpp" /* yacc.c:1646  */
    break;

  case 97:
#line 779 "parser.y" /* yacc.c:1646  */
    {
                cout<<"<-----------------------local variable------------------->"<<endl;
                symtab.tables.back().dump();
                cout<<"<-----------------------local variable end--------------->"<<endl;
                int temp = symtab.tables.back().index;
                symtab.pop();
                symtab.tables.back().index = temp;
                G_Loop_End();
        }
#line 2425 "y.tab.cpp" /* yacc.c:1646  */
    break;

  case 98:
#line 789 "parser.y" /* yacc.c:1646  */
    {
                int temp = symtab.tables.back().index;
                symtab.push();
                symtab.tables.back().index = temp;
        }
#line 2435 "y.tab.cpp" /* yacc.c:1646  */
    break;

  case 99:
#line 795 "parser.y" /* yacc.c:1646  */
    {
                /* check if the identifier is already in the symbol table */
                /*
                if(symtab.lookup(*($4)) != NULL)
                        yyerror("variable redefine");
                
                Symbol s;
                s.init = false;
                s.S_type = type::INT_TYPE;
                s.S_flag = flag::VARIABLE;
                symtab.insert(*($4), s);
                */
        }
#line 2453 "y.tab.cpp" /* yacc.c:1646  */
    break;

  case 100:
#line 809 "parser.y" /* yacc.c:1646  */
    {
                G_const_Int((yyvsp[0].symval)->S_data.int_data);
                if(symtab.global_lookup(*((yyvsp[-3].sval)))->index == -1)
                        G_set_global_Var(*((yyvsp[-3].sval)));
                else
                        G_set_local_Var(symtab.global_lookup(*((yyvsp[-3].sval)))->index);
                
        }
#line 2466 "y.tab.cpp" /* yacc.c:1646  */
    break;

  case 101:
#line 818 "parser.y" /* yacc.c:1646  */
    {
                if((yyvsp[-4].symval)->S_flag != flag::CONSTANT || (yyvsp[0].symval)->S_flag != flag::CONSTANT)
                        yyerror("Index must be a variable");

                if((yyvsp[-4].symval)->S_type != type::INT_TYPE || (yyvsp[0].symval)->S_type != type::INT_TYPE)
                        yyerror("Index must be an integer");
                
                G_Loop_Start();
                if(symtab.global_lookup(*((yyvsp[-7].sval)))->index == -1)
                        G_For(*((yyvsp[-7].sval)), (yyvsp[0].symval)->S_data.int_data);
                else
                        G_For(symtab.global_lookup(*((yyvsp[-7].sval)))->index, (yyvsp[0].symval)->S_data.int_data);
                G_Compare(condition::IFGT);
                G_When();
                
        }
#line 2487 "y.tab.cpp" /* yacc.c:1646  */
    break;

  case 102:
#line 835 "parser.y" /* yacc.c:1646  */
    {
                G_For_Body(*(yyvsp[-9].sval));
        }
#line 2495 "y.tab.cpp" /* yacc.c:1646  */
    break;

  case 103:
#line 839 "parser.y" /* yacc.c:1646  */
    {
                cout<<"<-----------------------local variable------------------->"<<endl;
                symtab.tables.back().dump();
                cout<<"<-----------------------local variable end--------------->"<<endl;
                int temp = symtab.tables.back().index;
                symtab.pop();
                symtab.tables.back().index = temp;
                G_Loop_End();
        }
#line 2509 "y.tab.cpp" /* yacc.c:1646  */
    break;


#line 2513 "y.tab.cpp" /* yacc.c:1646  */
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
      yyerror (YY_("syntax error"));
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
        yyerror (yymsgp);
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
                      yytoken, &yylval);
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
                  yystos[yystate], yyvsp);
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
  yyerror (YY_("memory exhausted"));
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
                  yytoken, &yylval);
    }
  /* Do not reclaim the symbols of the rule whose action triggered
     this YYABORT or YYACCEPT.  */
  YYPOPSTACK (yylen);
  YY_STACK_PRINT (yyss, yyssp);
  while (yyssp != yyss)
    {
      yydestruct ("Cleanup: popping",
                  yystos[*yyssp], yyvsp);
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
#line 853 "parser.y" /* yacc.c:1906  */



void yyerror(string s){
        cerr << "yyerror: line " << linenum << ": " << s << endl;

  	exit(1);
}


int main(int argc, char *argv[])
{
    /* open the source program file */
    if (argc != 2) {
        printf ("Usage: sc filename\n");
        exit(1);
    }
    yyin = fopen(argv[1], "r");         /* open input file */
    

    filename = string(argv[1]);
    std::vector<std::string> tokens;
    std::string token;
    std::stringstream ss(filename);
    while (getline(ss, token, '/')){
        tokens.push_back(token);
    }
    className = tokens.back();
    className.pop_back();
    className.pop_back();
    className.pop_back();
    filename += ".jasm";
    string jasmfolder = "jasmFile";
    filename = filename.replace(2,4,jasmfolder,0,8);
        	
    output.open(filename);

    output << "/*------------------------------------------------*/" << endl;
    output << "/*              Java Assembly Code                */" << endl;
    output << "/*------------------------------------------------*/" << endl;

    /* perform parsing */
    if (yyparse() == 1)                 /* parsing */
        yyerror("Parsing error !");     /* syntax error */

        printf("Global SymbolTable:\n");
        symtab.dump();
}
