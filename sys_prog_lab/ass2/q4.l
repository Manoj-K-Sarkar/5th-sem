%{

#include<stdio.h>

#include "y.tab.h"

 int lineno=1;

%}



%%

if return IF;

else return ELSE;

[a-zA-Z]+[a-zA-Z0-9]* return ID;

[0-9]+(\.[0-9]*)? return NUM;

"==" return CO;

"<=" return CO;

">=" return CO;

"!=" return CO;

"&&" return BO;

"||" return BO;

[\n ] { lineno++; }

\t {}

. {  return yytext[0];}



%%
