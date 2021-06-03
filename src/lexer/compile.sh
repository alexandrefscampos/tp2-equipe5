#!/bin/bash
# compile.sh

flex cminus.l
cc -o lexer lex.yy.c -ll

