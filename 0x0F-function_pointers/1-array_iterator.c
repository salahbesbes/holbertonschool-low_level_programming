#include "function_pointers.h"

/**
* array_iterator - 
* @array: array
* @size: size of array
* @action: pointer to a function
* Return: void
*/

void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int i;

	for (i = 0; i < size; i++)
		action(array[i]);
}
