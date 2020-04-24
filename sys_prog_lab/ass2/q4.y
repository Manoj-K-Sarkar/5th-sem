%{

#include<stdio.h>

#include<stdlib.h>



%}

%token IF ELSE CO ID NUM BO

%%



str: S { printf("Valid Input"); return 0; }

S: IF '('  C  ')'  BD R 

;

 

R: ELSE BD | 

;

BD: '{' B '}'

 | S

 | statement

 | e ';'

;

B: B B

 | statement

 | e ';'

 | S

  

;

C: e CO e 

 | e '<' e

 | e '>' e

 | 

;

e:e'+'e {$$=$1+$3;}

 |e'-'e {$$=$1-$3;}

 |e'*'e {$$=$1*$3;}

 |e'/'e {$$=$1/$3;}

 |'('e')' {$$=$2;}

 | e '+' '+' {$$=$1;}

 | e '-' '-' { $$=$1;}

 | e BO e 

 | e '<' e

 | e '>' e

 | NUM {$$=$1;}

 | ID {$$=$1;}

 

;

str: ID '=' e ',' str | ID '=' e  ;

statement: ID '=' e ';' ;

%%

int yywrap()

{return (1);

}

int main()

{

yyparse();



return 0;

}

int yyerror(char *str)

{



extern int lineno;

printf("Error: %s at line no %d\n",str,lineno);

exit(0);

return 0;

}
