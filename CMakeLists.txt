cmake_minimum_required(VERSION 3.21)
project(GHLang C)

set(CMAKE_C_STANDARD 99)

add_executable(GHLang src/main.c src/tokenizer/Tokenizer.c src/tokenizer/Tokenizer.h src/utils/file_util.c src/utils/file_util.h)
