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

%type <symval> constant_exp expression function_procedure array_reference number
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
                if(symtab.global_lookup(*($2)) != NULL)
                        yyerror("array redefine");

                if($5->S_type != type::INT_TYPE || $8->S_type != type::INT_TYPE)
                        yyerror("array index must be integer");

                Symbol s;
                s.init = true;
                s.S_flag = flag::ARRAY_FLAG;
                s.S_type = $10;
                symtab.insert(*($2), s);
        }
        ;
number:    INT_NUM
        {
                $$ = intConst($1);
        }
        |   IDENTIFIER
        {
                /* check if the identifier is already in the symbol table */
                if(symtab.global_lookup(*($1)) == NULL)
                        yyerror("identifier not found");
                
                Symbol *s = symtab.global_lookup(*($1));
                if (s->S_flag != flag::CONSTANT)
                        yyerror("identifier is not a constant");
                
                $$ = s;
        }
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
        {
                /* check if the identifier is in the symbol table */
                if(symtab.global_lookup(*($1)) == NULL)
                        yyerror("variable not defined");
                
                /* check if the identifier is a variable */
                if(symtab.global_lookup(*($1))->S_flag != flag::VARIABLE)
                        yyerror("not a variable");
                
                /* check if the type of the identifier is the same as the type of the expression */
                if (symtab.global_lookup(*($1))->S_type != $3->S_type)
                        yyerror("type mismatch");
                
                Symbol *s = symtab.global_lookup(*($1));
                s->init = true;
                s->S_data = $3->S_data;
        }
        |   PUT expression
        |   GET IDENTIFIER
        |   RESULT expression
        |   RETURN
        |   EXIT when
        |   SKIP
        |   expression
        ;
when:    WHEN expression
        {
                /* type check */
                if($2->S_type != type::BOOL_TYPE)
                        yyerror("type mismatch");
        }
        |
        ;

expression:    expression '+' expression
        {
                /* type check */
                if($1->S_type != $3->S_type)
                        yyerror("type mismatch");

                
                if($1->S_type == type::INT_TYPE)
                        $$ = intConst($1->S_data.int_data + $3->S_data.int_data);
                else if($1->S_type == type::REAL_TYPE)
                        $$ = realConst($1->S_data.real_data + $3->S_data.real_data);
                else
                        yyerror("operator error");
        }
        |   expression '-' expression
        {
                /* type check */
                if($1->S_type != $3->S_type)
                        yyerror("type mismatch");

                
                if($1->S_type == type::INT_TYPE)
                        $$ = intConst($1->S_data.int_data - $3->S_data.int_data);
                else if($1->S_type == type::REAL_TYPE)
                        $$ = realConst($1->S_data.real_data - $3->S_data.real_data);
                else
                        yyerror("operator error");
        }
        |   expression '*' expression
        {
                /* type check */
                if($1->S_type != $3->S_type)
                        yyerror("type mismatch");

                
                if($1->S_type == type::INT_TYPE)
                        $$ = intConst($1->S_data.int_data * $3->S_data.int_data);
                else if($1->S_type == type::REAL_TYPE)
                        $$ = realConst($1->S_data.real_data * $3->S_data.real_data);
                else
                        yyerror("operator error");
        }
        |   expression '/' expression
        {
                /* type check */
                if($1->S_type != $3->S_type)
                        yyerror("type mismatch");

                
                if($1->S_type == type::INT_TYPE)
                        $$ = intConst($1->S_data.int_data / $3->S_data.int_data);
                else if($1->S_type == type::REAL_TYPE)
                        $$ = realConst($1->S_data.real_data / $3->S_data.real_data);
                else
                        yyerror("operator error");
        }
        |   expression MOD expression
        {
                /* type check */
                if($1->S_type != $3->S_type)
                        yyerror("type mismatch");

                
                if($1->S_type == type::INT_TYPE)
                        $$ = intConst($1->S_data.int_data % $3->S_data.int_data);
                else
                        yyerror("operator error");
        }
        |   '-' expression    %prec UMINUS
        {
                if($2->S_type == type::INT_TYPE)
                        $$ = intConst(-$2->S_data.int_data);
                else if($2->S_type == type::REAL_TYPE)
                        $$ = realConst(-$2->S_data.real_data);
                else
                        yyerror("operator error");
        }
        |   expression AND expression
        {
                /* type check */
                if($1->S_type != $3->S_type)
                        yyerror("type mismatch");

                
                if($1->S_type == type::BOOL_TYPE)
                        $$ = boolConst($1->S_data.bool_data && $3->S_data.bool_data);
                else
                        yyerror("operator error");
        }
        |   expression OR expression
        {
                /* type check */
                if($1->S_type != $3->S_type)
                        yyerror("type mismatch");

                
                if($1->S_type == type::BOOL_TYPE)
                        $$ = boolConst($1->S_data.bool_data || $3->S_data.bool_data);
                else
                        yyerror("operator error");
        }
        |   expression NOT expression
        {
                /* type check */
                if($1->S_type != $3->S_type)
                        yyerror("type mismatch");

                
                if($1->S_type == type::BOOL_TYPE)
                        $$ = boolConst(!($3->S_data.bool_data));
                else
                        yyerror("operator error");
        }
        |   expression '<' expression
        {
                /* type check */
                if($1->S_type != $3->S_type)
                        yyerror("type mismatch");

                
                if($1->S_type == type::INT_TYPE)
                        $$ = boolConst($1->S_data.int_data < $3->S_data.int_data);
                else if($1->S_type == type::REAL_TYPE)
                        $$ = boolConst($1->S_data.real_data < $3->S_data.real_data);
                else
                        yyerror("operator error");
        }
        |   expression LE  expression
        {
                /* type check */
                if($1->S_type != $3->S_type)
                        yyerror("type mismatch");

                
                if($1->S_type == type::INT_TYPE)
                        $$ = boolConst($1->S_data.int_data <= $3->S_data.int_data);
                else if($1->S_type == type::REAL_TYPE)
                        $$ = boolConst($1->S_data.real_data <= $3->S_data.real_data);
                else
                        yyerror("operator error");
        }
        |   expression '=' expression
        {
                /* type check */
                if($1->S_type != $3->S_type)
                        yyerror("type mismatch");

                if($1->S_type == type::INT_TYPE)
                        $$ = boolConst($1->S_data.int_data == $3->S_data.int_data);
                else if($1->S_type == type::REAL_TYPE)
                        $$ = boolConst($1->S_data.real_data == $3->S_data.real_data);
                else if($1->S_type == type::BOOL_TYPE)
                        $$ = boolConst($1->S_data.bool_data == $3->S_data.bool_data);
                else
                        yyerror("operator error");
        }
        |   expression GE expression
        {
                /* type check */
                if($1->S_type != $3->S_type)
                        yyerror("type mismatch");

                if($1->S_type == type::INT_TYPE)
                        $$ = boolConst($1->S_data.int_data >= $3->S_data.int_data);
                else if($1->S_type == type::REAL_TYPE)
                        $$ = boolConst($1->S_data.real_data >= $3->S_data.real_data);
                else
                        yyerror("operator error");
        }
        |   expression '>' expression
        {
                /* type check */
                if($1->S_type != $3->S_type)
                        yyerror("type mismatch");

                if($1->S_type == type::INT_TYPE)
                        $$ = boolConst($1->S_data.int_data > $3->S_data.int_data);
                else if($1->S_type == type::REAL_TYPE)
                        $$ = boolConst($1->S_data.real_data > $3->S_data.real_data);
                else
                        yyerror("operator error");
        }
        |   expression NOT_EQU expression
        {
                /* type check */
                if($1->S_type != $3->S_type)
                        yyerror("type mismatch");

                if($1->S_type == type::INT_TYPE)
                        $$ = boolConst($1->S_data.int_data != $3->S_data.int_data);
                else if($1->S_type == type::REAL_TYPE)
                        $$ = boolConst($1->S_data.real_data != $3->S_data.real_data);
                else if($1->S_type == type::BOOL_TYPE)
                        $$ = boolConst($1->S_data.bool_data != $3->S_data.bool_data);
                else
                        yyerror("operator error");
        }
        |   '(' expression ')'
        {
                $$ = $2;
        }
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
                else if($3->S_type != type::INT_TYPE)
                        yyerror("Array index must be an integer");
                else                        
                        $$ = symtab.global_lookup(*($1));
        }
        ;
arguments:  arguments ',' expression
        |   expression
        ;

condition:  IF expression
        {
                if($2->S_type != type::BOOL_TYPE)
                        yyerror("Condition must be a boolean");
        } 
        THEN function_bodys ELSE function_bodys END IF
        |   IF expression
        {
                if($2->S_type != type::BOOL_TYPE)
                        yyerror("Condition must be a boolean");
        } 
        THEN function_bodys END IF
        ;
loop:   LOOP function_bodys END LOOP
        |   FOR decreasing IDENTIFIER ':' number '.' '.' number function_bodys END FOR
        {
                if($5->S_type != type::INT_TYPE || $8->S_type != type::INT_TYPE)
                        yyerror("Index must be an integer");
        }
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