%{
#include<stdio.h>
%}
letter [A-Za-z]
digit [0-9]
%%

"auto"|"break"|"int"|"float"|"char"|"void" { ECHO; printf(" :Keywords\n");}
return|static|extern|if|for { ECHO; printf(" :Keywords\n");} 
break|do|while|else|switch { ECHO; printf(" :Keywords\n");}
case|double|goto|register { ECHO; printf(" :Keywords\n");}
sizeof|typedef|enum|union { ECHO; printf(" :Keywords\n");}
enum|struct|long|volatile { ECHO; printf(" :Keywords\n");}
continue|default|unsigned|short { ECHO; printf(" :Keywords\n");}
(" ")*{letter}({letter}|{digit})* { ECHO; printf(" :Identifier\n"); }
for(.*\;.*\;.*)\{.*(.*\n)*\} printf("for-loop \n");
while(.*).*(.*\n)*\{.*(.*\n)*\} printf("while -loop\n");
do.*(.*\n)*\{.*(.*\n)*\}(\n)*while(.*)(" ")*\; printf("do-while loop\n");
. {}
%%
int yywrap()
{
return 1;
}
int main()
{
yylex();
return 0;
}

