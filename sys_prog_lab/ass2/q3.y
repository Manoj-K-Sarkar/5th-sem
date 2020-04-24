%{
#include<stdio.h>
extern int lineno;
%}

%token NUM NL
%left '+' '-'
%left '*' '/'
%left '(' ')'

%%
S:S E NL  {printf("value: %d\n",$2);}
  | E NL  {printf("value: %d\n",$1);}
  ;

E:E '+' E   {$$=$1+$3;}
 | E '-' E  {$$=$1-$3;}
 | E '*' E  {$$=$1*$3;}
 | E '/' E  {$$=$1/$3;}
 | '(' E ')' {$$=$2;}
 | NUM       {$$=$1;};
%%

yywrap(){return 1;}

main(){
	yyparse();
}

int yyerror(char *msg){
	printf("Invalid Expression at line no %d\n",lineno+1);
	exit(0);
	return 0;
}
