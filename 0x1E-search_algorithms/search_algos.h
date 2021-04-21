#ifndef SEARCH_ALGOS
#define SEARCH_ALGOS

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int advanced_binary(int *array, size_t size, int value);
int linear_search(int *array, size_t size, int value);
int binary_search(int *array, size_t size, int value);
int jump_search(int *array, size_t size, int value);
int my_linear_search(int *ar, int start, int length, int val);
int interpolation_search(int *array, size_t size, int value);
int search_interval(int *ar, int start, int end, int val);

#endif
