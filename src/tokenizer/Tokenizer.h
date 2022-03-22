//
// Copyright (C) Michael Steinmötzger 2022
// All rights reserved
//

#ifndef SHORTLANG_TOKENIZER_H
#define SHORTLANG_TOKENIZER_H

#endif //SHORTLANG_TOKENIZER_H
#include <string.h>



enum TokenType {
    // Literals
    STRING_LITERAL,
    NUMBER_LITERAL,

    //KEYWORD
    PROGRAM_KEYWORD,

    //SEPERATORS
    COMMA_SEPERATOR
};

struct Token {
    enum TokenType t_type;
    char* txt;
    int s_pos;
};

void lex(char* f_cont);