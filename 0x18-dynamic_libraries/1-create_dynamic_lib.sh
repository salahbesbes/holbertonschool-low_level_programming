#!/bin/bash
gcc -fPIC -c -Wall -pedantic -Werror -Wextra -c *.c
gcc -shared -o libholberton.so *.o
