%option noyywrap nodefault yylineno
%{ 
#include <string.h>
#include "cminus.tab.h"

void yyerror(char *s, ...);
%}

%%
"//".*	{ /* ignore comment  */ }

[0-9]+  { return NUM; }

"else"   { return ELSE; }
"if"     { return IF; }
"int"    { return INT; }
"return" { return RETURN; }
"void"   { return VOID; }
"while"  { return WHILE; }
"const"  { return CONST; }
"enum"  { return ENUM; }



[A-Za-z][A-Za-z0-9]* { return ID; }
"!="	{ return NEQ; }
"==" 	{ return EQ; }
"<="	{ return LTEQ; }
">=" 	{ return GTEQ; }
"<"		{ return LT; }
">"		{ return GT; }
"&&"     { return AND; }
"||"     { return OR; }
"++"     { return INC; }
"--"     { return DEC; }
"!"     { return yytext[0]; }
"="     { return yytext[0]; }
","     { return yytext[0]; }
";" 	{ return yytext[0]; }
"(" 	{ return yytext[0]; }
")" 	{ return yytext[0]; }
"{" 	{ return yytext[0]; }
"}" 	{ return yytext[0]; }
"["     { return yytext[0]; }
"]"     { return yytext[0]; }
"+" 	{ return yytext[0]; }
"-" 	{ return yytext[0]; }
"*"     { return yytext[0]; }
"/"     { return yytext[0]; }
[ \t]   { /* ignore white space */ }
"\n"    { /* ignore white space */ }
. 		{ yyerror("lexical error, character %c", yytext[0]); }
%%
