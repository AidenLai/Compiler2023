%{
#include "symboltable.hpp"
#include "lex.yy.cpp"
#define Trace(t)        printf(t)
void yyerror(string s);
%}

/* tokens */
%token ARRAY BEGIN_ BOOL CHAR CONST DECREASING DEFAULT DO ELSE END EXIT FALSE FOR FUNCTION GET IF INT LOOP OF PUT PROCEDURE REAL RESULT RETURN SKIP STRING THEN TRUE VAR WHEN
%token IDENTIFIER NUMBER STRING_CONSTANTS
%token ASSIGN AND OR NOT NOT_EQU LE GE MOD



/* precedence */
%left OR
%left AND
%left NOT
%left '<' LE '=' GE '>' NOT_EQU
%left '+' '-'
%left '*' '/' MOD
%nonassoc UMINUS

%%
program:    declarations statements
        ;
statements:     statements statement
        |
        ;
statement:  block
        |   simple
        |   condition
        |   loop
        ;
declarations:   declarations declaration_function
        |
        ;
declaration_function:   declaration
        |   function
        |   procedure
        ;
declaration:    constants
        |   variable
        |   array
        ;
constants:  CONST IDENTIFIER constant_type ASSIGN constant_exp
        ;
constant_type:  type
        |
        ;
type:       ':' INT
        |   ':' REAL
        |   ':' BOOL
        |   ':' CHAR
        |   ':' STRING
        ;
constant_exp:   NUMBER
        |   STRING_CONSTANTS
        |   TRUE
        |   FALSE
        ;
variable:   VAR IDENTIFIER type ASSIGN constant_exp
        |   VAR IDENTIFIER type
        |   VAR IDENTIFIER ASSIGN constant_exp
        ;
array:  ARRAY IDENTIFIER ':' ARRAY NUMBER '.' '.' NUMBER OF type
        ;
function:  FUNCTION IDENTIFIER parameters_block type function_bodys END IDENTIFIER
        ;
procedure:  PROCEDURE IDENTIFIER parameters_block function_bodys END IDENTIFIER
        ;
function_bodys:  function_bodys function_body
        |
        ;
function_body:  declaration
        |   statement
        ;
parameters_block:   '(' parameters ')'
        |
        ;
parameters:     parameters ',' parameter
        |   parameter
        ;
parameter:  IDENTIFIER type
        ;

block:      BEGIN_ function_bodys END
        ;
simple:     IDENTIFIER ASSIGN expression
        |   PUT expression
        |   GET IDENTIFIER
        |   RESULT expression
        |   RETURN
        |   EXIT when
        |   SKIP
        |   expression
        ;
when:    WHEN expression
        |
        ;

expression:    expression '+' expression
        |   expression '-' expression
        |   expression '*' expression
        |   expression '/' expression
        |   expression MOD expression
        |   '-' expression    %prec UMINUS
        |   expression AND expression
        |   expression OR expression
        |   expression NOT expression
        |   expression '<' expression
        |   expression LE  expression
        |   expression '=' expression
        |   expression GE expression
        |   expression '>' expression
        |   expression NOT_EQU expression
        |   '(' expression ')'
        |   IDENTIFIER
        |   constant_exp
        |   function_procedure
        |   array_reference
        ;
function_procedure:     IDENTIFIER '(' arguments ')'
        ;

array_reference:    IDENTIFIER '[' expression ']'
        ;
arguments:  arguments ',' expression
        |   expression
        ;

condition:  IF expression THEN function_bodys ELSE function_bodys END IF
        |   IF expression THEN function_bodys END IF
        ;
loop:   LOOP function_bodys END LOOP
        |   FOR decreasing IDENTIFIER ':' num '.' '.' num function_bodys END FOR
        ;
num:    NUMBER
        |   IDENTIFIER
        ;
decreasing:     DECREASING
        |
        ;
%%


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
}