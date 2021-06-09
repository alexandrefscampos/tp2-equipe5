#!/bin/bash

bison -b ./parser/cminus -d ./parser/cminus.y
flex -o ./lexer/lex.yy.c ./lexer/cminus.l
gcc -o ./tp2 ./parser/cminus.tab.c ./lexer/lex.yy.c ./parser/ast.c ./parser/pretty_print.c ./parser/tp2.c -ll

./tp2 < example.in > out