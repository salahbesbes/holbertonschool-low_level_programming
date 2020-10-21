#include "function_pointers.h"

/**
* array_iterator - print an array using FP
* @array: array
* @size: size of array
* @action: pointer to a function
* Return: void
*/

void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int i;

	if (action && array)
		for (i = 0; i < size; i++)
			action(array[i]);
}
