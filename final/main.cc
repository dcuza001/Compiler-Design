/*
Names: Brendan Cheng and Rashid Goshtasbi and Daniel Cuza
SID: 861055750 and 861056442 and 861059923
CS152 Phase 3 Lexical Analyzer
*/

#define YY_NO_UNPUT

using namespace std;

#include <iostream>
#include <stdio.h>
#include <string>

int yyparse();

int main(int argc, char **argv) {
   if (argc > 1) {
      //yyin = fopen(argv[1], "r");
      if (freopen(argv[1], "r", stdin)== NULL){
         //printf("syntax: %s filename\n", argv[0]);
		 cerr << argv[0] << ": File " << argv[1] << " is not opening:(\n";
		 exit(1);
      }//end if
   }//end if
   yyparse(); // Calls yylex() for tokens.
   return 0;
}
