/*
Names: Brendan Cheng and Rashid Goshtasbi Daniel Cuza
SID 861055750 and 861056442 and 861059923
CS152 Phase 2
*/


%{
	#define YY_NO_UNPUT
	using namespace std;
	#include <iostream>
	#include <string>  
	#include "mini_l.tab.h"
	int currLine = 1;
	int currPos = 1;
	void yyerror(char* msg);
	#include <stdio.h>
	#include <stdlib.h>
%}

DIGIT	[0-9]
LETTERS [a-zA-Z]
US [_]

ALPHABET {LETTERS}({US}|{LETTERS}|{DIGIT})*({LETTERS}|{DIGIT})+

DIG_BEG_ERR {DIGIT}+({US}|{LETTERS})+{DIGIT}*
US_BEG_ERR {US}+({US}|{LETTERS}|{DIGIT})*
US_END_ERR ({LETTERS}|{DIGIT})*{US}+

%%

"+"	{currPos += yyleng; return ADD;}
"-"	{currPos += yyleng; return SUB;}
"*"	{currPos += yyleng; return MULT;}
"/"	{currPos += yyleng; return DIV;}
"%" {currPos += yyleng; return MOD;}

"=="	{currPos += yyleng; return EQ;}
"<>" {currPos += yyleng; return NEQ; }
"<" {currPos += yyleng; return LT;}
">" {currPos += yyleng; return GT;}
"<=" {currPos += yyleng; return LTE;}
">=" {currPos += yyleng; return GTE;}

";" {currPos += yyleng; return SEMICOLON;}
":" {currPos += yyleng; return COLON;}
"," {currPos += yyleng; return COMMA;}
":=" {currPos += yyleng; return ASSIGN;}
"("	{currPos += yyleng; return L_PAREN;}
")"	{currPos += yyleng; return R_PAREN;}

##.* {currLine++; currPos = 1;}
"program" {currPos += yyleng; return PROGRAM;}
"beginprogram" {currPos += yyleng; return BEGIN_PROGRAM;}
"endprogram" {currPos += yyleng; return END_PROGRAM;}
"integer" {currPos += yyleng; return INTEGER;}
"array" {currPos += yyleng; return ARRAY;}
"of" {currPos += yyleng; return OF;}
"if" {currPos += yyleng; return IF;}
"then" {currPos += yyleng; return THEN;}
"endif" {currPos += yyleng; return ENDIF;}
"else" {currPos += yyleng; return ELSE;}
"while" {currPos += yyleng; return WHILE;}
"do" {currPos += yyleng; return DO;}
"beginloop" {currPos += yyleng; return BEGINLOOP;}
"endloop" {currPos += yyleng; return ENDLOOP;}
"continue" {currPos += yyleng; return CONTINUE;}
"read" {currPos += yyleng; return READ;}
"write" {currPos += yyleng; return WRITE;}
"and" {currPos += yyleng; return AND;}
"or" {currPos += yyleng; return OR;}
"not" {currPos += yyleng; return NOT;}
"true" {currPos += yyleng; return TRUE;}
"false" {currPos += yyleng; return FALSE;}


{DIGIT}+	{currPos += yyleng; yylval.ival = yytext; return NUMBER;}
{LETTERS}+ {currPos += yyleng; yylval.idval = yytext; return IDENT;}
{ALPHABET}+ {currPos += yyleng; yylval.ival = yytext; yylval.idval = yytext; return IDENT;}
{DIG_BEG_ERR}+ {printf("Error at line %d, column %d: identifier  \"%s\" must begin with a letter\n", currLine, currPos, yytext); exit(0);}
{US_BEG_ERR}+ {printf("Error at line %d, column %d: identifier  \"%s\" must begin with a letter\n", currLine, currPos, yytext); exit(0);}
{US_END_ERR}+ {printf("Error at line %d, column %d: identifier  \"%s\" cannot end with _\n", currLine, currPos, yytext); exit(0);}


[ \t]+	{/* ignore spaces */ currPos += yyleng;}

"\n"	{currLine++; currPos = 1;}

.	{printf("Error at line %d, column %d: unrecognized symbol \"%s\"\n", currLine, currPos, yytext); exit(0);}

%%


