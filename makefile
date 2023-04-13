all: compiler

compiler: lex.yy.cpp symbol.hpp symboltable.hpp
	g++ lex.yy.cpp symbol.hpp symboltable.hpp -ll -ly -std=c++11 -Wno-deprecated-register

lex.yy.cpp: scanner.l
	lex -o lex.yy.cpp scanner.l


clean:
	rm compiler lex.yy.cpp y.tab.* ./jasmFile/*.jasm *.class
