#!/bin/bash

bison -b ./parser/cminus -d ./parser/cminus.y -v
flex -o ./lexer/lex.yy.c ./lexer/cminus.l
# gcc -o ./tp2 ./parser/cminus.tab.c ./lexer/lex.yy.c ./parser/ast.c ./parser/prettyprint.c ./parser/tp2.c -ll
# gcc -o ./tp2 ./cminus.tab.c ./lex.yy.c ./ast.c ./pretty_print.c ./tp2.c -ll
gcc -o ./tp2 ./cminus.tab.c ./lex.yy.c ./ast.c ./pretty_print.c ./tp2.c -ll

./tp2 < newfeatures1.in > out
