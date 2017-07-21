parse: phase1.lex mini_l.y
	bison -v -d mini_l.y
	flex phase1.lex
	g++ main.cc -o parser mini_l.tab.c lex.yy.c -lfl

clean:
	rm -f lex.yy.c mini_l.tab.* mini_l.output *.o *.mil parser
