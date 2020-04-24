%{
#include<stdio.h>
%}
%token A B
%%
str:S'\n' {return 0;}
S:A S|A S B|A A B;
%%
 
yywrap(){ return 1;}

main(){
	printf("Enter String: ");
	yyparse();
	printf("Valid String");
}

int yyerror(char *msg){
	printf("Invalid String: ");
	exit(0);
	return 0;
}
