#include "search_algos.h"
#include <math.h>
/**
 * jump_search - The basic idea is to check fewer element
 * by jumping ahead by fixed steps or skipping some elements
 * in place of searching all elements.
 * @array: sorted array
 * @size: length of the array
 * @value: val to search for
 * Return: index if found or (-1)
 */
int jump_search(int *array, size_t size, int value)
{
	int step = sqrt(size), count = 0;

	if (array == NULL)
		return (-1);

	while (count <= (int)size + step)
	{
		if (array[count] >= value || count >= (int)size)
		{
			printf("Value found between indexes [%d] and [%d]\n", count - step, count);
			if (count >= (int)size)
			{
				return (my_linear_search(array, count - step, (int)size - 1, value));
			}
			return (my_linear_search(array, count - step, count + step, value));
		}
		printf("Value checked array[%d] = [%d]\n", count, array[count]);
		count += step;
	}
	return (-1);
}

/**
 * my_linear_search - search for integer
 * @ar: array
 * @start: start of the array
 * @length: length of the array
 * @val: integer to search for
 * Return: position of the integer if found else -1
 */
int my_linear_search(int *ar, int start, int length, int val)
{
	int j;
	int position = -1;

	if (ar == NULL)
		return (position);
	for (j = start; j < length; ++j)
	{
		printf("Value checked array[%d] = [%d]\n", j, ar[j]);
		if (ar[j] == val)
		{
			position = (int)j;
			return (position);
		}
	}
	return (position);
}
