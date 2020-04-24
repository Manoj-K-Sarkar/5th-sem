%{

#include<stdlib.h>

#include<string.h>

#define YYSTYPE char*

#include "y.tab.h"

int line=1;

%}

letter [a-zA-Z]

digit [0-9]

%%

"[" return OB;

"]" return CB;

int { yylval= yytext; return INT;}

float { yylval= yytext; return FLOAT; }

struct { yylval= yytext; return STRUCT;}

{letter}({letter}|{digit})* { yylval= strdup(yytext);  return ID; }

[0-9]+ { yylval= yytext; return INUM;}

[0-9]+(\.[0-9]+) return FNUM;

[\t ] {}

\n line++;

. return yytext[0];



%%
