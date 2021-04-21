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

	return (search_interval(array, 0, (int)size, value));
}

/**
 * search_interval - binary search
 * @arr: array of int
 * @start: start of the segment of the array
 * @end: length of segment of the array
 * @val: search value
 * Return: index if found or -1
 */
int search_interval(int *arr, int start, int end, int val)
{
	int mid;

	// print_array(arr, start, end);
	while (end - 1 >= start)
	{
		mid = (end + start) / 2;

		print_array(arr, start, end);

		if (arr[mid] == val)
		{
			print_array(arr, mid, end);
			return (mid);
		}
		else if (arr[mid] < val)
			start = mid + 1;
		else
			end = mid - 1;
	}
	return (-1);
}
