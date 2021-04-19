#include "search_algos.h"


/**
 * linear_search - search for integer
 * @pInt: array
 * @size: length of the array
 * @i: integer to search for
 * Return: position of the integer if found else -1
 */
int linear_search(int pInt[10], size_t size, int i)
{
	size_t j;
	int position = -1;

	if (pInt == NULL)
		return (position);
	for (j = 0; j < size; ++j)
	{
		printf("Value checked array[%zu] = [%d]\n", j, pInt[j]);
		if (pInt[j] == i)
		{
			position = (int) j;
			return (position);
		}
	}
	return (position);
}
