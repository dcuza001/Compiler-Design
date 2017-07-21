/* 
Daniel Cuza
SID: 861059923
dcuza001@ucr.edu
Phase 1*/

%{
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
   printf("PROGRAM\n"); currPos += yyleng; numReserved++;
}
"beginprogram"      {
   printf("BEGIN_PROGRAM\n"); currPos += yyleng; numReserved++;
}
"endprogram"      {
   printf("END_PROGRAM\n"); currPos += yyleng; numReserved++;
}
"integer"      {
   printf("INTEGER\n"); currPos += yyleng; numReserved++;
}
"array"      {
   printf("ARRAY\n"); currPos += yyleng; numReserved++;
}
"of"      {
   printf("OF\n"); currPos += yyleng; numReserved++;
}
"if"      {
   printf("IF\n"); currPos += yyleng; numReserved++;
}
"then"      {
   printf("THEN\n"); currPos += yyleng; numReserved++;
}
"endif"      {
   printf("ENDIF\n"); currPos += yyleng; numReserved++;
}
"else"      {
   printf("ELSE\n"); currPos += yyleng; numReserved++;
}
"while"      {
   printf("WHILE\n"); currPos += yyleng; numReserved++;
}
"do"      {
   printf("DO\n"); currPos += yyleng; numReserved++;
}
"beginloop"      {
   printf("BEGINLOOP\n"); currPos += yyleng; numReserved++;
}
"endloop"      {
   printf("ENDLOOP\n"); currPos += yyleng; numReserved++;
}
"continue"      {
   printf("CONTINUE\n"); currPos += yyleng; numReserved++;
}
"read"      {
   printf("READ\n"); currPos += yyleng; numReserved++;
}
"write"      {
   printf("WRITE\n"); currPos += yyleng; numReserved++;
}
"and"      {
   printf("AND\n"); currPos += yyleng; numReserved++;
}
"or"      {
   printf("OR\n"); currPos += yyleng; numReserved++;
}
"not"      {
   printf("NOT\n"); currPos += yyleng; numReserved++;
}
"true"      {
   printf("TRUE\n"); currPos += yyleng; numReserved++;
}
"false"      {
   printf("FALSE\n"); currPos += yyleng; numReserved++;
}




"-"      {
   printf("SUB\n"); currPos += yyleng; numOperators++;
}

"+"      {
   printf("ADD\n"); currPos += yyleng; numOperators++;
}
"*"      {
   printf("MULT\n"); currPos += yyleng; numOperators++;
}
"/"      {
   printf("DIV\n"); currPos += yyleng; numOperators++;
}

"%"      {
   printf("MOD\n"); currPos += yyleng; numOperators++;
}



"=="      {
   printf("EQ\n"); currPos += yyleng; numComp++;
}
"<>"      {
   printf("NEQ\n"); currPos += yyleng; numComp++;
}
"<"      {
   printf("LT\n"); currPos += yyleng; numComp++;
}
">"      {
   printf("GT\n"); currPos += yyleng; numComp++;
}
"<="      {
   printf("LTE\n"); currPos += yyleng; numComp++;
}
">="      {
   printf("GTE\n"); currPos += yyleng; numComp++;
}




";"      {
   printf("SEMICOLON\n"); currPos += yyleng; numSS++;
}

":"      {
   printf("COLON\n"); currPos += yyleng; numSS++;
}

","      {
   printf("COMMA\n"); currPos += yyleng; numSS++;
}

"("      {
   printf("L_PAREN\n"); currPos += yyleng; numSS++;
}

")"      {
   printf("R_PAREN\n"); currPos += yyleng; numSS++;
}

":="      {
   printf("ASSIGN\n"); currPos += yyleng; numSS++;
}





{ALPHABET}+    {printf("IDENT %s\n", yytext); currPos += yyleng; numIntegers++;}
{IDENT}+    {printf("IDENT %s\n", yytext); currPos += yyleng; numIntegers++;}
{DIGIT}+    {printf("NUMBER %s\n", yytext); currPos += yyleng; numIntegers++;}
[ \t]+      {/*ignore spaces*/ currPos += yyleng;}
"\n"        {currLine++; currPos = 1;}
.           {printf("Error at line %d, column %d: unrecognized symbol \"%s\"\n", currLine, currPos, yytext);}


{IDENTERR1}    {printf("Error at line %d, column %d: identifier \"%s\" must begin with a letter\n", currLine, currPos, yytext);}

{IDENTERR2}    {printf("Error at line %d, column %d: identifier \"%s\" cannot begin with an underscore\n", currLine, currPos, yytext);}

{IDENTERR3}    {printf("Error at line %d, column %d: identifier \"%s\" cannot end with an underscore\n", currLine, currPos, yytext);}







%%






int main(int argc, char ** argv){
   if(argc >=2)
   {
      yyin = fopen(argv[1], "r");
      if(yyin==NULL ){
         yyin = stdin;
      }
   }
   else{
      yyin = stdin;
   }
   yylex();
   
   
}
