#!/bin/bash
gcc -fPIC -c -Wall -pedantic -Werror -Wextra  *.c
gcc -shared -o libholberton.so *.o
