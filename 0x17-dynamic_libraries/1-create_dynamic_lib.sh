#!/bin/bash
gcc -c -Wall -Werror -Wextra -fpic *.c
gcc -shared -o liball.so *.o
