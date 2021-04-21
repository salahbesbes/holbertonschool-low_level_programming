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
 * binary_search - binary_search
 * @array: array
 * @size: length of the array
 * @value: value we search
 * Return: index of the value if found or (-1)
 */
int binary_search(int *array, size_t size, int value)
{
	int mid, end = (int)size - 1, start = 0;

	if (array == NULL)
		return (-1);

	while (end >= start)
	{
		mid = (end + start) / 2;

		print_array(array, start, end);

		if (array[mid] == value)
			return (mid);
		else if (array[mid] < value)
			start = mid + 1;
		else
			end = mid - 1;
	}
	return (-1);
}
