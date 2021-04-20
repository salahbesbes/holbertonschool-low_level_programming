#include "search_algos.h"


/**
 * linear_search - search for integer
 * @array: array
 * @size: length of the array
 * @value: integer to search for
 * Return: position of the integer if found else -1
 */
int linear_search(int *array, size_t size, int value)
{
	size_t j;


	if (array == NULL)
		return (-1);
	for (j = 0; j < size; ++j)
	{
		printf("Value checked array[%lu] = [%d]\n", j, array[j]);
		if (array[j] == value)
		{
			return (j);
		}
	}
	return (-1);
}
