%{
/* includes, C defs */

#include <stdio.h>
#include <stdlib.h>
#include "tp2.h"
#include "ast.h"

int yylex();
%}


/* declare tokens */
%token NUM
%token ID
%token ELSE 
%token IF 
%token INT 
%token RETURN 
%token VOID 
%token WHILE
%token EQ
%token NEQ
%token LT
%token GT
%token LTEQ
%token GTEQ
%token ERROR
%token CONST
%token ENUM
%token AND
%token OR
%token INC
%token DEC

%nonassoc EQ
%nonassoc NEQ
%nonassoc LT
%nonassoc GT
%nonassoc LTEQ
%nonassoc GTEQ

%type <decl> declaration-list declaration var-declaration fun-declaration const-declaration enum-declaration local-declarations
%type <type> type-specifier
%type <param_list> params param-list param
%type <stmt> compound-stmt statement-list statement expression-stmt selection-stmt iteration-stmt return-stmt
%type <expr> expression var simple-expression relop logop unary_op  additive-expression term factor call args args-list unary-expression
%type <id> type_ID
%type <num> type_NUM;

%union {
  char *id;
  int num;
  struct expr *expr;
  struct param_list *param_list;
  struct type *type;
  struct stmt *stmt;
  struct decl *decl;
  struct id_list *id_list;
}

%start program 

%%

program: declaration-list {
  execute($1);
}
;

declaration-list: 
  declaration
| declaration-list declaration {
    $2->next = $1;
    $$ = $2;
  }
;

declaration:
  var-declaration 
| fun-declaration
| const-declaration  
| enum-declaration
;

var-declaration: 
  type-specifier type_ID ';' {
    $$ = decl_create($2, $1, 0, 0, 0);
  }
| type-specifier type_ID '[' type_NUM ']' ';' {
      $$ = decl_create(
        $2, type_create(TYPE_ARRAY, $1, 0), expr_create_integer($4), 0, 0
      );
    }
;

const-declaration: 
  INT CONST type_ID '=' type_NUM ';' {
    $$ = decl_create(
      $2, type_create(TYPE_INTEGER, 0, 0), expr_create_integer($5), 0, 0
    );
  }
;

enum-declaration:
  ENUM type_ID type_ID ';' {
    $$ = enum_decl_create(
      $3, type_create(TYPE_ENUM, $2, 0), 0
    );
  }
| ENUM type_ID '{' id-list '}' ';'
| ENUM type_ID '{' id-list '}' type_ID ';'
;

id-list:
  type_ID
| id-list ',' type_ID 
;

fun-declaration: 
  type-specifier type_ID '(' params ')' compound-stmt
;

type-specifier: 
  INT  
| VOID 
;

params:
  param-list
| VOID 
;

param-list:
  param-list ',' param 
| param
;

param: 
  type-specifier type_ID
| type-specifier type_ID '[' ']'
;

compound-stmt: 
  '{' local-declarations statement-list '}' 
;

local-declarations: 
  local-declarations var-declaration
| local-declarations const-declaration
| local-declarations enum-declaration
| /* empty */
;

statement-list:
  statement-list statement
| /* empty */
;

statement: 
  expression-stmt 
| compound-stmt 
| selection-stmt
| iteration-stmt 
| return-stmt 
;

expression-stmt: 
  expression ';'
| ';'           
;

selection-stmt: 
  IF '(' expression ')' statement
| IF '(' expression ')' statement ELSE statement 
;

iteration-stmt: 
  WHILE '(' expression ')' statement 
;

return-stmt: RETURN ';' 
| RETURN expression ';' 
;

expression: 
  var '=' expression
| simple-expression
;

var:  
  type_ID
| type_ID '[' expression ']'
;

simple-expression:
  additive-expression relop additive-expression 
| simple-expression logop additive-expression
| additive-expression
;

relop: LTEQ | LT | GT | GTEQ | EQ | NEQ
;

logop: AND | OR
;

additive-expression: 
  term
| additive-expression '+' term
| additive-expression '-' term
;

term: 
  factor
| term '*' factor
| term '/' factor
| unary-expression
;

unary-expression:
  unary_op factor
;

unary_op: '!' | DEC | INC
;

factor: 
  type_NUM
| '(' expression ')'
| var 
| call 
;

call: 
  type_ID '(' args ')'
;

args:
  args-list
| /* empty */ 
;

args-list:
  args-list ',' expression  
| expression 
;

type_NUM: NUM {
  $$ = yylval.num;
 }
;

type_ID: ID {
  $$ = yylval.id;
}
;



%%




