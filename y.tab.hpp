/* A Bison parser, made by GNU Bison 3.0.4.  */

/* Bison interface for Yacc-like parsers in C

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
    IDENTIFIER = 288,
    NUMBER = 289,
    STRING_CONSTANTS = 290,
    ASSIGN = 291,
    AND = 292,
    OR = 293,
    NOT = 294,
    NOT_EQU = 295,
    LE = 296,
    GE = 297,
    MOD = 298,
    UMINUS = 299
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
#define IDENTIFIER 288
#define NUMBER 289
#define STRING_CONSTANTS 290
#define ASSIGN 291
#define AND 292
#define OR 293
#define NOT 294
#define NOT_EQU 295
#define LE 296
#define GE 297
#define MOD 298
#define UMINUS 299

/* Value type.  */
#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
typedef int YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE yylval;

int yyparse (void);

#endif /* !YY_YY_Y_TAB_HPP_INCLUDED  */
