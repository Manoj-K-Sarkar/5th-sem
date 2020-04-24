%{
#include<stdio.h>
%}

%token A B C

%%
str:S'\n' {return 0;}
//for a^ib^nc^n
S:A S|R;
R:B R C|B C;

//for a^kb^nc^k
/*S:A S C|A T C|T;
T:B T|B;*/
%%

yywrap()
{
  	return(1);
} 

main(){
   	printf("Enter the string:\n");
   	yyparse();
   	printf("valid string\n");
}


int yyerror(char *msg){
	printf("Invalid variable\n");
 	exit(0);
 	return 0;
}
