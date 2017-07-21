/*
Names: Brendan Cheng and Rashid Goshtasbi and Daniel Cuza
SID: 861055750 and 861056442 and 861059923
CS152 Phase 3 Lexical Analyzer
*/

%{

 #define YY_NO_UNPUT ////////
 
 #include <iostream>
 #include <string> //////////
 #include <stack>
 #include <sstream>
 #include <stdio.h>
 #include <stdlib.h>
 #include <map>

 using namespace std;
 void yyerror(const char *msg);
 extern int currLine;
 extern int currPos;
 extern int yyleng;
 extern FILE * yyin;
 extern char* yytext;
 extern int yylex(void);

 map<string, int> decs;
 stack<string> idents;
 stack<string> vars;
 stack<string> comps;
 stack<string> indexes;
 stack<string> reverse_s;
 stack<int> size;
 stack<int> labels;
 stack<int> loops;
 stack<int> predicates;
 unsigned t_num = 0;
 unsigned l_num = 0;
 unsigned p_num = 0;
 string error_msg = "";
 stringstream output;


%}

%union{
  char* ival;
  char* idval;
}

%error-verbose
%start prog_start


%token <idval> IDENT VAR 
%token <ival> NUMBER INTEGER


%left MULT DIV ADD SUB MOD EQ NEQ LT GT LTE GTE SEMICOLON COLON COMMA ASSIGN L_PAREN R_PAREN PROGRAM BEGIN_PROGRAM END_PROGRAM INTEGER ARRAY OF IF THEN ENDIF ELSE WHILE DO BEGINLOOP ENDLOOP CONTINUE READ WRITE AND OR NOT TRUE FALSE END



%% 
prog_start: PROGRAM IDENT SEMICOLON block END_PROGRAM {
				for (unsigned i = 0; i < t_num; ++i) {
					cout << "   . t" << i << endl;
				}
				for (unsigned i = 0; i < p_num; ++i) {
					cout << "   . p" << i << endl;
				}
				cout << output.str();
			}
			| error
			;



comp: EQ {
				comps.push("==");	
			}
			| NEQ {
				comps.push("!=");
			}
			| LT {
				comps.push("<");
			}
			| GT {
				comps.push(">");
			}
			| LTE {
				comps.push("<=");
			}
			| GTE {
				comps.push(">=");
			}
			;


begin_program: BEGIN_PROGRAM { output << ": START" << endl;}
			| error
			;

block: declaration SEMICOLON block2
			;

block2: declaration SEMICOLON block2 
			| begin_program statement SEMICOLON statement1 
			;
			
declaration: ident declaration1 
			;

declaration1: COMMA ident declaration1 
			| COLON declaration2 
			;

declaration2: INTEGER {
				while(!idents.empty()) {
					output << "   . " << idents.top() << endl;
					idents.pop();
				}
			}
			| ARRAY L_PAREN NUMBER R_PAREN OF INTEGER {
				if (atoi($3) <= 0){
					error_msg = "Improper array size allocation. " ;
					yyerror(error_msg.c_str());
				}
				while(!idents.empty()) {
					output << "   .[] " << idents.top() << ", " << atoi($3) << endl;
					decs[idents.top()] = atoi($3);
					idents.pop();
				}
			
			}
			;

ident: IDENT {
			if (decs.find("_" + string($1)) != decs.end()) {
				error_msg =  string($1) + " was previously declared. ";
				yyerror(error_msg.c_str());
			}
			decs["_" + string($1)] = -1;
			idents.push("_" + string($1));

			}
			;

statement: var ASSIGN expression {
			string temp = vars.top();
			if (indexes.top() != "-1") {
				stringstream reverse_this; 
				reverse_this << t_num;
				output << "  =[] t" << t_num << ", " << temp << ", " << indexes.top() << endl;
				temp = "t" + reverse_this.str();
				t_num++;
			}

			vars.pop();
			indexes.pop();
			string temp2 = vars.top();
			if (indexes.top() != "-1") {
				output << "   []= " << temp2 << ", " << indexes.top() << ", " << temp << endl;
			}
			else {
				output << "   = " << temp2 << ", " << temp << endl;
			}
			vars.pop();
			indexes.pop();
			}
			| IF bool_exp then statement SEMICOLON statement1 else_state endif
			| while bool_exp beginloop statement SEMICOLON statement1 endloop
			| do BEGINLOOP statement SEMICOLON statement1 endloop WHILE bool_exp {
				int temp2 = predicates.top();
				predicates.pop();
				int temp1 = labels.top();
				output << "   == p" << p_num << ", p" << temp2 << ", 0" << endl;
				output << "   ?:= L" << temp1 << ", p" << p_num << endl;
				++p_num;
				labels.pop();
			}
			| READ var var1 {
				while (!vars.empty()) {
					stringstream reverse_this;
					if (indexes.top() == "-1") {
						reverse_this << "   .< " << vars.top() << endl;
						reverse_s.push(reverse_this.str());
					}
					else {
						reverse_this << "   .[]< " << vars.top() << ", " << indexes.top() << endl;
						reverse_s.push(reverse_this.str());
					}
					vars.pop();
					indexes.pop();
				}
				while (!reverse_s.empty()) {
					output << reverse_s.top();
					reverse_s.pop();
				}			
			}
			| WRITE var var1 {
				while (!vars.empty()) {
					stringstream reverse_this;
					if (indexes.top() == "-1") {
						reverse_this << "   .> " << vars.top() << endl;
						reverse_s.push(reverse_this.str());
					}
					else {
						reverse_this << "   .[]> " << vars.top() << ", " << indexes.top() << endl;
						reverse_s.push(reverse_this.str());
					}
					vars.pop();
					indexes.pop();
				}
				while (!reverse_s.empty()) {
					output << reverse_s.top();
					reverse_s.pop();
				}		
			
			}
			| CONTINUE {
				if (!loops.empty()) {
					int temp = loops.top();
					output << "   := L" << temp << endl;
				}
			}
			;

while: WHILE {
			output << ": L" << l_num << endl;
			labels.push(l_num);
			loops.push(l_num);
			++l_num;
			}
			;

beginloop: BEGINLOOP {
			int temp = predicates.top();
			predicates.pop();
			output << "   ?:= L" << l_num << ", p" << temp << endl;
			labels.push(l_num);
			++l_num;
			}
			;

endloop: ENDLOOP {
			int temp = labels.top();
			labels.pop();
			int temp2 = labels.top();
			labels.pop();
			output << "   := L" << temp2 << endl << ": L" << temp << endl;
			loops.pop();
			}
			;

statement1: statement SEMICOLON statement1 
			| 
			;

else_state: else statement SEMICOLON statement1 
			| 
			; 

var1: COMMA var var1  
			| 
			;

then: THEN {
			int temp = predicates.top();
			predicates.pop();
			output << "   ?:= L" << l_num << ", p" << temp << endl;
			labels.push(l_num);
			++l_num;
			}
			;

endif: ENDIF {
			output << ": L" << labels.top() << endl;
			labels.pop();
			}
			;

else: ELSE {
			output << "   := L" << l_num << endl;
			output << ": L" << labels.top() << endl;
			labels.pop();
			labels.push(l_num);
			++l_num;
			}
			;

do: DO {
			output << ": L" << l_num << endl;
			labels.push(l_num);
			++l_num;
			loops.push(l_num);
			++l_num;
			}
			;

bool_exp: relation_and_exp bool_exp1 {
			int temp = predicates.top();
			predicates.pop();
			output << "   == p" << p_num << ", p" << temp << ", 0" << endl;
			predicates.push(p_num);
			++p_num;
	
			}
			;

bool_exp1: OR relation_and_exp bool_exp1 {
			int temp = predicates.top();
			predicates.pop();
			int temp2 = predicates.top();
			predicates.pop();
			output << "   || p" << p_num << ", p" << temp2 << ", p" << temp << endl;
			predicates.push(p_num);
			++p_num;
			}
			| 
			;

relation_and_exp: relation_exp relation_and_exp1 
			;

relation_and_exp1: AND relation_exp relation_and_exp1 {
			int temp = predicates.top();
			predicates.pop();
			int temp2 = predicates.top();
			predicates.pop();
			output << "   && p" << p_num << ", p" << temp2 << ", p" << temp << endl;
			predicates.push(p_num);
			++p_num;
			}
			| 
			;

relation_exp: expression comp expression {
			string temp = vars.top();
			if (indexes.top() != "-1"){
				stringstream reverse_this;
				reverse_this << t_num;
				output << "   =[] t" << t_num << ", " << temp << ", " << indexes.top() << endl;
				temp = "t" + reverse_this.str();
				++t_num;
			}
			vars.pop();
			indexes.pop();
			string temp2 = vars.top();
			if (indexes.top() != "-1") {
				stringstream reverse_this;
				reverse_this << t_num;
				output << "   =[] t" << t_num << ", " << temp2 << ", " << indexes.top() << endl;
				temp2 = "t" + reverse_this.str();
				++t_num;
			}
			vars.pop();
			indexes.pop();
			string temp3 = comps.top();
			comps.pop();
			output << "   " << temp3 << " p" << p_num << ", " << temp2 << ", " << temp << endl;
			predicates.push(p_num);
			++p_num;
			}
			| TRUE {
				output << "   == p" << p_num << ", 1, 1" << endl;
				predicates.push(p_num);
				++p_num;			
			}
			| NOT TRUE {
				output << "   == p" << p_num << ", 1, 0" << endl;
				predicates.push(p_num);
				++p_num;				
			}
			| FALSE {
				output << "   == p" << p_num << ", 1, 0" << endl;
				predicates.push(p_num);
				++p_num;			
			}
			| NOT FALSE {
				output << "   == p" << p_num << ", 1, 1" << endl;
				predicates.push(p_num);
				++p_num;
			}

			| L_PAREN bool_exp R_PAREN 
			| NOT L_PAREN bool_exp R_PAREN 
			| NOT expression comp expression {
			string temp = vars.top();
			if (indexes.top() != "-1"){
				stringstream reverse_this;
				reverse_this << t_num;
				output << "   =[] t" << t_num << ", " << temp << ", " << indexes.top() << endl;
				temp = "t" + reverse_this.str();
				++t_num;
			}
			vars.pop();
			indexes.pop();
			string temp2 = vars.top();
			if (indexes.top() != "-1") {
				stringstream reverse_this;
				reverse_this << t_num;
				output << "   =[] t" << t_num << ", " << temp2 << ", " << indexes.top() << endl;
				temp2 = "t" + reverse_this.str();
				++t_num;
			}
			vars.pop();
			indexes.pop();
			string temp3 = comps.top();
			comps.pop();
			output << "   " << temp3 << " p" << p_num << ", " << temp2 << ", " << temp << endl;
			++p_num;
			output << "   == p" << p_num << ", p" << p_num - 1 << ", 0" << endl;
			predicates.push(p_num);
			++p_num;		
			}
			;

expression: multiplicative_exp expression1 
			;

expression1: 
			| ADD multiplicative_exp expression1 {
				string temp = vars.top();
				if (indexes.top() != "-1") {
					stringstream reverse_this;
					reverse_this << t_num;
					output << "   =[] t" << t_num << ", " << temp << ", " << indexes.top() << endl;
					temp = "t" + reverse_this.str();
					++t_num;
				}
				vars.pop();
				indexes.pop();
				string temp2 = vars.top();
				if (indexes.top() != "-1") {
					stringstream reverse_this;
					reverse_this << t_num;
					output << "   =[] t" << t_num << ", " << temp2 << ", " << indexes.top() << endl;
					temp2 = "t" + reverse_this.str();
					++t_num;
				}
				vars.pop();
				indexes.pop();
				output << "   + t" << t_num << ", " << temp2 << ", " << temp << endl;
				stringstream reverse_this;
				reverse_this << t_num;
				vars.push("t" + reverse_this.str());
				indexes.push("-1");
				++t_num;			
			}
			| SUB multiplicative_exp expression1 {
				string temp = vars.top();
				if (indexes.top() != "-1") {
					stringstream reverse_this;
					reverse_this << t_num;
					output << "   =[] t" << t_num << ", " << temp << ", " << indexes.top() << endl;
					temp = "t" + reverse_this.str();
					++t_num;
				}
				vars.pop();
				indexes.pop();
				string temp2 = vars.top();
				if (indexes.top() != "-1") {
					stringstream reverse_this;
					reverse_this << t_num;
					output << "   =[] t" << t_num << ", " << temp2 << indexes.top() << endl;
					temp2 = "t" + reverse_this.str();
					++t_num;
				}
				vars.pop();
				indexes.pop();
				output << "   - t" << t_num << ", " << temp2 << ", " << temp << endl;
				stringstream reverse_this;
				reverse_this << t_num;
				vars.push("t" + reverse_this.str());
				indexes.push("-1");
				++t_num;
			}
			;

multiplicative_exp: term multiplicative_exp1 
			;

multiplicative_exp1:  MULT term multiplicative_exp1 {
				string temp = vars.top();
				if (indexes.top() != "-1") {
					stringstream reverse_this;
					reverse_this << t_num;
					output << "   =[] t" << t_num << ", " << temp << ", " << indexes.top() << endl;
					temp = "t" + reverse_this.str();
					++t_num;
				}
				vars.pop();
				indexes.pop();
				string temp2 = vars.top();
				if (indexes.top()!= "-1") {
					stringstream reverse_this;
					reverse_this << t_num;
					output << "   =[] t" << t_num << ", " << temp2 << ", " << indexes.top() << endl;
					temp2 = "t" + reverse_this.str();
					++t_num;
				}
				vars.pop();
				indexes.pop();
				output << " * t" << t_num << ", " << temp2 << ", " << temp << endl;
				stringstream reverse_this;
				reverse_this << t_num;
				vars.push("t" + reverse_this.str());
				indexes.push("-1");
				++t_num;			
			}
			| DIV term multiplicative_exp1 {
				string temp = vars.top();
				if (indexes.top() != "-1") {
					stringstream reverse_this;
					reverse_this << t_num;
					output << "   =[] t" << t_num << ", " << temp << ", " << indexes.top() << endl;
					temp = "t" + reverse_this.str();
					++t_num;
				}
				vars.pop();
				indexes.pop();
				string temp2 = vars.top();
				if (indexes.top() != "-1") {
					stringstream reverse_this;
					reverse_this << t_num;
					output << "   =[] t" << t_num << ", " << temp2 << indexes.top() << endl;
					temp2 = "t" + reverse_this.str();
					++t_num;
				}
				vars.pop();
				indexes.pop();
				output << " / t" << t_num << ", " << temp2 << ", " << temp << endl;
				stringstream reverse_this;
				reverse_this << t_num;
				vars.push("t" + reverse_this.str());
				indexes.push("-1");
				++t_num;
			}
		
			| MOD term multiplicative_exp1 {
				string temp = vars.top();
				if (indexes.top() != "-1") {
					stringstream reverse_this;
					reverse_this << t_num;
					output << "   =[] t" << t_num << ", " << temp << ", " << indexes.top() << endl;
					temp = "t" + reverse_this.str();
					++t_num;
				}
				vars.pop();
				indexes.pop();
				string temp2 = vars.top();
				if (indexes.top() != "-1") {
					stringstream reverse_this;
					reverse_this << t_num;
					output << "   =[] t" << t_num << ", " << temp2 << indexes.top() << endl;
					temp2 = "t" + reverse_this.str();
					++t_num;
				}
				vars.pop();
				indexes.pop();
				output << " % t" << t_num << ", " << temp2 << ", " << temp << endl;
				stringstream reverse_this;
				reverse_this << t_num;
				vars.push("t" + reverse_this.str());
				indexes.push("-1");
				++t_num;
			}
			| 
			;

term: var 
			| SUB var {
				string temp = vars.top();
				if (indexes.top() != "-1") {
					stringstream reverse_this;
					reverse_this << t_num;
					output << "   =[] t" << t_num << ", " << temp << ", " << indexes.top() << endl;
					temp = "t" + reverse_this.str();
					++t_num;
				}
				vars.pop();
				output << " -t" << t_num << ", 0, " << temp << endl;
				stringstream reverse_this;
				reverse_this << t_num;
				vars.push("t" + reverse_this.str());
				indexes.push("-1");
				++t_num;
			}
			| NUMBER {
				vars.push(string($1));
				indexes.push("-1");			
			}
			| SUB number 
			| L_PAREN expression R_PAREN {}
			| SUB L_PAREN expression R_PAREN {
				string temp = vars.top();
				vars.pop();
				output << " - t" << t_num << ", 0, " << temp << endl;
				stringstream reverse_this;
				reverse_this << t_num;
				vars.push("t" + reverse_this.str());
				indexes.push("-1");
				++t_num;
			}
			;

number: NUMBER {
				output << " - t" << t_num << ", 0, " << string($1) << endl;
				stringstream reverse_this;
				reverse_this << t_num;
				vars.push("t" + reverse_this.str());
				indexes.push("-1");
				++t_num;
			}
			| error
			;

var: ident_err {
			map<string, int>:: iterator it;
			it = decs.find(vars.top());
			if (it != decs.end()) {
				if ((*it).second != - 1) {
					error_msg = "Array " + vars.top().substr(1, vars.top().length()-1) + "needs an index. ";
					yyerror(error_msg.c_str());
				}
			}
			indexes.push("-1");
			
			}
			| ident_err l_paren expression R_PAREN {
				indexes.pop();
				indexes.push(vars.top());
				vars.pop();
			}
			;
	
l_paren: L_PAREN {
				map<string, int>::iterator it;
				it = decs.find(vars.top());
				if (it != decs.end()){
					if ((*it).second == -1) {
						error_msg = "variable " + vars.top().substr(1, vars.top().length()-1) + "does not need an index. " ;
						yyerror(error_msg.c_str());
					}
				}
			}
			;
ident_err: IDENT {
			string temp_string = string($1);
			if (decs.find("_" + temp_string) == decs.end()) {
				error_msg = temp_string +" is a POS was not declared. ";
				yyerror(error_msg.c_str());
			}
			else if (temp_string == "program" || temp_string == "beginprogram" || 
					temp_string == "endprogram" || temp_string == "integer" ||
					temp_string == "array" || temp_string == "of" ||
					temp_string == "if" || temp_string == "then" ||
					temp_string == "endif" || temp_string == "else" ||
					temp_string == "while" || temp_string == "do" ||
					temp_string == "beginloop" || temp_string == "endloop" ||
					temp_string == "continue" || temp_string == "read" ||
					temp_string == "write" || temp_string == "and" ||
					temp_string == "or" || temp_string == "not" ||
					temp_string == "true" || temp_string == "false") {
					
					error_msg = string($1) + " is reserved. ";
					yyerror(error_msg.c_str());
					}
			vars.push("_" + string($1));
			}
			;





%%

void yyerror(const char *msg) {
   printf("Error line %d, symbol %s: %s\n", currLine, yytext, msg);
   exit(0);
}

