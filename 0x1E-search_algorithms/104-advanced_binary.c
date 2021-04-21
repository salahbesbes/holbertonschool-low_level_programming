#include "search_algos.h"



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

	if (end >= start)
	{
		printf("Searching in array:");
		for (i = start; i <= end; i++)
		{
			if (i == end)
				sep = '\n';
			printf(" %d%c", ar[i], sep);
		}
	}
}

/**
 * advanced_binary - binary_search
 * @array: array
 * @size: length of the array
 * @value: value we search
 * Return: index of the value if found or (-1)
 */
int advanced_binary(int *array, size_t size, int value)
{
	if (array == NULL || size < 1)
		return (-1);

	return (search_interval(array, 0, (int)size - 1, value));
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

	if (end >= start)
	{
		int mid = (end + start) / 2;

		print_array(ar, start, end);
		if (ar[start] == val)
			return (start);
		if (val == ar[mid] && ar[mid - 1] != val)
			return (mid);
		if (val <= ar[mid])
			return (search_interval(ar, start, mid, val));
		if (val > ar[mid])
			return (search_interval(ar, mid + 1, end, val));
	}
	return (-1);
}
