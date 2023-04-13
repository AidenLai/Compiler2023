%{
#define LIST     strcat(buf,yytext)
#define token(t) {LIST; printf("<%s>\n",#t);}
#define tokenNumber(t,i) {LIST; printf("<%s:%f>\n",#t,i);}
#define tokenString(t,s) {LIST; printf("<%s:%s>\n",#t,s);}

#define MAX_LINE_LENG 256

int linenum = 1;
char buf[MAX_LINE_LENG];
%}

/* definitions */
dig [0-9]
digs {dig}+
alphabet [a-zA-Z]
letter {alphabet}+
integer {digs}
real {digs}"."{digs}
numerical_constants {integer}|{real}
string_constants (\"(\"\"|[^"\n])*\")
identifier {letter}({letter}|{dig})*

%x COMMENT

%%

    /* delimiters */
"."                    {token('.');}
","                    {token(',');}
":"                    {token(':');}
";"                    {token(';');}
"("                    {token('(');}
")"                    {token(')');}
"["                    {token('[');}
"]"                    {token(']');}
"{"                    {token('{');}
"}"                    {token('}');}

    /* operators */
"+"                    {token('+');}
"-"                    {token('-');}
"*"                    {token('*');}
"/"                    {token('/');}
"mod"                  {token('MOD');}
":="                   {token(':=');}
"<"                    {token('<');}
"<="                   {token('<=');}
">="                   {token('>=');}
">"                    {token('>');}
"="                    {token('=');}
"not="                 {token('NOT=');}
"and"                  {token('AND');}
"or"                   {token('OR');}
"not"                  {token('NOT');}

    /* keywords */
array                  {token('ARRAY');}
begin                  {token('BEGIN');}
bool                   {token('BOOL');}
char                   {token('CHAR');}
const                  {token('CONST');}
decreasing             {token('DECREASING');}
default                {token('DEFAULT');}
do                     {token('DO');}
else                   {token('ELSE');}
end                    {token('END');}
exit                   {token('EXIT');}
false                  {token('FALSE');}
for                    {token('FOR');}
function               {token('FUNCTION');}
get                    {token('GET');}
if                     {token('IF');}
int                    {token('INT');}
loop                   {token('LOOP');}
of                     {token('OF');}
put                    {token('PUT');}
procedure              {token('PROCEDURE');}
real                   {token('REAL');}
result                 {token('RESULT');}
return                 {token('RETURN');}
skip                   {token('SKIP');}
string                 {token('STRING');}
true                   {token('TRUE');}
var                    {token('VAR');}
when                   {token('WHEN');}

    /* identifiers */
{identifier}           {tokenString('IDENTIFIER', yytext);}
{numerical_constants}  {tokenNumber('NUMBER', atof(yytext));}
{string_constants}     {
                        char s[MAX_LINE_LENG] = {0};
                        int idx = 0;
                        for (int i = 1; i < yyleng - 1; ++i) {
                            if (yytext[i] == '"') ++i;
                            s[idx++] = yytext[i];
                        }
                        tokenString(STRING, s);
                       }

    /* comments */
"{%"                  {LIST; BEGIN(COMMENT);}
<COMMENT>"%}"         {LIST; BEGIN(INITIAL);}

<COMMENT>\n           {
                        LIST;
                        printf("%d: %s", linenum++, buf);
                        buf[0] = '\0';
                      }
<COMMENT>.            {LIST;}
"%".*                 {LIST;}

\n      {
        LIST;
        printf("%d: %s", linenum++, buf);
        buf[0] = '\0';
        }


[ \t]*  {LIST;}

<<eof>> {
        LIST;
        printf("%d: %s", linenum++, buf);
        buf[0] = '\0';
        yyterminate();
        }

.       {
        LIST;
        printf("%d:%s\n", linenum+1, buf);
        printf("bad character:'%s'\n",yytext);
        exit(-1);
        }
%%

int main(int argc, char* argv[])
{
	if(argc > 1)
	{
		FILE *source = fopen(argv[1], "r");
		if(source)
			yyin = source;
	}
	
	return yylex();;
}