/* 
Daniel Cuza
SID: 861059923
dcuza001@ucr.edu
Phase 2*/

%{
   #include "y.tab.h"
   int currLine = 1, currPos = 1;
   int numIntegers = 0;
   int numOperators = 0;
   int numParens = 0;
   int numComp = 0;
   int numReserved = 0;
   int numSS = 0;
%}

DIGIT [0-9]
ALPHABET [a-zA-Z]
ALPHA_DIGIT {ALPHABET}+{DIGIT}+
US [_]
ALPHA_US_DIGIT  {ALPHABET}+{US}+{DIGIT}+

IDENTERR1 {DIGIT}+({US}|{ALPHABET})+{DIGIT}*
IDENTERR2 {US}+({ALPHABET}|{DIGIT})*
IDENTERR3 ({ALPHABET}|{DIGIT})*+{US}+

IDENT {ALPHABET}({US}|{ALPHABET}|{DIGIT})*({ALPHABET}|{DIGIT})+


%%

##.* {currLine++; currPos=1;}
"program"      {
   currPos += yyleng; numReserved++; return PROGRAM;
}
"beginprogram"      {
   currPos += yyleng; numReserved++; return BEGIN_PROGRAM;
}
"endprogram"      {
   currPos += yyleng; numReserved++; return END_PROGRAM;
}
"integer"      {
   currPos += yyleng; numReserved++; return INTEGER;
}
"array"      {
   currPos += yyleng; numReserved++; return ARRAY;
}
"of"      {
   currPos += yyleng; numReserved++; return OF;
}
"if"      {
   currPos += yyleng; numReserved++; return IF;
}
"then"      {
   currPos += yyleng; numReserved++; return THEN;
}
"endif"      {
   currPos += yyleng; numReserved++; return ENDIF;
}
"else"      {
   currPos += yyleng; numReserved++; return ELSE;
}
"while"      {
   currPos += yyleng; numReserved++; return WHILE;
}
"do"      {
   currPos += yyleng; numReserved++; return DO;
}
"beginloop"      {
   currPos += yyleng; numReserved++; return BEGINLOOP;
}
"endloop"      {
   currPos += yyleng; numReserved++; return ENDLOOP;
}
"continue"      {
   currPos += yyleng; numReserved++; return CONTINUE;
}
"read"      {
   currPos += yyleng; numReserved++; return READ;
}
"write"      {
   currPos += yyleng; numReserved++; return WRITE;
}
"and"      {
   currPos += yyleng; numReserved++; return AND;
}
"or"      {
   currPos += yyleng; numReserved++; return OR;
}
"not"      {
   currPos += yyleng; numReserved++; return NOT;
}
"true"      {
   currPos += yyleng; numReserved++; return TRUE;
}
"false"      {
   currPos += yyleng; numReserved++; return FALSE;
}




"-"      {
   currPos += yyleng; numOperators++; return SUB;
}

"+"      {
   currPos += yyleng; numOperators++; return ADD;
}
"*"      {
   currPos += yyleng; numOperators++; return MULT;
}
"/"      {
   currPos += yyleng; numOperators++; return DIV;
}

"%"      {
  currPos += yyleng; numOperators++; return MOD;
}



"=="      {
   currPos += yyleng; numComp++; return EQ;
}
"<>"      {
   currPos += yyleng; numComp++; return NEQ;
}
"<"      {
   currPos += yyleng; numComp++; return LT;
}
">"      {
   currPos += yyleng; numComp++; return GT;
}
"<="      {
   currPos += yyleng; numComp++; return LTE;
}
">="      {
   currPos += yyleng; numComp++; return GTE;
}




";"      {
   currPos += yyleng; numSS++; return SEMICOLON;
}

":"      {
   currPos += yyleng; numSS++; return COLON;
}

","      {
   currPos += yyleng; numSS++; return COMMA;
}

"("      {
   currPos += yyleng; numSS++; return L_PAREN;
}

")"      {
   currPos += yyleng; numSS++; return R_PAREN;
}

":="      {
   currPos += yyleng; numSS++; return ASSIGN;
}





{ALPHABET}+    {currPos += yyleng; yylval.ival = atof(yytext); yylval.idval = yytext; numIntegers++; return IDENT;}
{IDENT}+    {currPos += yyleng; yylval.idval = yytext; numIntegers++; return IDENT;}
{DIGIT}+    {currPos += yyleng; yylval.ival = atof(yytext); numIntegers++; return NUMBER;}
[ \t]+      {/*ignore spaces*/ currPos += yyleng;}
"\n"        {currLine++; currPos = 1; /*return END;*/}
.           {printf("Error at line %d, column %d: unrecognized symbol \"%s\"\n", currLine, currPos, yytext); exit(0);}


{IDENTERR1}    {printf("Error at line %d, column %d: identifier \"%s\" must begin with a letter\n", currLine, currPos, yytext); exit(0);}

{IDENTERR2}    {printf("Error at line %d, column %d: identifier \"%s\" cannot begin with an underscore\n", currLine, currPos, yytext); exit(0);}

{IDENTERR3}    {printf("Error at line %d, column %d: identifier \"%s\" cannot end with an underscore\n", currLine, currPos, yytext); exit(0);}







%%





