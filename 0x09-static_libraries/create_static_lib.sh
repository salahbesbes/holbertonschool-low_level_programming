#!/bin/bash
gcc -Wall -pedantic -Werror -Wextra -c *.c
ar -rc libholberton.a *.o

