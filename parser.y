%{
#include "symboltable.hpp"
#include "lex.yy.cpp"
#define Trace(t)        printf(t)
void yyerror(string s);
symboltables symtab;
%}

/* tokens */
%token ARRAY BEGIN_ BOOL CHAR CONST DECREASING DEFAULT DO ELSE END EXIT FALSE FOR FUNCTION GET IF INT LOOP OF PUT PROCEDURE REAL RESULT RETURN SKIP STRING THEN TRUE VAR WHEN
 
%token ASSIGN AND OR NOT NOT_EQU LE GE MOD

%union {
  int ival;
  float fval;
  string *sval;
  type var_type;
  Symbol *symval;
}

%token <sval> IDENTIFIER
%token <ival> INT_NUM
%token <fval> REAL_NUM
%token <sval> STRING_CONSTANTS

%type <symval> constant_exp expression function_procedure array_reference
%type <var_type> type

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
constants:  CONST IDENTIFIER type ASSIGN constant_exp
        {
                /* check if the identifier is already in the symbol table */
                if(symtab.lookup(*($2)) != NULL)
                        yyerror("const redefine");
                
                /* check if the type of the identifier is the same as the type of the constant */
                if ($3 != $5->S_type)
                        printf("Warning: type mismatch\n");

                $5->init = true;
                /* insert the identifier into the symbol table */
                symtab.insert(*($2), *$5);
                
        }
        |   CONST IDENTIFIER ASSIGN constant_exp
        {
                /* check if the identifier is already in the symbol table */
                if(symtab.lookup(*($2)) != NULL)
                        printf("ERROR");
                
                $4->init = true;
                /* insert the identifier into the symbol table */
                symtab.insert(*($2), *$4);
        }
        ;
type:       ':' INT
        {
                $$ = type::INT_TYPE;
        }
        |   ':' REAL
        {
                $$ = type::REAL_TYPE;
        }
        |   ':' BOOL
        {
                $$ = type::BOOL_TYPE;
        }
        |   ':' STRING
        {
                $$ = type::STRING_TYPE;
        }
        ;
constant_exp:   INT_NUM
        {
                $$ = intConst($1);
        }
        |   REAL_NUM
        {
                $$ = realConst($1);
        }       
        |   STRING_CONSTANTS
        {
                $$ = stringConst($1);
        }
        |   TRUE
        {
                $$ = boolConst(true);
        }
        |   FALSE
        {
                $$ = boolConst(false);
        }
        ;
variable:   VAR IDENTIFIER type ASSIGN constant_exp
        {
                /* check if the identifier is already in the symbol table */
                if(symtab.lookup(*($2)) != NULL)
                        yyerror("variable redefine");
                
                /* check if the type of the identifier is the same as the type of the constant */
                if ($3 != $5->S_type)
                        printf("Warning: type mismatch\n");

                $5->init = true;
                $5->S_flag = flag::VARIABLE;
                /* insert the identifier into the symbol table */
                symtab.insert(*($2), *$5);
        }
        |   VAR IDENTIFIER type
        {
                /* check if the identifier is already in the symbol table */
                if(symtab.lookup(*($2)) != NULL)
                        yyerror("variable redefine");
                
                Symbol s;
                s.init = false;
                s.S_type = $3;
                s.S_flag = flag::VARIABLE;
                symtab.insert(*($2), s);
        }
        |   VAR IDENTIFIER ASSIGN constant_exp
        {
                /* check if the identifier is already in the symbol table */
                if(symtab.lookup(*($2)) != NULL)
                        yyerror("variable redefine");
                
                $4->init = true;
                $4->S_flag = flag::VARIABLE;
                /* insert the identifier into the symbol table */
                symtab.insert(*($2), *$4);
        }
        ;
array:  ARRAY IDENTIFIER ':' ARRAY number '.' '.' number OF type
        {
                /* check if the identifier is already in the symbol table */
                if(symtab.lookup(*($2)) != NULL)
                        yyerror("array redefine");

                Symbol s;
                s.init = true;
                s.S_flag = flag::ARRAY_FLAG;
                s.S_type = $10;
                symtab.insert(*($2), s);
        }
        ;
number:    INT_NUM
        |   IDENTIFIER
        ;
function:  FUNCTION IDENTIFIER 
        {
                /* check if the identifier is already in the symbol table */
                if(symtab.lookup(*($2)) != NULL)
                        yyerror("function redefine");
                
                Symbol s;
                s.init = true;
                s.S_flag = flag::FUNC;
                symtab.insert(*($2), s);
                symtab.push();
        }
        parameters_block type function_bodys END IDENTIFIER
        {
                symtab.tables.back().dump();
                symtab.pop();
                symtab.tables.back().table.back().S_type = $5;
                if (*$2 != *$8)
                        yyerror("function declaration error");
        }
        ;
procedure:  PROCEDURE IDENTIFIER
        {
                /* check if the identifier is already in the symbol table */
                if(symtab.lookup(*($2)) != NULL)
                        yyerror("procedure redefine");
                
                Symbol s;
                s.init = true;
                s.S_flag = flag::FUNC;
                s.S_type = type::NONE;
                symtab.insert(*($2), s);
                symtab.push();
        }
        parameters_block function_bodys END IDENTIFIER
        {
                symtab.tables.back().dump();
                symtab.pop();
                if (*$2 != *$7)
                        yyerror("function declaration error");
        }
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
        {
                /* check if the identifier is already in the symbol table */
                if(symtab.lookup(*($1)) != NULL)
                        yyerror("variable redefine");
                
                Symbol s;
                s.init = true;
                s.S_type = $2;
                s.S_flag = flag::VARIABLE;
                symtab.insert(*($1), s);
        }
        ;

block:      BEGIN_
        {
                symtab.push();
        }
        function_bodys END
        {
                symtab.tables.back().dump();
                symtab.pop();
        }
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
        {
                /* check if the identifier is in the symbol table */
                if(symtab.global_lookup(*($1)) == NULL)
                        yyerror("Not defined error");
                else
                        $$ = symtab.global_lookup(*($1));
        }
        |   constant_exp
        |   function_procedure
        |   array_reference
        ;
function_procedure:     IDENTIFIER '(' arguments ')'
        {
                /* check if the identifier is in the symbol table */
                if(symtab.global_lookup(*($1)) == NULL)
                        yyerror("Not defined error");
                else if (symtab.global_lookup(*($1))->S_flag != flag::FUNC)
                        yyerror("Not a function error");
                else
                        $$ = symtab.global_lookup(*($1));
        }
        ;

array_reference:    IDENTIFIER '[' expression ']'
        {
                /* check if the identifier is in the symbol table */
                if(symtab.global_lookup(*($1)) == NULL)
                        yyerror("Not defined error");
                else if (symtab.global_lookup(*($1))->S_flag != flag::ARRAY_FLAG)
                        yyerror("Not an array error");
                else
                        $$ = symtab.global_lookup(*($1));
        }
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
num:    INT_NUM
        | REAL_NUM
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

        printf("SymbolTable:\n");
        symtab.dump();
}