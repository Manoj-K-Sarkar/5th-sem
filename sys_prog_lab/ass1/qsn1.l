
%{	
	#include<stdio.h>
	int lineNo = 0;
%}

%%
.*	printf("%s",yytext);
\n  printf("\t line no: %d\n",++lineNo);

%%

int yywrap(){ return 1; }

main(){
	yylex();
	yywrap();
//	printf("%d ",count);
}
