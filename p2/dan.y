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


/*
- change your mini_l.lex to the format from the solutions (remove printf and add returns for each token; add the yylval.dval = atof(yytext) thing for the alphabets)
- change the names of the tokens (based on your mini_l.lex phase1)
- change the names of everything that isnt tokens from phase1
- remove any token names i may have left in %type from my version
*/


/*change token names for %type, %left, the body and their printfs*/
%type <idval> error prog_start program ident add sub mult div comp semicolon colon comma assign l_paren r_paren begin_program end_program integer array of if then endif while beginloop endloop read write block block2 declaration declaration1 declaration2 statement statement1 else_state var var_pos if_pos expression expression1 multiplicative_exp multiplicative_exp1 term term1 else do continue and or not true false bool_exp bool_exp1 relation_and_exp relation_and_exp1 relation_exp relation_exp1 number

%left MULT DIV ADD SUB MOD EQ NEQ LT GT LTE GTE SEMICOLON COLON COMMA ASSIGN L_PAREN R_PAREN PROGRAM BEGIN_PROGRAM END_PROGRAM INTEGER ARRAY OF IF THEN ENDIF ELSE WHILE DO BEGINLOOP ENDLOOP CONTINUE READ WRITE AND OR NOT TRUE FALSE END

%nonassoc UMINUS

/*change the format to rashid's retarded way and rearrange the declarations, order doesnt matter*/

%% 
prog_start: program ident semicolon block end_program {
	printf("prog_start -> program ident semicolon block end_program \n");}
			| error
			;

program: PROGRAM {printf("program -> PROGRAM \n");} 
			| error
			;

ident: IDENT {printf("ident -> IDENT (%s) \n", $1);}
			;

add: ADD {printf("add -> ADD \n");}
			;

sub: SUB {printf("sub -> SUB \n");}
			;

mult: MULT {printf("mult -> MULT \n");}
			;

div: DIV {printf("div -> DIV \n");}
			;

mod: MOD {printf("mod -> MOD \n");}
			;

comp: EQ {printf("comp -> EQ \n");}
			| NEQ {printf("comp -> NEQ \n");}
			| LT {printf("comp -> LT \n");}
			| GT {printf("comp -> GT \n");}
			| LTE {printf("comp -> LTE \n");}
			| GTE {printf("comp -> GTE \n");}
			;

semicolon: SEMICOLON { printf("semicolon -> SEMICOLON \n");}
			| error
			;

colon: COLON {printf("colon -> COLON \n"); }
			| error
			;

comma: COMMA {printf("colon -> COMMA \n"); }
			;

assign: ASSIGN {printf("assign -> ASSIGN \n");}
			;

l_paren: L_PAREN {printf("l_paren -> L_PAREN \n"); }
			;

r_paren: R_PAREN {printf("r_paren -> R_PAREN \n");}
			;

begin_program: BEGIN_PROGRAM {printf("begin_program -> BEGIN_PROGRAM \n");}
			| error
			;

end_program: END_PROGRAM {printf("end_program -> END_PROGRAM \n"); }
			| error
			;

integer: INTEGER {printf("integer -> INTEGER \n", $1);}
			| error
			;

number: NUMBER {printf("number -> NUMBER (%d) \n", $1);}
			| error
			;


array: ARRAY {printf("array -> ARRAY \n");}
			;

of: OF {printf("of -> OF \n");}
			;

if: IF {printf("if -> IF \n");}
			;

then: THEN {printf("then -> THEN \n");}
			;

endif: ENDIF {printf("endif -> ENDIF \n");}
			;

while: WHILE {printf("while -> WHILE \n");}
			;

beginloop: BEGINLOOP {printf("beginloop -> BEGINLOOP \n");}
			;

endloop: ENDLOOP {printf("endloop -> ENDLOOP \n");}
			;

read: READ {printf("read -> READ \n");}
			;

write: WRITE {printf("write -> WRITE \n");}
			;

else: ELSE {printf("else -> ELSE \n");}
			;

do: DO {printf("do -> DO \n");}
			;

continue: CONTINUE {printf("continue -> CONTINUE \n");}
			;

and: AND {printf("AND -> \n");}
			;

or: OR {printf("or -> OR \n");}
			;

not: NOT {printf("not -> NOT \n");}
			;

true: TRUE {printf("true -> TRUE \n");}
			;

false: FALSE {printf("false -> FALSE \n");}
			;

block: declaration semicolon block2 {printf("block -> declaration semicolon block2 \n");}
			;

block2: declaration semicolon block2 {printf("block2 -> declaration semicolon block2 \n");}
			| begin_program statement semicolon statement1 {printf("block2 -> begin_program statement semicolon statement1 \n");}
			;
			
declaration: ident declaration1 {printf("declaration -> ident declaration1 \n");}
			;

declaration1: comma ident declaration1 {printf("declaration1 -> comma ident declaration1 \n");}
			| colon declaration2 {printf("declaration1 -> colon delcaration2 \n");}
			;

declaration2: integer {printf("declaration2 -> integer \n");}
			| array l_paren number r_paren of integer {printf("declaration2 -> array l_paren number r_paren of integer \n");}
			;

statement: var assign expression {printf("statement -> var assign expression \n");}
			| if bool_exp then statement semicolon statement1 if_pos endif {printf("statement -> bool_exp then statement semicolon statement1 if_pos1 if_pos endif \n");} 
			| while bool_exp beginloop statement semicolon statement1 endloop {printf("statement -> bool_exp beginloop statement semicolon statement1 endloop \n");}
			| do beginloop statement semicolon statement1 endloop while bool_exp {printf("statement -> beginloop statement semicolon statement1 endloop while bool_exp \n");}
			| read var var_pos {printf("statement -> read var var_pos \n");}
			| write var var_pos {printf("statement -> write var var_pos \n");}
			| continue {printf("statement -> continue \n");}
			;

statement1: statement semicolon statement1 {printf("statement1 -> statement semicolon statement1 \n");}
			| {printf("statement1 -> \n");}
			;

if_pos: else statement semicolon statement1 {printf("if_pos -> else statement semicolon statement1 \n");}
			| {printf("if_pos -> \n");}
			;

var_pos: comma var var_pos {printf("var_pos -> comma var var_pos \n");}
			| {printf("var_pos -> \n");}
			;

else_state: else statement semicolon statement1 {printf("else_state -> else statement semicolon statement1 \n");}
			| {printf("else_state -> \n");}
			; 

var: ident {printf("var -> ident \n");}
			| ident l_paren expression r_paren {printf("var -> ident l_paren expression r_paren \n");}
			;
			

expression: multiplicative_exp expression1 {printf("expression -> multiplicative_sub expression1 \n");}
			;

expression1: {printf("expression1 -> \n");}
			| add multiplicative_exp expression1 {printf("expression1 -> add multiplicative_sub expression1 \n");}
			| sub multiplicative_exp expression1 {printf("expression1 -> sub multiplicative_sub expression1 \n");}
			;

multiplicative_exp: term multiplicative_exp1 {printf("multiplicative_exp -> term multiplicative_exp1 \n");}
			;

multiplicative_exp1:  mult term multiplicative_exp1 {printf("multiplicative_exp -> mult term multiplicative_exp1 \n");}
			| div term multiplicative_exp1 {printf("multiplicative_exp -> div term multiplicative_exp1 \n");}
			| mod term multiplicative_exp1 {printf("multiplicative_exp -> mod term multiplicative_exp1 \n");}
			| {printf("multiplicative_exp -> \n");}
			;

term: var {printf("term -> var \n");}
			| number {printf("term -> number \n");}
			| l_paren expression r_paren {printf("term -> l_paren expression r_paren \n");}
			| term1 {printf("term -> term1 \n");}
			;

term1: sub term {printf("term1 -> sub term \n");}

bool_exp: relation_and_exp bool_exp1 {printf("bool_exp -> relation_and_exp bool_exp1 \n");}
			;

bool_exp1: or relation_and_exp bool_exp1 {printf("bool_exp1 -> or relation_and_exp bool_exp1 \n");}
			| {printf("bool_exp1 -> \n");}
			;

relation_and_exp: relation_exp relation_and_exp1 {printf("relation_and_exp -> relation_exp \n");}
			;

relation_and_exp1: and relation_exp relation_and_exp1 {printf("relation_and_exp1 -> and relation_exp relation_and_exp1 \n");}
			| {printf("relation_and_exp1 -> \n");}
			;

relation_exp: not relation_exp1 {printf("relation_exp -> not relation_exp1 \n");}
			| relation_exp1 {printf("relation_exp -> relation_exp1 \n");}
			;


relation_exp1: expression comp expression {printf("relation_exp -> expression comp expression \n");}
			| true {printf("relation_exp -> true \n");}
			| false {printf("relation_exp -> false \n");}
			| l_paren bool_exp r_paren {printf("relation_exp -> l_paren bool_exp r_paren \n");}
			;


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

