#!/bin/bash

bison -b ./cminus -d ./cminus.y -v
flex -o ./lex.yy.c ./cminus.l
# gcc -o ./tp2 ./parser/cminus.tab.c ./lexer/lex.yy.c ./parser/ast.c ./parser/prettyprint.c ./parser/tp2.c -ll
<<<<<<< HEAD
gcc -o ./tp2 ./cminus.tab.c ./lex.yy.c ./ast.c ./pretty_print.c ./tp2.c -ll
# gcc -o ./cminus.tab.c ./lex.yy.c ./ast.c ./pretty_print.c -ll

./tp2 < simplemain.in > out
=======
# gcc -o ./tp2 ./cminus.tab.c ./lex.yy.c ./ast.c ./pretty_print.c ./tp2.c -ll
gcc -o ./tp2 ./cminus.tab.c ./lex.yy.c ./ast.c ./pretty_print.c -ll

./tp2 < newfeatures1.in > out
>>>>>>> 187d73f305fca1a9c5cd561075ffa6ec03ad02be
