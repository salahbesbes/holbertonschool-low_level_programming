#include "function_pointers.h"

/**
* int_index - compaire between element of an array using
* function pointer
* @array: array
* @size: size of an array
* @cmp: pointer to function
*
* Return: 0 / -1
*/

int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (size <= 0)
		return (-1);
	for (i = 0; i < size; i++)
	{
		if (cmp(array[i]) != 0)
			return (i);
	}
	return (-1);
}
