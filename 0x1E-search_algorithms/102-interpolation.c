#include "search_algos.h"

int search_interval(int *ar, int start, int end, int val);

/**
 * print_array - print an array
 * @ar: array
 * @start: start index
 * @end: end of the array
 * Return: void
 */
void print_array(int *ar, int start, int end)
{
	int i;
	char sep = ',';

	printf("Searching in array:");
	for (i = start; i <= end; i++)
	{
		if (i == end)
			sep = '\n';
		printf(" %d%c", ar[i], sep);
	}
}

/**
 * interpolation_search - binary_search
 * @array: array
 * @size: length of the array
 * @value: value we search
 * Return: index of the value if found or (-1)
 */
int interpolation_search(int *array, size_t size, int value)
{
	int pos, end = (int)size - 1, start = 0;

	if (array == NULL)
		return (-1);

	while (start <= end && value >= array[start] && value <= array[end])
	{
		pos = start + (((double)(end - start) / (array[end] - array[start]))
					* (value - array[start]));
		printf("Value checked array[%d] = [%d]\n", pos, array[pos]);

		if (array[pos] == value)
			return (pos);
		else if (array[pos] < value)
			start = pos + 1;
		else
			end = pos - 1;
	}
	printf("Value checked array[%d] is out of range\n", value);
	return (-1);
}
