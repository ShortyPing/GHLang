//
// Copyright (C) Michael Steinmötzger 2022
// All rights reserved
//

#include "file_util.h"

char* r_file(char* f_name) {
    FILE *fptr = fopen(f_name, "r");
    if(!fptr) {
        return NULL;
    }
    // define file size
    long f_size = 0;
    // file content
    char* f_cnt;
    //get file size
    fseek(fptr, 0L, SEEK_END);
    f_size = ftell(fptr);
    fseek(fptr, 0l, SEEK_SET);
    //allocate memory for file content
    f_cnt = malloc(f_size);
    size_t size= fread(f_cnt, 1, f_size, fptr);
    f_cnt[f_size] = 0;

    return f_cnt;
}