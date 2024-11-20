CFLAGS=-std=c++11

all: stack-assembler

stack-assembler: stack-assembler.o lexer.o
	$(CXX) $(CFLAGS) stack-assembler.o lexer.o -o $@

lexer.o: lexer.h lexer.cpp	
	$(CXX) $(CFLAGS) -c lexer.cpp

stack-assembler.o: lexer.h stack-assembler.cpp
	$(CXX) $(CFLAGS) -c stack-assembler.cpp

clean:
	rm -f stack-assembler *.o *.bin