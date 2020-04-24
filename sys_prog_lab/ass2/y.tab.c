#ifndef lint
static const char yysccsid[] = "@(#)yaccpar	1.9 (Berkeley) 02/21/93";
#endif

#include <stdlib.h>
#include <string.h>

#define YYBYACC 1
#define YYMAJOR 1
#define YYMINOR 9
#define YYPATCH 20070509

#define YYEMPTY (-1)
#define yyclearin    (yychar = YYEMPTY)
#define yyerrok      (yyerrflag = 0)
#define YYRECOVERING (yyerrflag != 0)

extern int yyparse(void);

static int yygrowstack(void);
#define YYPREFIX "yy"
#line 2 "q5.y"
#include <stdio.h>
#include <stdlib.h>
#line 26 "y.tab.c"
#define ID 257
#define NUM 258
#define FOR 259
#define LE 260
#define GE 261
#define EQ 262
#define NE 263
#define OR 264
#define AND 265
#define UMINUS 266
#define YYERRCODE 256
short yylhs[] = {                                        -1,
    0,    1,    4,    4,    4,    4,    5,    5,    5,    5,
    2,    2,    2,    2,    2,    2,    2,    2,    2,    2,
    2,    2,    2,    2,    2,    2,    2,    2,    3,    3,
    3,    3,    3,    3,    3,    3,    3,
};
short yylen[] = {                                         2,
    1,    9,    3,    2,    1,    0,    2,    2,    1,    0,
    3,    3,    3,    3,    3,    3,    3,    3,    3,    3,
    3,    3,    3,    3,    3,    1,    1,    0,    3,    3,
    3,    3,    3,    3,    3,    3,    0,
};
short yydefred[] = {                                      0,
    0,    0,    1,    0,    0,   27,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
   24,    0,   25,    0,   14,   15,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    5,    0,
    2,    9,    0,    0,    4,    8,    3,    0,
};
short yydgoto[] = {                                       2,
   62,   63,   38,   61,   68,
};
short yysindex[] = {                                   -242,
  -21,    0,    0, -232,  -22,    0,  139, -232, -232, -232,
 -232, -232, -232, -232, -232, -232,  -43,  -40, -232, -232,
 -232,  423,  202,  202,  202,  202,  435,  435,  202,  202,
    0,  -18,    0,  -18,    0,    0,  429,  -14, -232, -232,
 -232, -232, -232, -232, -232, -232, -232,  202,  202,  202,
  202,  435,  435,  202,  202,  -10, -111, -190,    0,  145,
    0,    0,  369,  -83,    0,    0,    0, -190,
};
short yyrindex[] = {                                      0,
    0,    0,    0,  375,  -39,    0,    0,  -32,  -32,  -32,
  -32,  -32,  -32,  -32,  -32,  -32,   12,   23,  -32,  -32,
  396,  -19,   56,   63,   70,   76,  -25,  -23,   83,   90,
    0,   43,    0,   50,    0,    0,    0,    0,  375,  375,
  375,  375,  375,  375,  375,  375,   34,  297,  303,  325,
  331,  -52,  -45,  439,  445,    0,    1,  111,    0,    0,
    0,    0,    0,  402,    0,    0,    0,  118,
};
short yygindex[] = {                                      0,
   41,  707,    0,    0,  -20,
};
#define YYTABLESIZE 764
short yytable[] = {                                      31,
    6,   26,   26,   26,   33,   26,   35,   26,   28,   28,
   28,   58,   28,   36,   28,   22,    1,   23,    4,   26,
   26,   11,   26,   19,    5,    6,   28,   28,   20,   28,
   57,   19,   17,   22,   18,   23,   20,   64,    8,   11,
    3,   67,    6,    6,   47,    6,    0,    6,    0,   16,
    0,   15,   28,   28,    0,    0,   28,    0,   28,    6,
    6,    0,    6,   28,   28,   28,    5,    6,    1,   28,
   28,   28,    0,   28,   28,   28,   28,    0,   28,    0,
   28,   28,   28,   12,   28,   12,    0,   12,    0,    0,
   13,    0,   13,   28,   13,   28,   18,   59,    0,    0,
    0,   12,   12,   19,   12,    0,    0,    0,   13,   13,
   20,   13,    0,    0,   18,   18,   21,   18,    0,    0,
    0,   19,   19,   17,   19,    6,    0,    0,   20,   20,
   16,   20,    0,    0,   21,   21,    0,   21,    0,    0,
    0,   17,   17,    0,   17,    5,    6,    1,   16,   16,
    0,   16,   10,   10,    0,   10,    0,   10,    0,    7,
    7,    0,    7,    0,    7,    0,    0,    0,    0,   10,
   10,    0,   10,    5,    6,    1,    7,    7,    0,    7,
   19,   17,    0,   18,    0,   20,   19,   17,    0,   18,
    0,   20,    0,    0,    0,    0,    0,   21,   16,    0,
   15,    0,    0,   65,   16,    0,   15,    0,    0,    0,
    0,   22,   22,    5,    6,    0,    5,    6,   23,   23,
   26,   26,   26,   26,   26,   26,    0,   28,   28,   28,
   28,   28,   28,    0,    0,   10,    0,    0,   22,   22,
   23,   23,    7,   19,   17,    0,   18,    0,   20,    9,
   10,   11,   12,   13,   14,    0,    0,    0,    0,    0,
    6,    6,    6,    6,    6,    6,    0,    0,    0,    0,
    0,   28,   28,   28,   28,   28,   28,    0,    0,    0,
    0,    0,   28,   28,   28,   28,   28,   28,    0,    0,
    0,    0,    0,   28,   28,   28,   28,   28,   28,    0,
    0,    0,   12,   12,   12,   12,   12,   12,    0,   13,
   13,   13,   13,   13,   13,   18,   18,   18,   18,   18,
   18,    0,   19,   19,   19,   19,   19,   19,    0,   20,
   20,   20,   20,   20,   20,   21,   21,   21,   21,   21,
   21,    0,   17,   17,   17,   17,   17,   17,    0,   16,
   16,   16,   16,   16,   16,   31,   18,    0,   18,    0,
    0,   32,   19,    0,   19,    0,    0,    0,    0,    0,
   10,   10,   10,   10,   10,   10,    0,    7,    7,    7,
    7,    7,    7,   33,   20,    0,   20,    0,    0,   34,
   21,    0,   21,    0,    0,    0,    0,    0,    9,   10,
   11,   12,   13,   14,    9,   10,   11,   12,   13,   14,
   19,   17,    0,   18,    0,   20,   28,   28,    0,   28,
    0,   28,    0,    0,    0,    0,    0,   66,   16,    0,
   15,    0,    0,   28,   28,    0,   28,   28,   28,    0,
   28,    0,   28,   10,   10,    0,   10,    0,   10,    0,
    0,    0,    0,    0,   37,   28,    0,   28,    0,    0,
   10,   10,    0,   10,   19,   17,    0,   18,    0,   20,
   19,   17,    0,   18,    0,   20,   19,   17,    0,   18,
    0,   20,   16,    0,   15,    0,    0,    0,   46,    0,
   45,    0,    0,    0,   16,    0,   15,   30,   17,    0,
   17,    0,    0,   29,   16,    0,   16,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,   18,   18,   18,   18,
   18,   18,   19,   19,   19,   19,   19,   19,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,   20,   20,   20,   20,   20,   20,
   21,   21,   21,   21,   21,   21,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    9,   10,
   11,   12,   13,   14,   28,   28,   28,   28,   28,   28,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,   28,   28,   28,   28,   28,
   28,   10,   10,   10,   10,   10,   10,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    9,   10,   11,   12,   13,   14,   39,   40,
   41,   42,   43,   44,    9,   10,   11,   12,   17,   17,
   17,   17,   17,   17,   16,   16,   16,   16,   16,   16,
    7,    0,    0,    0,   22,   23,   24,   25,   26,   27,
   28,   29,   30,   32,   34,   35,   36,   37,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,   48,   49,   50,   51,   52,
   53,   54,   55,   56,    0,    0,    0,    0,    0,    0,
    0,    0,    0,   60,
};
short yycheck[] = {                                      43,
    0,   41,   42,   43,   45,   45,   59,   47,   41,   42,
   43,  123,   45,   59,   47,   41,  259,   41,   40,   59,
   60,   41,   62,   42,  257,  258,   59,   60,   47,   62,
   41,   42,   43,   59,   45,   59,   47,   58,   61,   59,
    0,  125,   42,   43,   59,   45,   -1,   47,   -1,   60,
   -1,   62,   41,   42,   -1,   -1,   45,   -1,   47,   59,
   60,   -1,   62,   41,   42,   43,  257,  258,  259,   47,
   59,   60,   -1,   62,   41,   42,   43,   -1,   45,   -1,
   47,   59,   60,   41,   62,   43,   -1,   45,   -1,   -1,
   41,   -1,   43,   60,   45,   62,   41,   57,   -1,   -1,
   -1,   59,   60,   41,   62,   -1,   -1,   -1,   59,   60,
   41,   62,   -1,   -1,   59,   60,   41,   62,   -1,   -1,
   -1,   59,   60,   41,   62,  125,   -1,   -1,   59,   60,
   41,   62,   -1,   -1,   59,   60,   -1,   62,   -1,   -1,
   -1,   59,   60,   -1,   62,  257,  258,  259,   59,   60,
   -1,   62,   42,   43,   -1,   45,   -1,   47,   -1,   42,
   43,   -1,   45,   -1,   47,   -1,   -1,   -1,   -1,   59,
   60,   -1,   62,  257,  258,  259,   59,   60,   -1,   62,
   42,   43,   -1,   45,   -1,   47,   42,   43,   -1,   45,
   -1,   47,   -1,   -1,   -1,   -1,   -1,   59,   60,   -1,
   62,   -1,   -1,   59,   60,   -1,   62,   -1,   -1,   -1,
   -1,  264,  265,  257,  258,   -1,  257,  258,  264,  265,
  260,  261,  262,  263,  264,  265,   -1,  260,  261,  262,
  263,  264,  265,   -1,   -1,  125,   -1,   -1,  264,  265,
  264,  265,  125,   42,   43,   -1,   45,   -1,   47,  260,
  261,  262,  263,  264,  265,   -1,   -1,   -1,   -1,   -1,
  260,  261,  262,  263,  264,  265,   -1,   -1,   -1,   -1,
   -1,  260,  261,  262,  263,  264,  265,   -1,   -1,   -1,
   -1,   -1,  260,  261,  262,  263,  264,  265,   -1,   -1,
   -1,   -1,   -1,  260,  261,  262,  263,  264,  265,   -1,
   -1,   -1,  260,  261,  262,  263,  264,  265,   -1,  260,
  261,  262,  263,  264,  265,  260,  261,  262,  263,  264,
  265,   -1,  260,  261,  262,  263,  264,  265,   -1,  260,
  261,  262,  263,  264,  265,  260,  261,  262,  263,  264,
  265,   -1,  260,  261,  262,  263,  264,  265,   -1,  260,
  261,  262,  263,  264,  265,   59,   60,   -1,   62,   -1,
   -1,   59,   60,   -1,   62,   -1,   -1,   -1,   -1,   -1,
  260,  261,  262,  263,  264,  265,   -1,  260,  261,  262,
  263,  264,  265,   59,   60,   -1,   62,   -1,   -1,   59,
   60,   -1,   62,   -1,   -1,   -1,   -1,   -1,  260,  261,
  262,  263,  264,  265,  260,  261,  262,  263,  264,  265,
   42,   43,   -1,   45,   -1,   47,   42,   43,   -1,   45,
   -1,   47,   -1,   -1,   -1,   -1,   -1,   59,   60,   -1,
   62,   -1,   -1,   59,   60,   -1,   62,   42,   43,   -1,
   45,   -1,   47,   42,   43,   -1,   45,   -1,   47,   -1,
   -1,   -1,   -1,   -1,   59,   60,   -1,   62,   -1,   -1,
   59,   60,   -1,   62,   42,   43,   -1,   45,   -1,   47,
   42,   43,   -1,   45,   -1,   47,   42,   43,   -1,   45,
   -1,   47,   60,   -1,   62,   -1,   -1,   -1,   60,   -1,
   62,   -1,   -1,   -1,   60,   -1,   62,   59,   60,   -1,
   62,   -1,   -1,   59,   60,   -1,   62,   -1,   -1,   -1,
   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
   -1,   -1,   -1,   -1,   -1,   -1,  260,  261,  262,  263,
  264,  265,  260,  261,  262,  263,  264,  265,   -1,   -1,
   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
   -1,   -1,   -1,   -1,  260,  261,  262,  263,  264,  265,
  260,  261,  262,  263,  264,  265,   -1,   -1,   -1,   -1,
   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,  260,  261,
  262,  263,  264,  265,  260,  261,  262,  263,  264,  265,
   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
   -1,   -1,   -1,   -1,   -1,  260,  261,  262,  263,  264,
  265,  260,  261,  262,  263,  264,  265,   -1,   -1,   -1,
   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
   -1,   -1,  260,  261,  262,  263,  264,  265,  260,  261,
  262,  263,  264,  265,  260,  261,  262,  263,  260,  261,
  262,  263,  264,  265,  260,  261,  262,  263,  264,  265,
    4,   -1,   -1,   -1,    8,    9,   10,   11,   12,   13,
   14,   15,   16,   17,   18,   19,   20,   21,   -1,   -1,
   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
   -1,   -1,   -1,   -1,   -1,   39,   40,   41,   42,   43,
   44,   45,   46,   47,   -1,   -1,   -1,   -1,   -1,   -1,
   -1,   -1,   -1,   57,
};
#define YYFINAL 2
#ifndef YYDEBUG
#define YYDEBUG 0
#endif
#define YYMAXTOKEN 266
#if YYDEBUG
char *yyname[] = {
"end-of-file",0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
"'!'",0,0,0,0,0,0,"'('","')'","'*'","'+'",0,"'-'",0,"'/'",0,0,0,0,0,0,0,0,0,0,0,
"';'","'<'","'='","'>'",0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,"'{'",0,"'}'",0,
0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
0,0,0,0,0,0,0,0,0,0,"ID","NUM","FOR","LE","GE","EQ","NE","OR","AND","UMINUS",
};
char *yyrule[] = {
"$accept : S",
"S : ST",
"ST : FOR '(' E ';' E2 ';' E ')' DEF",
"DEF : '{' BODY '}'",
"DEF : E ';'",
"DEF : ST",
"DEF :",
"BODY : BODY BODY",
"BODY : E ';'",
"BODY : ST",
"BODY :",
"E : ID '=' E",
"E : E '+' E",
"E : E '-' E",
"E : E '*' E",
"E : E '/' E",
"E : E '<' E",
"E : E '>' E",
"E : E LE E",
"E : E GE E",
"E : E EQ E",
"E : E NE E",
"E : E OR E",
"E : E AND E",
"E : E '+' '+'",
"E : E '-' '-'",
"E : ID",
"E : NUM",
"E :",
"E2 : E '<' E",
"E2 : E '>' E",
"E2 : E LE E",
"E2 : E GE E",
"E2 : E EQ E",
"E2 : E NE E",
"E2 : E OR E",
"E2 : E AND E",
"E2 :",
};
#endif
#ifndef YYSTYPE
typedef int YYSTYPE;
#endif
#if YYDEBUG
#include <stdio.h>
#endif

/* define the initial stack-sizes */
#ifdef YYSTACKSIZE
#undef YYMAXDEPTH
#define YYMAXDEPTH  YYSTACKSIZE
#else
#ifdef YYMAXDEPTH
#define YYSTACKSIZE YYMAXDEPTH
#else
#define YYSTACKSIZE 10000
#define YYMAXDEPTH  10000
#endif
#endif

#define YYINITSTACKSIZE 500

int      yydebug;
int      yynerrs;
int      yyerrflag;
int      yychar;
short   *yyssp;
YYSTYPE *yyvsp;
YYSTYPE  yyval;
YYSTYPE  yylval;

/* variables for the parser stack */
static short   *yyss;
static short   *yysslim;
static YYSTYPE *yyvs;
static int      yystacksize;
#line 63 "q5.y"

yywrap(){return 1;}

main() {
        yyparse();
	printf("Valid Expression!\n");
}      
int yyerror(char *msg){
	printf("Invalid Expression!\n");
	exit(0);
	return 0;
}
#line 348 "y.tab.c"
/* allocate initial stack or double stack size, up to YYMAXDEPTH */
static int yygrowstack(void)
{
    int newsize, i;
    short *newss;
    YYSTYPE *newvs;

    if ((newsize = yystacksize) == 0)
        newsize = YYINITSTACKSIZE;
    else if (newsize >= YYMAXDEPTH)
        return -1;
    else if ((newsize *= 2) > YYMAXDEPTH)
        newsize = YYMAXDEPTH;

    i = yyssp - yyss;
    newss = (yyss != 0)
          ? (short *)realloc(yyss, newsize * sizeof(*newss))
          : (short *)malloc(newsize * sizeof(*newss));
    if (newss == 0)
        return -1;

    yyss  = newss;
    yyssp = newss + i;
    newvs = (yyvs != 0)
          ? (YYSTYPE *)realloc(yyvs, newsize * sizeof(*newvs))
          : (YYSTYPE *)malloc(newsize * sizeof(*newvs));
    if (newvs == 0)
        return -1;

    yyvs = newvs;
    yyvsp = newvs + i;
    yystacksize = newsize;
    yysslim = yyss + newsize - 1;
    return 0;
}

#define YYABORT goto yyabort
#define YYREJECT goto yyabort
#define YYACCEPT goto yyaccept
#define YYERROR goto yyerrlab
int
yyparse(void)
{
    register int yym, yyn, yystate;
#if YYDEBUG
    register const char *yys;

    if ((yys = getenv("YYDEBUG")) != 0)
    {
        yyn = *yys;
        if (yyn >= '0' && yyn <= '9')
            yydebug = yyn - '0';
    }
#endif

    yynerrs = 0;
    yyerrflag = 0;
    yychar = YYEMPTY;

    if (yyss == NULL && yygrowstack()) goto yyoverflow;
    yyssp = yyss;
    yyvsp = yyvs;
    *yyssp = yystate = 0;

yyloop:
    if ((yyn = yydefred[yystate]) != 0) goto yyreduce;
    if (yychar < 0)
    {
        if ((yychar = yylex()) < 0) yychar = 0;
#if YYDEBUG
        if (yydebug)
        {
            yys = 0;
            if (yychar <= YYMAXTOKEN) yys = yyname[yychar];
            if (!yys) yys = "illegal-symbol";
            printf("%sdebug: state %d, reading %d (%s)\n",
                    YYPREFIX, yystate, yychar, yys);
        }
#endif
    }
    if ((yyn = yysindex[yystate]) && (yyn += yychar) >= 0 &&
            yyn <= YYTABLESIZE && yycheck[yyn] == yychar)
    {
#if YYDEBUG
        if (yydebug)
            printf("%sdebug: state %d, shifting to state %d\n",
                    YYPREFIX, yystate, yytable[yyn]);
#endif
        if (yyssp >= yysslim && yygrowstack())
        {
            goto yyoverflow;
        }
        *++yyssp = yystate = yytable[yyn];
        *++yyvsp = yylval;
        yychar = YYEMPTY;
        if (yyerrflag > 0)  --yyerrflag;
        goto yyloop;
    }
    if ((yyn = yyrindex[yystate]) && (yyn += yychar) >= 0 &&
            yyn <= YYTABLESIZE && yycheck[yyn] == yychar)
    {
        yyn = yytable[yyn];
        goto yyreduce;
    }
    if (yyerrflag) goto yyinrecovery;

    yyerror("syntax error");

#ifdef lint
    goto yyerrlab;
#endif

yyerrlab:
    ++yynerrs;

yyinrecovery:
    if (yyerrflag < 3)
    {
        yyerrflag = 3;
        for (;;)
        {
            if ((yyn = yysindex[*yyssp]) && (yyn += YYERRCODE) >= 0 &&
                    yyn <= YYTABLESIZE && yycheck[yyn] == YYERRCODE)
            {
#if YYDEBUG
                if (yydebug)
                    printf("%sdebug: state %d, error recovery shifting\
 to state %d\n", YYPREFIX, *yyssp, yytable[yyn]);
#endif
                if (yyssp >= yysslim && yygrowstack())
                {
                    goto yyoverflow;
                }
                *++yyssp = yystate = yytable[yyn];
                *++yyvsp = yylval;
                goto yyloop;
            }
            else
            {
#if YYDEBUG
                if (yydebug)
                    printf("%sdebug: error recovery discarding state %d\n",
                            YYPREFIX, *yyssp);
#endif
                if (yyssp <= yyss) goto yyabort;
                --yyssp;
                --yyvsp;
            }
        }
    }
    else
    {
        if (yychar == 0) goto yyabort;
#if YYDEBUG
        if (yydebug)
        {
            yys = 0;
            if (yychar <= YYMAXTOKEN) yys = yyname[yychar];
            if (!yys) yys = "illegal-symbol";
            printf("%sdebug: state %d, error recovery discards token %d (%s)\n",
                    YYPREFIX, yystate, yychar, yys);
        }
#endif
        yychar = YYEMPTY;
        goto yyloop;
    }

yyreduce:
#if YYDEBUG
    if (yydebug)
        printf("%sdebug: state %d, reducing by rule %d (%s)\n",
                YYPREFIX, yystate, yyn, yyrule[yyn]);
#endif
    yym = yylen[yyn];
    if (yym)
        yyval = yyvsp[1-yym];
    else
        memset(&yyval, 0, sizeof yyval);
    switch (yyn)
    {
case 1:
#line 17 "q5.y"
{printf("Valid Expression\n"); exit(0);}
break;
#line 533 "y.tab.c"
    }
    yyssp -= yym;
    yystate = *yyssp;
    yyvsp -= yym;
    yym = yylhs[yyn];
    if (yystate == 0 && yym == 0)
    {
#if YYDEBUG
        if (yydebug)
            printf("%sdebug: after reduction, shifting from state 0 to\
 state %d\n", YYPREFIX, YYFINAL);
#endif
        yystate = YYFINAL;
        *++yyssp = YYFINAL;
        *++yyvsp = yyval;
        if (yychar < 0)
        {
            if ((yychar = yylex()) < 0) yychar = 0;
#if YYDEBUG
            if (yydebug)
            {
                yys = 0;
                if (yychar <= YYMAXTOKEN) yys = yyname[yychar];
                if (!yys) yys = "illegal-symbol";
                printf("%sdebug: state %d, reading %d (%s)\n",
                        YYPREFIX, YYFINAL, yychar, yys);
            }
#endif
        }
        if (yychar == 0) goto yyaccept;
        goto yyloop;
    }
    if ((yyn = yygindex[yym]) && (yyn += yystate) >= 0 &&
            yyn <= YYTABLESIZE && yycheck[yyn] == yystate)
        yystate = yytable[yyn];
    else
        yystate = yydgoto[yym];
#if YYDEBUG
    if (yydebug)
        printf("%sdebug: after reduction, shifting from state %d \
to state %d\n", YYPREFIX, *yyssp, yystate);
#endif
    if (yyssp >= yysslim && yygrowstack())
    {
        goto yyoverflow;
    }
    *++yyssp = yystate;
    *++yyvsp = yyval;
    goto yyloop;

yyoverflow:
    yyerror("yacc stack overflow");

yyabort:
    return (1);

yyaccept:
    return (0);
}
