#!/bin/bash
gcc -Wall -Werror -pedantic -Wextra -c ./*.c
ar -rcs liball.a ./*.o
