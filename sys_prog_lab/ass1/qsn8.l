%{
#include <stdio.h>
#include <stdlib.h>
int ints=0;
int floats=0;
int strings=0;
%}

digit [0-9]

%%

{digit}+ {printf("%s -> Integer\n",yytext);ints++;}


{digit}+\.{digit}+ {printf("%s -> Floating point\n",yytext);floats++;}

\".*\" {printf("%s -> String literal\n",yytext);strings++;}
.|\n
%%

int yywrap()
{
    return 1;
}

int main()
{
    yylex();
    printf("\nNumber of integer values : %d\n",ints);
    printf("Number of floating values : %d\n",floats);
    printf("Number of strings : %d\n",strings);
    return 0;
}

