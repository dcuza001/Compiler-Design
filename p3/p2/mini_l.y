%{
 #include <stdio.h>
 #include <stdlib.h>
 void yyerror(const char *msg);
 extern int currLine;
 extern int currPos;
 extern int yyleng;
 FILE * yyin;
%}

%union{
  int ival;
  char* idval;
}

%error-verbose
%start prog_start

%token <idval> IDENT VAR 
%token <ival> NUMBER INTEGER



%type <idval> error prog_start program ident mult div add sub comp begin_program end_program semicolon colon comma assign l_paren r_paren integer array of if then endif while beginloop endloop read write dec dec1 dec2 statement statement1 block block2 var var_p if_p expression expression1 multiplicative_exp multiplicative_exp1 term term1 else do continue and or not true false bool_exp bool_exp1 relation_n_exp relation_n_exp1 relation_exp relation_exp1 number

%left PROGRAM BEGIN_PROGRAM END_PROGRAM INTEGER R_PAREN L_PAREN SEMICOLON COLON COMMA ASSIGN ARRAY OF IF THEN ENDIF ELSE WHILE DO BEGINLOOP ENDLOOP CONTINUE READ WRITE AND OR NOT TRUE FALSE MULT DIV ADD SUB MOD EQ NEQ LT GT LTE GTE END

%nonassoc UMINUS


%% 
prog_start: program ident semicolon block end_program {
	printf("prog_start -> program ident semicolon block end_program \n");}| error;

program: PROGRAM {printf("program -> PROGRAM \n");} | error;

ident: IDENT {printf("ident -> IDENT (%s) \n", $1);};

add: ADD {printf("add -> ADD \n");};

sub: SUB {printf("sub -> SUB \n");};

mult: MULT {printf("mult -> MULT \n");};

div: DIV {printf("div -> DIV \n");};

mod: MOD {printf("mod -> MOD \n");};

comp: EQ {printf("comp -> EQ \n");}
			| NEQ {printf("comp -> NEQ \n");}
			| LTE {printf("comp -> LTE \n");}
			| GTE {printf("comp -> GTE \n");}
			| LT {printf("comp -> LT \n");}
			| GT {printf("comp -> GT \n");};

semicolon: SEMICOLON { printf("semicolon -> SEMICOLON \n");}| error;

colon: COLON {printf("colon -> COLON \n"); }| error;

comma: COMMA {printf("colon -> COMMA \n"); };

assign: ASSIGN {printf("assign -> ASSIGN \n");};

l_paren: L_PAREN {printf("l_paren -> L_PAREN \n"); };

r_paren: R_PAREN {printf("r_paren -> R_PAREN \n");};

begin_program: BEGIN_PROGRAM {printf("begin_program -> BEGIN_PROGRAM \n");}| error;

end_program: END_PROGRAM {printf("end_program -> END_PROGRAM \n"); }| error;

integer: INTEGER {printf("integer -> INTEGER \n", $1);}| error;

number: NUMBER {printf("number -> NUMBER (%d) \n", $1);}| error;

array: ARRAY {printf("array -> ARRAY \n");};

of: OF {printf("of -> OF \n");};

if: IF {printf("if -> IF \n");};

then: THEN {printf("then -> THEN \n");};

endif: ENDIF {printf("endif -> ENDIF \n");};

and: AND {printf("AND -> \n");};

or: OR {printf("or -> OR \n");};

not: NOT {printf("not -> NOT \n");};

true: TRUE {printf("true -> TRUE \n");};

false: FALSE {printf("false -> FALSE \n");};

while: WHILE {printf("while -> WHILE \n");};

do: DO {printf("do -> DO \n");};

continue: CONTINUE {printf("continue -> CONTINUE \n");};

beginloop: BEGINLOOP {printf("beginloop -> BEGINLOOP \n");};

endloop: ENDLOOP {printf("endloop -> ENDLOOP \n");};

read: READ {printf("read -> READ \n");};

write: WRITE {printf("write -> WRITE \n");};

else: ELSE {printf("else -> ELSE \n");};

block: dec semicolon block2 {printf("block -> dec semicolon block2 \n");};

block2: dec semicolon block2 {printf("block2 -> dec semicolon block2 \n");}
			| begin_program statement semicolon statement1 {printf("block2 -> begin_program statement semicolon statement1 \n");};
			
statement: var assign expression {printf("statement -> var assign expression \n");}
			| if bool_exp then statement semicolon statement1 if_p endif {printf("statement -> bool_exp then statement semicolon statement1 if_p1 if_p endif \n");} 
			| while bool_exp beginloop statement semicolon statement1 endloop {printf("statement -> bool_exp beginloop statement semicolon statement1 endloop \n");}
			| do beginloop statement semicolon statement1 endloop while bool_exp {
            int s1 = pred_stack.top();
            pred_stack.pop();
            int l1 = label_stack.top();
            output << "\t== p" << p << ", p" << s1 << ", 0" << endl;
            output << "\t?:= L" << l1 << ", p" << p << endl;
            p++;
            label_stack.pop();
            
            }
			| read var var_p {
            while(!var_stack.empty() ) {
               if(index_stack.top() == "-1"){
                  std::stringstream rout;
                  rout << "\t.<" << var_stack.top() << endl;
                  rev_stack.push(rout.str() );
               }
               else{
                  std::stringstream rout;
                  rout << "\t.[]<" << var_stack.top() << ", " << index_stack.top() << endl;
                  rev_stack.push(rout.str() );

               }
               var_stack.pop();
               index_stack.pop();
            }
            while(!rev_stack.empty()){
               output << rev_stack.top();
               rev_stack.pop();
            } 
            
         }
			| write var var_p {
            while(!var_stack.empty() ) {
               if(index_stack.top() == "-1"){
                  std::stringstream rout;
                  rout << "\t.>" << var_stack.top() << endl;
                  rev_stack.push(rout.str() );
               }
               else{
                  std::stringstream rout;
                  rout << "\t.[]>" << var_stack.top() << ", " << index_stack.top() << endl;
                  rev_stack.push(rout.str() );

               }
               var_stack.pop();
               index_stack.pop();
            }
            while(!rev_stack.empty()){
               output << rev_stack.top();
               rev_stack.pop();
            }
             
         }
			| continue {printf("statement -> continue \n");};

statement1: statement semicolon statement1 {printf("statement1 -> statement semicolon statement1 \n");}| {printf("statement1 -> \n");};

dec: ident dec1 {printf("dec -> ident dec1 \n");};

dec1: comma ident dec1 {printf("dec1 -> comma ident dec1 \n");}
			| colon dec2 {printf("dec1 -> colon dec2 \n");};

dec2: integer {printf("dec2 -> integer \n");}
			| array l_paren number r_paren of integer {printf("dec2 -> array l_paren number r_paren of integer \n");};

if_p: else statement semicolon statement1 {printf("if_p -> else statement semicolon statement1 \n");}| {printf("if_p -> \n");};

var_p: comma var var_p {printf("var_p -> comma var var_p \n");}| {printf("var_p -> \n");};

var: ident {printf("var -> ident \n");}
			| ident l_paren expression r_paren {printf("var -> ident l_paren expression r_paren \n");};
multiplicative_exp: term multiplicative_exp1 ;

multiplicative_exp1:  mult term multiplicative_exp1 {
         s2 = var_stack.top();
         if(index_stack.top() != "-1" ){
            std::stringstream rout;
            rout << t;
            output << "\t=[] t" << ", " << s2 << ", " << index_stack.top() << endl;
            s2 = "t" + rout.str();
            t++;
         
         }
         var_stack.pop();
         index_stack.pop();
         s1 = var_stack.top();
         if(index_stack.top() != "-1"){
            std::stringstream rout;
            rout << t;
            output << "\t=[] t" << t << ", " << s1 << ", " << index_stack.top() << endl;
            s1 = "t" +rout.str();
            t++;

         }
         var_stack.pop();
         index_stack.pop();
         output << " * t" << t << ", " << s1 << ", " << s2 << endl;
         std::stringstream rout;
         rout << t;
         var_stack.push("t" + rout.str() );
         index_stack.push("-1");
         t++; 
   
   }
		| div term multiplicative_exp1 {
         s2 = var_stack.top();
         if(index_stack.top() != "-1" ){
            std::stringstream rout;
            rout << t;
            output << "\t=[] t" << ", " << s2 << ", " << index_stack.top() << endl;
            s2 = "t" + rout.str();
            t++;
         
         }
         var_stack.pop();
         index_stack.pop();
         s1 = var_stack.top();
         if(index_stack.top() != "-1"){
            std::stringstream rout;
            rout << t;
            output << "\t=[] t" << t << ", " << s1 << ", " << index_stack.top() << endl;
            s1 = "t" +rout.str();
            t++;

         }
         var_stack.pop();
         index_stack.pop();
         output << " / t" << t << ", " << s1 << ", " << s2 << endl;
         std::stringstream rout;
         rout << t;
         var_stack.push("t" + rout.str() );
         index_stack.push("-1");
         t++;      
      }
		| mod term multiplicative_exp1 {
         s2 = var_stack.top();
         if(index_stack.top() != "-1" ){
            std::stringstream rout;
            rout << t;
            output << "\t=[] t" << ", " << s2 << ", " << index_stack.top() << endl;
            s2 = "t" + rout.str();
            t++;
         
         }
         var_stack.pop();
         index_stack.pop();
         s1 = var_stack.top();
         if(index_stack.top() != "-1"){
            std::stringstream rout;
            rout << t;
            output << "\t=[] t" << t << ", " << s1 << ", " << index_stack.top() << endl;
            s1 = "t" +rout.str();
            t++;

         }
         var_stack.pop();
         index_stack.pop();
         output << " % t" << t << ", " << s1 << ", " << s2 << endl;
         std::stringstream rout;
         rout << t;
         var_stack.push("t" + rout.str() );
         index_stack.push("-1");
         t++;
         
         }
		| {printf("multiplicative_exp -> \n");};

relation_n_exp: relation_exp relation_n_exp1 ;

relation_n_exp1: and relation_exp relation_n_exp1 {
      int s2 = pred_stack.top();
      pred_stack.pop();
      int s1 = pred_stack.top();
      pred_stack.pop();
      output << "\t&& p" << p << ", p" << s1 << ", p" << s2 << endl;
      pred_stack.push();
      p++;
      
   }
			|;

relation_exp: not relation_exp1 {printf("relation_exp -> not relation_exp1 \n");}
			| relation_exp1 {printf("relation_exp -> relation_exp1 \n");};

relation_exp1: expression comp expression {
      s2 = var_stack.top();
      if(index_stack.top() != "-1" ){
         std::stringstream rout;
         rout << t;
         output << "\t=[] t" << ", " << s2 << ", " << index_stack.top() << endl;
         s2 = "t" + rout.str();
         t++;
         
      }
      var_stack.pop();
      index_stack.pop();
      s1 = var_stack.top();
      if(index_stack.top() != "-1"){
         std::stringstream rout;
         rout << t;
         output << "\t=[] t" << t << ", " << s1 << ", " << index_stack.top() << endl;
         s1 = "t" +rout.str();
         t++;

      }
      var_stack.pop();
      index_stack.pop();
      string c = c_stack.top();
      c_stack.pop();
      output << "\t" << c << " p" << p << ", " << s1 << ", " << s2 << endl;
   }
			| true {
            output << "\t== p" << p << ", 1, 1" << endl;
            pred_stack.push(p);
            p++;
            }
			| false {
            output << "\t== p" << p << ", 1, 0" << endl;
            pred_stack.push(p);
            p++;
            }
			| l_paren bool_exp r_paren ;			

expression: multiplicative_exp expression1 {printf("expression -> multiplicative_sub expression1 \n");};

expression1: add multiplicative_exp expression1 {
      s2 = var_stack.top();
      if(index_stack.top() != "-1" ){
         std::stringstream rout;
         rout << t;
         output << "\t=[] t" << ", " << s2 << ", " << index_stack.top() << endl;
         s2 = "t" + rout.str();
         t++;
         
      }
      var_stack.pop();
      index_stack.pop();
      s1 = var_stack.top();
      if(index_stack.top() != "-1"){
         std::stringstream rout;
         rout << t;
         output << "\t=[] t" << t << ", " << s1 << ", " << index_stack.top() << endl;
         s1 = "t" +rout.str();
         t++;

      }
      var_stack.pop();
      index_stack.pop();
      output << "\t+ t" << t << ", " << s1 << ", " << s2 << endl;
      std::stringstream rout;
      rout << t;
      var_stack.push("t" + rout.str() );
      index_stack.push("-1");
      t++;
   }
	| sub multiplicative_exp expression1 {
      s2 = var_stack.top();
      if(index_stack.top() != "-1" ){
         std::stringstream rout;
         rout << t;
         output << "\t=[] t" << ", " << s2 << ", " << index_stack.top() << endl;
         s2 = "t" + rout.str();
         t++;
         
      }
      var_stack.pop();
      index_stack.pop();
      s1 = var_stack.top();
      if(index_stack.top() != "-1"){
         std::stringstream rout;
         rout << t;
         output << "\t=[] t" << t << ", " << s1 << ", " << index_stack.top() << endl;
         s1 = "t" +rout.str();
         t++;

      }
      var_stack.pop();
      index_stack.pop();
      output << "\t- t" << t << ", " << s1 << ", " << s2 << endl;
      std::stringstream rout;
      rout << t;
      var_stack.push("t" + rout.str() );
      index_stack.push("-1");
      t++;
                     
   };

term: var {printf("term -> var \n");}
			| number {printf("term -> number \n");}
			| l_paren expression r_paren {printf("term -> l_paren expression r_paren \n");}
			| term1 {printf("term -> term1 \n");};

term1: sub term {printf("term1 -> sub term \n");};

bool_exp: relation_n_exp bool_exp1 {
      int s2 = pred_stack.top();
      pred_stack.pop();
      output << "\t== p" << p << ", p" << s2 << ", 0" << endl;
      pred_stack.push(p);
      p++;
   };

bool_exp1: or relation_n_exp bool_exp1 {
      int s2 = pred_stack.top();
      pred_stack.pop();
      int s1 = pred_stack.top();
      pred_stack.pop();
      output << "\t|| p" << p << ", p" << s1 << ", p" << s2 << endl;
      pred_stack.push(p);
      p++;
   }
	| ;


%%

int main(int argc, char **argv) {
   if (argc > 1) {
      yyin = fopen(argv[1], "r");
      if (yyin == NULL){
         printf("syntax: %s filename\n", argv[0]);
      }//end if
   }//end if
   yyparse(); // Calls yylex() for tokens.
   return 0;
}

void yyerror(const char *msg) {
   printf("** Line %d, position %d: %s\n", currLine, currPos, msg);
   exit(0);
}

