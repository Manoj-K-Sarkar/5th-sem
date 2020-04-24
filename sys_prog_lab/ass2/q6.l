%{

#include<stdio.h>
#include<stdlib.h>
#include "y.tab.h"
extern int yylval;
 int lineno=1;

%}



%%

while return WHILE;

begin return BEG;

end return EN;

[a-zA-Z]+[a-zA-Z0-9]* return ID;

[0-9]+(\.[0-9]*)? { yylval=atoi(yytext); return NUM;}

"==" return CO;

"<=" return CO;

">=" return CO;

[\n ] { lineno++; }

\t {}

. {  return yytext[0];}



%%
