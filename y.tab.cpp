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

#include "symboltable.hpp"
#include "lex.yy.cpp"
#define Trace(t)        printf(t)
void yyerror(string s);
symboltables symtab;
int param_num = 0;

#line 75 "y.tab.cpp" /* yacc.c:339  */

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
#line 15 "parser.y" /* yacc.c:355  */

  int ival;
  float fval;
  string *sval;
  type var_type;
  Symbol *symval;

#line 213 "y.tab.cpp" /* yacc.c:355  */
};

typedef union YYSTYPE YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE yylval;

int yyparse (void);

#endif /* !YY_YY_Y_TAB_HPP_INCLUDED  */

/* Copy the second part of user declarations.  */

#line 230 "y.tab.cpp" /* yacc.c:358  */

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
#define YYLAST   545

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  60
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  40
/* YYNRULES -- Number of rules.  */
#define YYNRULES  96
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  180

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
       0,    43,    43,    45,    46,    48,    49,    50,    51,    53,
      54,    56,    57,    58,    60,    61,    62,    64,    79,    90,
      94,    98,   102,   107,   111,   115,   119,   123,   128,   143,
     155,   167,   186,   190,   202,   201,   228,   227,   253,   254,
     256,   257,   259,   260,   262,   263,   265,   282,   281,   293,
     311,   312,   325,   326,   327,   328,   329,   331,   337,   340,
     354,   368,   382,   396,   408,   417,   429,   441,   449,   463,
     477,   492,   505,   518,   533,   537,   548,   549,   550,   552,
     570,   583,   584,   586,   587,   589,   595,   600,   601,   605,
     604,   616,   620,   632,   615,   648,   649
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
  "')'", "','", "']'", "$accept", "program", "statements", "statement",
  "declarations", "declaration_function", "declaration", "constants",
  "type", "constant_exp", "variable", "array", "number", "function", "$@1",
  "procedure", "$@2", "function_bodys", "function_body",
  "parameters_block", "parameters", "parameter", "block", "$@3", "simple",
  "when", "expression", "function_procedure", "array_reference",
  "argument_body", "arguments", "func_expression", "if_head", "condition",
  "loop", "$@4", "$@5", "$@6", "$@7", "decreasing", YY_NULLPTR
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

#define YYPACT_NINF -136

#define yypact_value_is_default(Yystate) \
  (!!((Yystate) == (-136)))

#define YYTABLE_NINF -1

#define yytable_value_is_error(Yytable_value) \
  (!!((Yytable_value) == (-1)))

  /* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
     STATE-NUM.  */
static const yytype_int16 yypact[] =
{
    -136,    12,    66,  -136,   -23,    -1,     0,     2,     3,   387,
    -136,  -136,  -136,  -136,  -136,  -136,  -136,   -40,   -28,  -136,
    -136,   -27,  -136,    16,  -136,    55,    25,    35,  -136,    35,
      35,  -136,  -136,  -136,    35,   -24,  -136,  -136,  -136,    35,
      35,  -136,  -136,  -136,  -136,   443,  -136,  -136,    38,  -136,
    -136,    67,    -7,    14,    39,    21,    22,    -7,    48,  -136,
      35,  -136,  -136,  -136,  -136,   -43,   443,  -136,   443,   443,
     494,    35,    35,    35,  -136,   422,    35,    35,    35,    35,
      35,    35,    35,    35,    35,    35,    35,    35,    35,  -136,
     -25,  -136,  -136,  -136,  -136,  -136,    -7,    42,    42,  -136,
      -7,   131,   443,    44,   174,   479,   443,    30,    32,  -136,
     404,  -136,   494,   461,    72,    72,    72,  -136,    72,    72,
      72,   -19,   -19,  -136,  -136,    88,  -136,  -136,    40,  -136,
      43,    37,    46,  -136,    50,  -136,  -136,  -136,  -136,  -136,
    -136,    96,  -136,    35,  -136,  -136,   107,    70,  -136,    43,
      42,  -136,    78,  -136,  -136,   217,  -136,   -25,  -136,  -136,
     260,   -25,   109,   115,   303,    98,    84,  -136,    43,   101,
    -136,    94,  -136,  -136,   -25,  -136,  -136,   346,   137,  -136
};

  /* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
     Performed when YYTABLE does not specify something else to do.  Zero
     means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
      10,     0,     4,     1,     0,     0,     0,     0,     0,     2,
       9,    11,    14,    15,    16,    12,    13,     0,     0,    34,
      36,     0,    47,    58,    27,    96,     0,     0,    89,     0,
       0,    53,    55,    26,     0,    75,    23,    24,    25,     0,
       0,     3,    76,     5,     6,    56,    77,    78,     0,     7,
       8,     0,     0,     0,     0,     0,     0,     0,    29,    39,
       0,    54,    95,    91,    51,    75,    86,    39,    50,    52,
      67,     0,    82,     0,    64,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,    39,
       0,    18,    21,    19,    20,    22,     0,    43,    43,    30,
       0,     0,    57,     0,     0,    49,    85,     0,    81,    84,
       0,    74,    65,    66,    73,    69,    71,    63,    68,    70,
      72,    59,    60,    61,    62,     0,    33,    32,     0,    17,
       0,     0,    42,    45,     0,    28,    48,    41,    40,    38,
      92,     0,    79,     0,    80,    39,     0,     0,    46,     0,
       0,    39,     0,    90,    83,     0,    88,     0,    39,    44,
       0,     0,     0,     0,     0,     0,     0,    87,     0,     0,
      37,     0,    31,    35,     0,    93,    39,     0,     0,    94
};

  /* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -136,  -136,  -136,   145,  -136,  -136,   153,  -136,   -21,   -32,
    -136,  -136,  -135,  -136,  -136,  -136,  -136,   -65,  -136,    61,
    -136,    10,  -136,  -136,  -136,  -136,   -26,  -136,  -136,  -136,
    -136,    20,  -136,  -136,  -136,  -136,  -136,  -136,  -136,  -136
};

  /* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,     1,     9,   137,     2,    10,   138,    12,    54,    42,
      13,    14,   128,    15,    55,    16,    56,   101,   139,   131,
     132,   133,    43,    59,    44,    61,    45,    46,    47,   107,
     108,   109,    48,    49,    50,    67,   103,   152,   176,    63
};

  /* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
     positive, shift that token.  If negative, reduce the rule whose
     number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int16 yytable[] =
{
      58,    66,   104,    68,    69,    52,    57,    24,    70,    71,
      72,    73,     3,    74,    75,    51,   126,   127,    17,    92,
      91,    81,   163,    33,   125,    99,   166,    53,    53,    72,
      73,    87,    88,    93,   102,    36,    37,    38,    94,   175,
      18,    19,    95,    20,    21,   105,   106,   110,    60,    24,
     112,   113,   114,   115,   116,   117,   118,   119,   120,   121,
     122,   123,   124,    62,   129,    33,    64,    89,   135,     4,
      90,    34,    96,     5,    97,    98,    65,    36,    37,    38,
     155,   100,     6,   130,    39,   140,   160,   142,    40,     7,
     143,     4,    22,   164,   149,     5,   147,     8,    53,   145,
     146,    23,    24,    25,   150,    26,    27,   151,    28,   148,
      29,   177,    81,    30,    31,    32,   153,   106,    33,     8,
      85,    86,    87,    88,    34,   156,   157,   167,   158,    35,
      36,    37,    38,   161,     4,    22,   168,    39,     5,   170,
     171,    40,   173,   136,    23,    24,    25,   172,    26,    27,
     174,    28,   179,    29,    41,    11,    30,    31,    32,   134,
     159,    33,     8,   154,     0,     0,     0,    34,     0,     0,
       0,     0,    35,    36,    37,    38,     0,     4,    22,     0,
      39,     5,     0,     0,    40,     0,   141,    23,    24,    25,
       0,    26,    27,     0,    28,     0,    29,     0,     0,    30,
      31,    32,     0,     0,    33,     8,     0,     0,     0,     0,
      34,     0,     0,     0,     0,    35,    36,    37,    38,     0,
       4,    22,     0,    39,     5,     0,     0,    40,     0,   162,
      23,    24,    25,     0,    26,    27,     0,    28,     0,    29,
       0,     0,    30,    31,    32,     0,     0,    33,     8,     0,
       0,     0,     0,    34,     0,     0,     0,     0,    35,    36,
      37,    38,     0,     4,    22,     0,    39,     5,     0,     0,
      40,     0,   165,    23,    24,    25,     0,    26,    27,     0,
      28,     0,    29,     0,     0,    30,    31,    32,     0,     0,
      33,     8,     0,     0,     0,     0,    34,     0,     0,     0,
       0,    35,    36,    37,    38,     0,     4,    22,     0,    39,
       5,     0,     0,    40,     0,   169,    23,    24,    25,     0,
      26,    27,     0,    28,     0,    29,     0,     0,    30,    31,
      32,     0,     0,    33,     8,     0,     0,     0,     0,    34,
       0,     0,     0,     0,    35,    36,    37,    38,     0,     4,
      22,     0,    39,     5,     0,     0,    40,     0,   178,    23,
      24,    25,     0,    26,    27,     0,    28,     0,    29,     0,
       0,    30,    31,    32,     0,     0,    33,     8,     0,     0,
       0,     0,    34,     0,     0,     0,     0,    35,    36,    37,
      38,    22,     0,     0,     0,    39,     0,     0,     0,    40,
      23,    24,    25,     0,    26,    27,     0,    28,     0,    29,
       0,     0,    30,    31,    32,     0,     0,    33,     0,     0,
       0,     0,     0,    34,     0,     0,     0,     0,    35,    36,
      37,    38,     0,     0,     0,     0,    39,     0,    76,    77,
      40,    78,    79,    80,    81,     0,     0,     0,     0,    82,
      83,    84,    85,    86,    87,    88,    76,    77,     0,    78,
      79,    80,    81,   144,     0,     0,     0,    82,    83,    84,
      85,    86,    87,    88,     0,     0,     0,    76,    77,   111,
      78,    79,    80,    81,     0,     0,     0,     0,    82,    83,
      84,    85,    86,    87,    88,    76,    -1,     0,    78,    79,
      80,    81,     0,     0,     0,     0,    82,    83,    84,    85,
      86,    87,    88,    76,    77,     0,    78,    79,    80,    81,
       0,     0,     0,     0,    82,    83,    84,    85,     0,    87,
      88,    78,    79,    80,    81,     0,     0,     0,     0,    82,
      83,    84,    85,    86,    87,    88
};

static const yytype_int16 yycheck[] =
{
      21,    27,    67,    29,    30,    33,    33,    14,    34,    33,
      53,    54,     0,    39,    40,    55,    41,    42,    41,     5,
      52,    40,   157,    30,    89,    57,   161,    55,    55,    53,
      54,    50,    51,    19,    60,    42,    43,    44,    24,   174,
      41,    41,    28,    41,    41,    71,    72,    73,    32,    14,
      76,    77,    78,    79,    80,    81,    82,    83,    84,    85,
      86,    87,    88,     8,    96,    30,    41,    29,   100,     3,
       3,    36,    33,     7,    53,    53,    41,    42,    43,    44,
     145,    33,    16,    41,    49,    41,   151,    57,    53,    23,
      58,     3,     4,   158,    57,     7,    56,    31,    55,    11,
      12,    13,    14,    15,    58,    17,    18,    57,    20,   130,
      22,   176,    40,    25,    26,    27,    20,   143,    30,    31,
      48,    49,    50,    51,    36,    18,    56,    18,   149,    41,
      42,    43,    44,    55,     3,     4,    21,    49,     7,    41,
      56,    53,    41,    12,    13,    14,    15,   168,    17,    18,
      56,    20,    15,    22,     9,     2,    25,    26,    27,    98,
     150,    30,    31,   143,    -1,    -1,    -1,    36,    -1,    -1,
      -1,    -1,    41,    42,    43,    44,    -1,     3,     4,    -1,
      49,     7,    -1,    -1,    53,    -1,    12,    13,    14,    15,
      -1,    17,    18,    -1,    20,    -1,    22,    -1,    -1,    25,
      26,    27,    -1,    -1,    30,    31,    -1,    -1,    -1,    -1,
      36,    -1,    -1,    -1,    -1,    41,    42,    43,    44,    -1,
       3,     4,    -1,    49,     7,    -1,    -1,    53,    -1,    12,
      13,    14,    15,    -1,    17,    18,    -1,    20,    -1,    22,
      -1,    -1,    25,    26,    27,    -1,    -1,    30,    31,    -1,
      -1,    -1,    -1,    36,    -1,    -1,    -1,    -1,    41,    42,
      43,    44,    -1,     3,     4,    -1,    49,     7,    -1,    -1,
      53,    -1,    12,    13,    14,    15,    -1,    17,    18,    -1,
      20,    -1,    22,    -1,    -1,    25,    26,    27,    -1,    -1,
      30,    31,    -1,    -1,    -1,    -1,    36,    -1,    -1,    -1,
      -1,    41,    42,    43,    44,    -1,     3,     4,    -1,    49,
       7,    -1,    -1,    53,    -1,    12,    13,    14,    15,    -1,
      17,    18,    -1,    20,    -1,    22,    -1,    -1,    25,    26,
      27,    -1,    -1,    30,    31,    -1,    -1,    -1,    -1,    36,
      -1,    -1,    -1,    -1,    41,    42,    43,    44,    -1,     3,
       4,    -1,    49,     7,    -1,    -1,    53,    -1,    12,    13,
      14,    15,    -1,    17,    18,    -1,    20,    -1,    22,    -1,
      -1,    25,    26,    27,    -1,    -1,    30,    31,    -1,    -1,
      -1,    -1,    36,    -1,    -1,    -1,    -1,    41,    42,    43,
      44,     4,    -1,    -1,    -1,    49,    -1,    -1,    -1,    53,
      13,    14,    15,    -1,    17,    18,    -1,    20,    -1,    22,
      -1,    -1,    25,    26,    27,    -1,    -1,    30,    -1,    -1,
      -1,    -1,    -1,    36,    -1,    -1,    -1,    -1,    41,    42,
      43,    44,    -1,    -1,    -1,    -1,    49,    -1,    34,    35,
      53,    37,    38,    39,    40,    -1,    -1,    -1,    -1,    45,
      46,    47,    48,    49,    50,    51,    34,    35,    -1,    37,
      38,    39,    40,    59,    -1,    -1,    -1,    45,    46,    47,
      48,    49,    50,    51,    -1,    -1,    -1,    34,    35,    57,
      37,    38,    39,    40,    -1,    -1,    -1,    -1,    45,    46,
      47,    48,    49,    50,    51,    34,    35,    -1,    37,    38,
      39,    40,    -1,    -1,    -1,    -1,    45,    46,    47,    48,
      49,    50,    51,    34,    35,    -1,    37,    38,    39,    40,
      -1,    -1,    -1,    -1,    45,    46,    47,    48,    -1,    50,
      51,    37,    38,    39,    40,    -1,    -1,    -1,    -1,    45,
      46,    47,    48,    49,    50,    51
};

  /* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
     symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,    61,    64,     0,     3,     7,    16,    23,    31,    62,
      65,    66,    67,    70,    71,    73,    75,    41,    41,    41,
      41,    41,     4,    13,    14,    15,    17,    18,    20,    22,
      25,    26,    27,    30,    36,    41,    42,    43,    44,    49,
      53,    63,    69,    82,    84,    86,    87,    88,    92,    93,
      94,    55,    33,    55,    68,    74,    76,    33,    68,    83,
      32,    85,     8,    99,    41,    41,    86,    95,    86,    86,
      86,    33,    53,    54,    86,    86,    34,    35,    37,    38,
      39,    40,    45,    46,    47,    48,    49,    50,    51,    29,
       3,    69,     5,    19,    24,    28,    33,    53,    53,    69,
      33,    77,    86,    96,    77,    86,    86,    89,    90,    91,
      86,    57,    86,    86,    86,    86,    86,    86,    86,    86,
      86,    86,    86,    86,    86,    77,    41,    42,    72,    69,
      41,    79,    80,    81,    79,    69,    12,    63,    66,    78,
      41,    12,    57,    58,    59,    11,    12,    56,    68,    57,
      58,    57,    97,    20,    91,    77,    18,    56,    68,    81,
      77,    55,    12,    72,    77,    12,    72,    18,    21,    12,
      41,    56,    68,    41,    56,    72,    98,    77,    12,    15
};

  /* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint8 yyr1[] =
{
       0,    60,    61,    62,    62,    63,    63,    63,    63,    64,
      64,    65,    65,    65,    66,    66,    66,    67,    67,    68,
      68,    68,    68,    69,    69,    69,    69,    69,    70,    70,
      70,    71,    72,    72,    74,    73,    76,    75,    77,    77,
      78,    78,    79,    79,    80,    80,    81,    83,    82,    84,
      84,    84,    84,    84,    84,    84,    84,    85,    85,    86,
      86,    86,    86,    86,    86,    86,    86,    86,    86,    86,
      86,    86,    86,    86,    86,    86,    86,    86,    86,    87,
      88,    89,    89,    90,    90,    91,    92,    93,    93,    95,
      94,    96,    97,    98,    94,    99,    99
};

  /* YYR2[YYN] -- Number of symbols on the right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,     2,     2,     0,     1,     1,     1,     1,     2,
       0,     1,     1,     1,     1,     1,     1,     5,     4,     2,
       2,     2,     2,     1,     1,     1,     1,     1,     5,     3,
       4,    10,     1,     1,     0,    10,     0,     9,     2,     0,
       1,     1,     1,     0,     3,     1,     2,     0,     4,     3,
       2,     2,     2,     1,     2,     1,     1,     2,     0,     3,
       3,     3,     3,     3,     2,     3,     3,     2,     3,     3,
       3,     3,     3,     3,     3,     1,     1,     1,     1,     4,
       4,     1,     0,     3,     1,     1,     2,     7,     5,     0,
       5,     0,     0,     0,    14,     1,     0
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
        case 17:
#line 65 "parser.y" /* yacc.c:1646  */
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
#line 1523 "y.tab.cpp" /* yacc.c:1646  */
    break;

  case 18:
#line 80 "parser.y" /* yacc.c:1646  */
    {
                /* check if the identifier is already in the symbol table */
                if(symtab.lookup(*((yyvsp[-2].sval))) != NULL)
                        printf("ERROR");
                
                (yyvsp[0].symval)->init = true;
                /* insert the identifier into the symbol table */
                symtab.insert(*((yyvsp[-2].sval)), *(yyvsp[0].symval));
        }
#line 1537 "y.tab.cpp" /* yacc.c:1646  */
    break;

  case 19:
#line 91 "parser.y" /* yacc.c:1646  */
    {
                (yyval.var_type) = type::INT_TYPE;
        }
#line 1545 "y.tab.cpp" /* yacc.c:1646  */
    break;

  case 20:
#line 95 "parser.y" /* yacc.c:1646  */
    {
                (yyval.var_type) = type::REAL_TYPE;
        }
#line 1553 "y.tab.cpp" /* yacc.c:1646  */
    break;

  case 21:
#line 99 "parser.y" /* yacc.c:1646  */
    {
                (yyval.var_type) = type::BOOL_TYPE;
        }
#line 1561 "y.tab.cpp" /* yacc.c:1646  */
    break;

  case 22:
#line 103 "parser.y" /* yacc.c:1646  */
    {
                (yyval.var_type) = type::STRING_TYPE;
        }
#line 1569 "y.tab.cpp" /* yacc.c:1646  */
    break;

  case 23:
#line 108 "parser.y" /* yacc.c:1646  */
    {
                (yyval.symval) = intConst((yyvsp[0].ival));
        }
#line 1577 "y.tab.cpp" /* yacc.c:1646  */
    break;

  case 24:
#line 112 "parser.y" /* yacc.c:1646  */
    {
                (yyval.symval) = realConst((yyvsp[0].fval));
        }
#line 1585 "y.tab.cpp" /* yacc.c:1646  */
    break;

  case 25:
#line 116 "parser.y" /* yacc.c:1646  */
    {
                (yyval.symval) = stringConst((yyvsp[0].sval));
        }
#line 1593 "y.tab.cpp" /* yacc.c:1646  */
    break;

  case 26:
#line 120 "parser.y" /* yacc.c:1646  */
    {
                (yyval.symval) = boolConst(true);
        }
#line 1601 "y.tab.cpp" /* yacc.c:1646  */
    break;

  case 27:
#line 124 "parser.y" /* yacc.c:1646  */
    {
                (yyval.symval) = boolConst(false);
        }
#line 1609 "y.tab.cpp" /* yacc.c:1646  */
    break;

  case 28:
#line 129 "parser.y" /* yacc.c:1646  */
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
        }
#line 1628 "y.tab.cpp" /* yacc.c:1646  */
    break;

  case 29:
#line 144 "parser.y" /* yacc.c:1646  */
    {
                /* check if the identifier is already in the symbol table */
                if(symtab.lookup(*((yyvsp[-1].sval))) != NULL)
                        yyerror("variable redefine");
                
                Symbol s;
                s.init = false;
                s.S_type = (yyvsp[0].var_type);
                s.S_flag = flag::VARIABLE;
                symtab.insert(*((yyvsp[-1].sval)), s);
        }
#line 1644 "y.tab.cpp" /* yacc.c:1646  */
    break;

  case 30:
#line 156 "parser.y" /* yacc.c:1646  */
    {
                /* check if the identifier is already in the symbol table */
                if(symtab.lookup(*((yyvsp[-2].sval))) != NULL)
                        yyerror("variable redefine");
                
                (yyvsp[0].symval)->init = true;
                (yyvsp[0].symval)->S_flag = flag::VARIABLE;
                /* insert the identifier into the symbol table */
                symtab.insert(*((yyvsp[-2].sval)), *(yyvsp[0].symval));
        }
#line 1659 "y.tab.cpp" /* yacc.c:1646  */
    break;

  case 31:
#line 168 "parser.y" /* yacc.c:1646  */
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
#line 1681 "y.tab.cpp" /* yacc.c:1646  */
    break;

  case 32:
#line 187 "parser.y" /* yacc.c:1646  */
    {
                (yyval.symval) = intConst((yyvsp[0].ival));
        }
#line 1689 "y.tab.cpp" /* yacc.c:1646  */
    break;

  case 33:
#line 191 "parser.y" /* yacc.c:1646  */
    {
                /* check if the identifier is already in the symbol table */
                if(symtab.global_lookup(*((yyvsp[0].sval))) == NULL)
                        yyerror("identifier not found");
                
                Symbol *s = symtab.global_lookup(*((yyvsp[0].sval)));
                
                (yyval.symval) = s;
        }
#line 1703 "y.tab.cpp" /* yacc.c:1646  */
    break;

  case 34:
#line 202 "parser.y" /* yacc.c:1646  */
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
#line 1720 "y.tab.cpp" /* yacc.c:1646  */
    break;

  case 35:
#line 215 "parser.y" /* yacc.c:1646  */
    {
                cout<<"<-----------------------local variable------------------->"<<endl;
                symtab.tables.back().dump();
                cout<<"<-----------------------local variable end--------------->"<<endl;
                symtab.pop();
                symtab.tables.back().table.back().S_type = (yyvsp[-3].var_type);
                symtab.tables.back().table.back().param_num = param_num;
                param_num = 0;
                if (*(yyvsp[-8].sval) != *(yyvsp[0].sval))
                        yyerror("function declaration error");
        }
#line 1736 "y.tab.cpp" /* yacc.c:1646  */
    break;

  case 36:
#line 228 "parser.y" /* yacc.c:1646  */
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
#line 1754 "y.tab.cpp" /* yacc.c:1646  */
    break;

  case 37:
#line 242 "parser.y" /* yacc.c:1646  */
    {
                cout<<"<-----------------------local variable------------------->"<<endl;
                symtab.tables.back().dump();
                cout<<"<-----------------------local variable end--------------->"<<endl;
                symtab.pop();
                symtab.tables.back().table.back().param_num = param_num;
                param_num = 0;
                if (*(yyvsp[-7].sval) != *(yyvsp[0].sval))
                        yyerror("function declaration error");
        }
#line 1769 "y.tab.cpp" /* yacc.c:1646  */
    break;

  case 46:
#line 266 "parser.y" /* yacc.c:1646  */
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
#line 1787 "y.tab.cpp" /* yacc.c:1646  */
    break;

  case 47:
#line 282 "parser.y" /* yacc.c:1646  */
    {
                symtab.push();
        }
#line 1795 "y.tab.cpp" /* yacc.c:1646  */
    break;

  case 48:
#line 286 "parser.y" /* yacc.c:1646  */
    {
                cout<<"<-----------------------local variable------------------->"<<endl;
                symtab.tables.back().dump();
                cout<<"<-----------------------local variable end--------------->"<<endl;
                symtab.pop();
        }
#line 1806 "y.tab.cpp" /* yacc.c:1646  */
    break;

  case 49:
#line 294 "parser.y" /* yacc.c:1646  */
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
        }
#line 1828 "y.tab.cpp" /* yacc.c:1646  */
    break;

  case 51:
#line 313 "parser.y" /* yacc.c:1646  */
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
#line 1845 "y.tab.cpp" /* yacc.c:1646  */
    break;

  case 57:
#line 332 "parser.y" /* yacc.c:1646  */
    {
                /* type check */
                if((yyvsp[0].symval)->S_type != type::BOOL_TYPE)
                        yyerror("type mismatch");
        }
#line 1855 "y.tab.cpp" /* yacc.c:1646  */
    break;

  case 59:
#line 341 "parser.y" /* yacc.c:1646  */
    {
                /* type check */
                if((yyvsp[-2].symval)->S_type != (yyvsp[0].symval)->S_type)
                        yyerror("type mismatch");

                
                if((yyvsp[-2].symval)->S_type == type::INT_TYPE)
                        (yyval.symval) = intConst((yyvsp[-2].symval)->S_data.int_data + (yyvsp[0].symval)->S_data.int_data);
                else if((yyvsp[-2].symval)->S_type == type::REAL_TYPE)
                        (yyval.symval) = realConst((yyvsp[-2].symval)->S_data.real_data + (yyvsp[0].symval)->S_data.real_data);
                else
                        yyerror("operator error");
        }
#line 1873 "y.tab.cpp" /* yacc.c:1646  */
    break;

  case 60:
#line 355 "parser.y" /* yacc.c:1646  */
    {
                /* type check */
                if((yyvsp[-2].symval)->S_type != (yyvsp[0].symval)->S_type)
                        yyerror("type mismatch");

                
                if((yyvsp[-2].symval)->S_type == type::INT_TYPE)
                        (yyval.symval) = intConst((yyvsp[-2].symval)->S_data.int_data - (yyvsp[0].symval)->S_data.int_data);
                else if((yyvsp[-2].symval)->S_type == type::REAL_TYPE)
                        (yyval.symval) = realConst((yyvsp[-2].symval)->S_data.real_data - (yyvsp[0].symval)->S_data.real_data);
                else
                        yyerror("operator error");
        }
#line 1891 "y.tab.cpp" /* yacc.c:1646  */
    break;

  case 61:
#line 369 "parser.y" /* yacc.c:1646  */
    {
                /* type check */
                if((yyvsp[-2].symval)->S_type != (yyvsp[0].symval)->S_type)
                        yyerror("type mismatch");

                
                if((yyvsp[-2].symval)->S_type == type::INT_TYPE)
                        (yyval.symval) = intConst((yyvsp[-2].symval)->S_data.int_data * (yyvsp[0].symval)->S_data.int_data);
                else if((yyvsp[-2].symval)->S_type == type::REAL_TYPE)
                        (yyval.symval) = realConst((yyvsp[-2].symval)->S_data.real_data * (yyvsp[0].symval)->S_data.real_data);
                else
                        yyerror("operator error");
        }
#line 1909 "y.tab.cpp" /* yacc.c:1646  */
    break;

  case 62:
#line 383 "parser.y" /* yacc.c:1646  */
    {
                /* type check */
                if((yyvsp[-2].symval)->S_type != (yyvsp[0].symval)->S_type)
                        yyerror("type mismatch");

                
                if((yyvsp[-2].symval)->S_type == type::INT_TYPE)
                        (yyval.symval) = intConst((yyvsp[-2].symval)->S_data.int_data / (yyvsp[0].symval)->S_data.int_data);
                else if((yyvsp[-2].symval)->S_type == type::REAL_TYPE)
                        (yyval.symval) = realConst((yyvsp[-2].symval)->S_data.real_data / (yyvsp[0].symval)->S_data.real_data);
                else
                        yyerror("operator error");
        }
#line 1927 "y.tab.cpp" /* yacc.c:1646  */
    break;

  case 63:
#line 397 "parser.y" /* yacc.c:1646  */
    {
                /* type check */
                if((yyvsp[-2].symval)->S_type != (yyvsp[0].symval)->S_type)
                        yyerror("type mismatch");

                
                if((yyvsp[-2].symval)->S_type == type::INT_TYPE)
                        (yyval.symval) = intConst((yyvsp[-2].symval)->S_data.int_data % (yyvsp[0].symval)->S_data.int_data);
                else
                        yyerror("operator error");
        }
#line 1943 "y.tab.cpp" /* yacc.c:1646  */
    break;

  case 64:
#line 409 "parser.y" /* yacc.c:1646  */
    {
                if((yyvsp[0].symval)->S_type == type::INT_TYPE)
                        (yyval.symval) = intConst(-(yyvsp[0].symval)->S_data.int_data);
                else if((yyvsp[0].symval)->S_type == type::REAL_TYPE)
                        (yyval.symval) = realConst(-(yyvsp[0].symval)->S_data.real_data);
                else
                        yyerror("operator error");
        }
#line 1956 "y.tab.cpp" /* yacc.c:1646  */
    break;

  case 65:
#line 418 "parser.y" /* yacc.c:1646  */
    {
                /* type check */
                if((yyvsp[-2].symval)->S_type != (yyvsp[0].symval)->S_type)
                        yyerror("type mismatch");

                
                if((yyvsp[-2].symval)->S_type == type::BOOL_TYPE)
                        (yyval.symval) = boolConst((yyvsp[-2].symval)->S_data.bool_data && (yyvsp[0].symval)->S_data.bool_data);
                else
                        yyerror("operator error");
        }
#line 1972 "y.tab.cpp" /* yacc.c:1646  */
    break;

  case 66:
#line 430 "parser.y" /* yacc.c:1646  */
    {
                /* type check */
                if((yyvsp[-2].symval)->S_type != (yyvsp[0].symval)->S_type)
                        yyerror("type mismatch");

                
                if((yyvsp[-2].symval)->S_type == type::BOOL_TYPE)
                        (yyval.symval) = boolConst((yyvsp[-2].symval)->S_data.bool_data || (yyvsp[0].symval)->S_data.bool_data);
                else
                        yyerror("operator error");
        }
#line 1988 "y.tab.cpp" /* yacc.c:1646  */
    break;

  case 67:
#line 442 "parser.y" /* yacc.c:1646  */
    {
                
                if((yyvsp[0].symval)->S_type == type::BOOL_TYPE)
                        (yyval.symval) = (yyvsp[0].symval);
                else
                        yyerror("operator error");
        }
#line 2000 "y.tab.cpp" /* yacc.c:1646  */
    break;

  case 68:
#line 450 "parser.y" /* yacc.c:1646  */
    {
                /* type check */
                if((yyvsp[-2].symval)->S_type != (yyvsp[0].symval)->S_type)
                        yyerror("type mismatch");

                
                if((yyvsp[-2].symval)->S_type == type::INT_TYPE)
                        (yyval.symval) = boolConst((yyvsp[-2].symval)->S_data.int_data < (yyvsp[0].symval)->S_data.int_data);
                else if((yyvsp[-2].symval)->S_type == type::REAL_TYPE)
                        (yyval.symval) = boolConst((yyvsp[-2].symval)->S_data.real_data < (yyvsp[0].symval)->S_data.real_data);
                else
                        yyerror("operator error");
        }
#line 2018 "y.tab.cpp" /* yacc.c:1646  */
    break;

  case 69:
#line 464 "parser.y" /* yacc.c:1646  */
    {
                /* type check */
                if((yyvsp[-2].symval)->S_type != (yyvsp[0].symval)->S_type)
                        yyerror("type mismatch");

                
                if((yyvsp[-2].symval)->S_type == type::INT_TYPE)
                        (yyval.symval) = boolConst((yyvsp[-2].symval)->S_data.int_data <= (yyvsp[0].symval)->S_data.int_data);
                else if((yyvsp[-2].symval)->S_type == type::REAL_TYPE)
                        (yyval.symval) = boolConst((yyvsp[-2].symval)->S_data.real_data <= (yyvsp[0].symval)->S_data.real_data);
                else
                        yyerror("operator error");
        }
#line 2036 "y.tab.cpp" /* yacc.c:1646  */
    break;

  case 70:
#line 478 "parser.y" /* yacc.c:1646  */
    {
                /* type check */
                if((yyvsp[-2].symval)->S_type != (yyvsp[0].symval)->S_type)
                        yyerror("type mismatch");

                if((yyvsp[-2].symval)->S_type == type::INT_TYPE)
                        (yyval.symval) = boolConst((yyvsp[-2].symval)->S_data.int_data == (yyvsp[0].symval)->S_data.int_data);
                else if((yyvsp[-2].symval)->S_type == type::REAL_TYPE)
                        (yyval.symval) = boolConst((yyvsp[-2].symval)->S_data.real_data == (yyvsp[0].symval)->S_data.real_data);
                else if((yyvsp[-2].symval)->S_type == type::BOOL_TYPE)
                        (yyval.symval) = boolConst((yyvsp[-2].symval)->S_data.bool_data == (yyvsp[0].symval)->S_data.bool_data);
                else
                        yyerror("operator error");
        }
#line 2055 "y.tab.cpp" /* yacc.c:1646  */
    break;

  case 71:
#line 493 "parser.y" /* yacc.c:1646  */
    {
                /* type check */
                if((yyvsp[-2].symval)->S_type != (yyvsp[0].symval)->S_type)
                        yyerror("type mismatch");

                if((yyvsp[-2].symval)->S_type == type::INT_TYPE)
                        (yyval.symval) = boolConst((yyvsp[-2].symval)->S_data.int_data >= (yyvsp[0].symval)->S_data.int_data);
                else if((yyvsp[-2].symval)->S_type == type::REAL_TYPE)
                        (yyval.symval) = boolConst((yyvsp[-2].symval)->S_data.real_data >= (yyvsp[0].symval)->S_data.real_data);
                else
                        yyerror("operator error");
        }
#line 2072 "y.tab.cpp" /* yacc.c:1646  */
    break;

  case 72:
#line 506 "parser.y" /* yacc.c:1646  */
    {
                /* type check */
                if((yyvsp[-2].symval)->S_type != (yyvsp[0].symval)->S_type)
                        yyerror("type mismatch");

                if((yyvsp[-2].symval)->S_type == type::INT_TYPE)
                        (yyval.symval) = boolConst((yyvsp[-2].symval)->S_data.int_data > (yyvsp[0].symval)->S_data.int_data);
                else if((yyvsp[-2].symval)->S_type == type::REAL_TYPE)
                        (yyval.symval) = boolConst((yyvsp[-2].symval)->S_data.real_data > (yyvsp[0].symval)->S_data.real_data);
                else
                        yyerror("operator error");
        }
#line 2089 "y.tab.cpp" /* yacc.c:1646  */
    break;

  case 73:
#line 519 "parser.y" /* yacc.c:1646  */
    {
                /* type check */
                if((yyvsp[-2].symval)->S_type != (yyvsp[0].symval)->S_type)
                        yyerror("type mismatch");

                if((yyvsp[-2].symval)->S_type == type::INT_TYPE)
                        (yyval.symval) = boolConst((yyvsp[-2].symval)->S_data.int_data != (yyvsp[0].symval)->S_data.int_data);
                else if((yyvsp[-2].symval)->S_type == type::REAL_TYPE)
                        (yyval.symval) = boolConst((yyvsp[-2].symval)->S_data.real_data != (yyvsp[0].symval)->S_data.real_data);
                else if((yyvsp[-2].symval)->S_type == type::BOOL_TYPE)
                        (yyval.symval) = boolConst((yyvsp[-2].symval)->S_data.bool_data != (yyvsp[0].symval)->S_data.bool_data);
                else
                        yyerror("operator error");
        }
#line 2108 "y.tab.cpp" /* yacc.c:1646  */
    break;

  case 74:
#line 534 "parser.y" /* yacc.c:1646  */
    {
                (yyval.symval) = (yyvsp[-1].symval);
        }
#line 2116 "y.tab.cpp" /* yacc.c:1646  */
    break;

  case 75:
#line 538 "parser.y" /* yacc.c:1646  */
    {
                /* check if the identifier is in the symbol table */
                if(symtab.global_lookup(*((yyvsp[0].sval))) == NULL)
                        yyerror("Not defined error");
                
                if(symtab.global_lookup(*((yyvsp[0].sval)))->S_flag == flag::FUNC)
                        yyerror("Not a variable error");
                        
                (yyval.symval) = symtab.global_lookup(*((yyvsp[0].sval)));
        }
#line 2131 "y.tab.cpp" /* yacc.c:1646  */
    break;

  case 79:
#line 553 "parser.y" /* yacc.c:1646  */
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
                }
                       
        }
#line 2151 "y.tab.cpp" /* yacc.c:1646  */
    break;

  case 80:
#line 571 "parser.y" /* yacc.c:1646  */
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
#line 2167 "y.tab.cpp" /* yacc.c:1646  */
    break;

  case 85:
#line 590 "parser.y" /* yacc.c:1646  */
    {
                param_num++;
        }
#line 2175 "y.tab.cpp" /* yacc.c:1646  */
    break;

  case 86:
#line 596 "parser.y" /* yacc.c:1646  */
    {
                if((yyvsp[0].symval)->S_type != type::BOOL_TYPE)
                        yyerror("Condition must be a boolean");
        }
#line 2184 "y.tab.cpp" /* yacc.c:1646  */
    break;

  case 89:
#line 605 "parser.y" /* yacc.c:1646  */
    {
                symtab.push();
        }
#line 2192 "y.tab.cpp" /* yacc.c:1646  */
    break;

  case 90:
#line 609 "parser.y" /* yacc.c:1646  */
    {
                cout<<"<-----------------------local variable------------------->"<<endl;
                symtab.tables.back().dump();
                cout<<"<-----------------------local variable end--------------->"<<endl;
                symtab.pop();
        }
#line 2203 "y.tab.cpp" /* yacc.c:1646  */
    break;

  case 91:
#line 616 "parser.y" /* yacc.c:1646  */
    {
                symtab.push();
        }
#line 2211 "y.tab.cpp" /* yacc.c:1646  */
    break;

  case 92:
#line 620 "parser.y" /* yacc.c:1646  */
    {
                /* check if the identifier is already in the symbol table */
                if(symtab.lookup(*((yyvsp[0].sval))) != NULL)
                        yyerror("variable redefine");
                
                Symbol s;
                s.init = false;
                s.S_type = type::INT_TYPE;
                s.S_flag = flag::VARIABLE;
                symtab.insert(*((yyvsp[0].sval)), s);
        }
#line 2227 "y.tab.cpp" /* yacc.c:1646  */
    break;

  case 93:
#line 632 "parser.y" /* yacc.c:1646  */
    {
                if((yyvsp[-3].symval)->S_flag != flag::CONSTANT || (yyvsp[0].symval)->S_flag != flag::CONSTANT)
                        yyerror("Index must be a variable");

                if((yyvsp[-3].symval)->S_type != type::INT_TYPE || (yyvsp[0].symval)->S_type != type::INT_TYPE)
                        yyerror("Index must be an integer");
        }
#line 2239 "y.tab.cpp" /* yacc.c:1646  */
    break;

  case 94:
#line 640 "parser.y" /* yacc.c:1646  */
    {
                cout<<"<-----------------------local variable------------------->"<<endl;
                symtab.tables.back().dump();
                cout<<"<-----------------------local variable end--------------->"<<endl;
                symtab.pop();
        }
#line 2250 "y.tab.cpp" /* yacc.c:1646  */
    break;


#line 2254 "y.tab.cpp" /* yacc.c:1646  */
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
#line 651 "parser.y" /* yacc.c:1906  */



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

    /* perform parsing */
    if (yyparse() == 1)                 /* parsing */
        yyerror("Parsing error !");     /* syntax error */

        printf("Global SymbolTable:\n");
        symtab.dump();
}
