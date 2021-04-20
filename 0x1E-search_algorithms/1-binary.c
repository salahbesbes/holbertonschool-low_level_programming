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
	for (i = start; i < end; i++)
	{
		if (i == end - 1)
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
	if (array == NULL)
		return (-1);

	print_array(array, 0, (int)size);
	return (search_interval(array, 0, (int)size, value));
}

/**
 * search_interval - binary search
 * @ar: array of int
 * @start: start of the segment of the array
 * @end: length of segment of the array
 * @val: search value
 * Return: index if found or -1
 */
int search_interval(int *ar, int start, int end, int val)
{
	int mid = (end - start - 1) / 2;

	if (end - start > 1)
	{

		if (val == ar[mid] || val == ar[start])
			return (mid);

		else if (val < ar[mid])
		{
			print_array(ar, start, start + mid);
			return (search_interval(ar, start, start + mid, val));
		}
		else
		{
			mid += 1;
			print_array(ar, end - mid, end);
			return (search_interval(ar, end - mid, end, val));
		}
	}
	return (-1);
}
