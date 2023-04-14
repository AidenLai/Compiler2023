all: compiler

compiler: lex.yy.o symbol.o symboltable.o
	g++ lex.yy.o symbol.o symboltable.o -ll -ly -std=c++11 -Wno-deprecated-register

lex.yy.o: lex.yy.cpp
	g++ -c lex.yy.cpp

symbol.o: symbol.cpp
	g++ -c symbol.cpp

symboltable.o: symboltable.cpp
	g++ -c symboltable.cpp

lex.yy.cpp: scanner.l
	lex -o lex.yy.cpp scanner.l


clean:
	rm compiler lex.yy.cpp y.tab.* ./jasmFile/*.jasm *.class
