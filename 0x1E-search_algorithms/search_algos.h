
#ifndef INC_0X1E_SEARCH_ALGORITHMS_SEARCH_ALGOS_H_H
#define INC_0X1E_SEARCH_ALGORITHMS_SEARCH_ALGOS_H_H


#include <stdlib.h>
#include <stdio.h>


int linear_search(int *array, size_t size, int value);
int binary_search(int *array, size_t size, int value);
int jump_search(int *array, size_t size, int value);
int my_linear_search(int *ar, int start, int length, int val);
int interpolation_search(int *array, size_t size, int value);
int search(int *ar, int start, int end, int val);
#endif
