
%{	
	#include<stdio.h>
%}

%%
\/\/(.*) {}	
\/\*(.*\n)*.*\*\/ {}
%%

int yywrap(){ return 1; }

main(){
	yylex();
	yywrap();
}
