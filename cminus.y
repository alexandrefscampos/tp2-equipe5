%{
/* includes, C defs */

#include <stdio.h>
#include <stdlib.h>
#include "pretty_print.h"
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
  parser_result = $1;
}

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
      // $$ = decl_create(
      //   $2, type_create(TYPE_ARRAY, $1, 0), expr_create_integer($4), 0, 0
      // );
    }
;

const-declaration: 
  INT CONST type_ID '=' type_NUM ';' {
    // $$ = decl_create(
    //   $2, type_create(TYPE_INTEGER, 0, 0), expr_create_integer($5), 0, 0
    // );
  }
;

enum-declaration:
  ENUM type_ID type_ID ';' {
    // $$ = enum_decl_create(
    //   $3, type_create(TYPE_ENUM, $2, 0), 0
    // );
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
  INT {
    $$ = type_create(TYPE_INTEGER, 0, 0);
  }
  | VOID {
    $$ = type_create(TYPE_VOID, 0, 0);
  }
;

params:
  param-list
  | VOID {
    $$ = param_create(0, type_create(TYPE_VOID, 0, 0));
  }
;

param-list:
  param-list ',' param  {
    $3->next = $1;
    $$ = $3;
  }
  | param 
;
param: 
  type-specifier type_ID
| type-specifier type_ID '[' ']'
;

compound-stmt: 
  '{' local-declarations statement-list '}' {
    $$ = compound_stmt_create(STMT_BLOCK, $2, $3);
  }
;

local-declarations: 
  local-declarations var-declaration {
    $2->next = $1;
    $$ = $2;
  }
| local-declarations const-declaration{
    $2->next = $1;
    $$ = $2;
  }
| local-declarations enum-declaration {
    $2->next = $1;
    $$ = $2;
  }
| /* empty */ {
    $$ = 0;
  }
;

statement-list:
  statement-list statement {
    $2->next = $1;
    $$ = $2;
  }
| /* empty */ {
    $$ = 0;
  }
;

statement: 
  expression-stmt 
| compound-stmt 
| selection-stmt
| iteration-stmt 
| return-stmt 
;

expression-stmt: 
  expression ';' {
    $$ = stmt_create(STMT_EXPR, 0, 0, $1, 0, 0, 0, 0);
  }
| ';' {
    $$ = stmt_create(STMT_EXPR, 0, 0, expr_create(EXPR_EMPTY, 0, 0), 0, 0, 0, 0);
  }          
;

selection-stmt: 
  IF '(' expression ')' statement {
    $$ = stmt_create(STMT_IF_ELSE, 0, 0, $3, 0, $5, 0, 0);
  }
| IF '(' expression ')' statement ELSE statement {
    $$ = stmt_create(STMT_IF_ELSE, 0, 0, $3, 0, $5, $7, 0);
  }
;

iteration-stmt: 
  WHILE '(' expression ')' statement {
    $$ = stmt_create(STMT_WHILE, 0, 0, $3, 0, $5, 0, 0);
  }
;

return-stmt: RETURN ';' {
    $$ = stmt_create(STMT_RETURN, 0, 0, 0, 0, 0, 0, 0);
  }
| RETURN expression ';' {
    $$ = stmt_create(STMT_RETURN, 0, 0, $2, 0, 0, 0, 0);
  }
;

expression: 
  var '=' expression {
    $$ = expr_create(EXPR_ASSIGN, $1, $3);
  }
| simple-expression
;

var:  
  type_ID
| type_ID '[' expression ']'
;

simple-expression:
  additive-expression relop additive-expression {
    $2->left = $1;
    $2->right = $3;
    $$ = $2;
  }
| simple-expression logop additive-expression {
    $2->left = $1;
    $2->right = $3;
    $$ = $2;
  }
| additive-expression
;

relop: 
  LTEQ { $$ = expr_create(EXPR_LTEQ, 0, 0); }
| LT { $$ = expr_create(EXPR_LT, 0, 0); }
| GT { $$ = expr_create(EXPR_GT, 0, 0); }
| GTEQ { $$ = expr_create(EXPR_GTEQ, 0, 0); }
| EQ { $$ = expr_create(EXPR_EQ, 0, 0); }
| NEQ { $$ = expr_create(EXPR_NEQ, 0, 0); }
;

logop: 
  AND { $$ = expr_create(EXPR_AND, 0, 0); }
| OR { $$ = expr_create(EXPR_OR, 0, 0); }
;

additive-expression: 
  term { $$ = $1; }
| additive-expression '+' term {
     $$ = expr_create(EXPR_ADD, $1, $3);
  }
| additive-expression '-' term {
     $$ = expr_create(EXPR_SUB, $1, $3);
  }
;

term: 
factor { $$ = $1; }
| term '*' factor {
    $$ = expr_create(EXPR_MUL, $1, $3);
  }
| term '/' factor {
    $$ = expr_create(EXPR_DIV, $1, $3);
  }
| unary-expression { $$ = $1; }
;


unary-expression:
  unary_op factor {
    $1->right = $2;
    $$ = $1;
  }
;

unary_op: 
  '!' { $$ = expr_create(EXPR_NOT, 0, 0); }
| DEC { $$ = expr_create(EXPR_DEC, 0, 0); }
| INC { $$ = expr_create(EXPR_INC, 0, 0); }
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
| /* empty */ {
    $$ = 0;
  }
;

args-list:
  expression 
| args-list ',' expression {
    $$ = expr_create_arg( $1, $3);
  }
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




