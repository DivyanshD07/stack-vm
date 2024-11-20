#ifndef LEXER_H
#define LEXER_H

#include <iostream>
#include <vector>
#include <cstdint>

typedef uint8_t my_byte;
typedef std::vector<std::string> strings;

enum State : my_byte {
	START,
	READCHAR,
	READBLOCK,
	SKIP,
	DUMP,
	COMMENT,
	END
};

class Lexer {
	bool my_isspace(char c);
	bool isspecial(char c);
	bool isgroup(char c);
	char end_char, beg_char;
	public:
	strings lex(std::string s);
};

#endif
