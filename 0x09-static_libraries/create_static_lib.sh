#!/bin/bash
gcc -Wall -Werror *.c -o output_executable
ar rcs liball.c *.o
