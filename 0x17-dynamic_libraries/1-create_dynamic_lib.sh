#!/bin/bash
gcc -c -Wall -Wextra -Werror -pedantic -fpic *.c
gcc -shared -o liball.so *.o
