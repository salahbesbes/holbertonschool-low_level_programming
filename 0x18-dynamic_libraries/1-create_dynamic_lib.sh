#!/bin/bash
gcc -fPIC -Wall -pedantic -Werror -Wextra -c *.c
gcc -shared -o liball.so *.o
