<<<<<<< HEAD
#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>
#include "cminus.tab.h"
#include "ast.h"
#include "pretty_print.h"

void execute(struct decl *decl)
{
  bracket(decl);
}

void yyerror(char *s, ...)
{
  va_list ap;
  va_start(ap, s);
  printf("%d: error: \n", yylineno);
}

int main(int argc, char *argv[])
{
  // printf("aaaaa");
  yyparse();
}
=======
// #include <stdio.h>
// #include <stdlib.h>
// #include <stdarg.h>
// #include "cminus.tab.h"
// #include "ast.h"
// #include "pretty_print.h"

// void execute(struct decl *decl)
// {
//   bracket(decl);
// }

// void yyerror(const char *s, ...)
// {
//   va_list ap;
//   va_start(ap, s);
//   printf("%d: error: \n", yylineno);
// }

// int main(int argc, char *argv[])
// {
//   yyparse();
// }
>>>>>>> 187d73f305fca1a9c5cd561075ffa6ec03ad02be
