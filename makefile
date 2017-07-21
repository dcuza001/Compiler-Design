all: bison.o lex.o main.o
		g++ bison.o lex.o main.o -o parser -lfl -g

lex.o: lex.yy.c
		g++ -c lex.yy.c -o lex.o

lex.yy.c: phase1.lex
		flex phase1.lex

bison.o: mini_l.tab.c
		g++ -c mini_l.tab.c -o bison.o

mini_l.tab.c: mini_l.y
		bison -v -d mini_l.y

main.o: main.cc
		g++ -c main.cc -o main.o

clean: 
		rm -f parser lex.yy.c mini_l.tab.* mini_l.output *.o a.out *.mil *.stat
