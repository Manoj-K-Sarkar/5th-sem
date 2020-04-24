%{

#include<stdio.h>

#include<stdlib.h>

int result;

%}

%token WHILE BEG EN CO ID NUM
%left '+' '-'
%left '*' '/' '%'
%left '(' ')'
%%



str: S { printf("Valid Input\nResult: %d\n", result); return 0; }

S: st WHILE '(' C ')' BEG st EN  { result=$7; }

C: K CO K

 | K '>' K

| K '<' K

;
K: e
 | ID
;
e:e'+'e {$$=$1+$3;}

  |e'-'e {$$=$1-$3;}

 |e'*'e {$$=$1*$3; }

 |e'/'e {$$=$1/$3;}

 |'('e')' {$$=$2;}

 | e '+' '+' {$$=$1+1;}

 | e '-' '-' { $$=$1-1;}

 | NUM {$$=$1;}
 | ID {$$=$1;}
;

st:  ID '=' e ';' { $$ = $3; } 
 | e ';' {$$ = $1;}
;



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

printf("Error: Error at line no %d\n",lineno);

exit(0);

return 0;

}
