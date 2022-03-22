//
// Copyright (C) Michael Steinmötzger 2022
// All rights reserved
//

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "utils/file_util.h"
#include "tokenizer/Tokenizer.h"

#define EXIT_OUT_OF_MEMORY                  3

void term(int status) {
    printf("Exit with code (%d)\n", status);
    exit(status);
}

int main(int argc, char** argv) {

    if(argc < 2) {
        printf("Not enough arguments provided\n");
        term(EXIT_FAILURE);
    }


    char* f_cnt = r_file(argv[1]);

    //exit when cannot open file
    if(!f_cnt) {
        printf("Cannot open file!\n");
        term(EXIT_FAILURE);
    }

    lex(f_cnt);
    term(EXIT_SUCCESS);
}
