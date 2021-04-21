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
 * recur_check_for_occurence - return the first index occurence of a value
 * @arr: array of int sorted
 * @index: indef of val already found
 * @val: val we want search for the
 * Return: first occurence index
 */

int recur_check_for_occurence(int *arr, int index, int val)
{
	if (arr[index - 1] != val)
		return (index);
	return (recur_check_for_occurence(arr, index - 1, val));
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
	int mid = (end + start) / 2;

	print_array(ar, start, end);

	if (end >= start)
	{
		if (val == ar[mid])
		{
			return (recur_check_for_occurence(ar, mid, val));
		}

		else if (val < ar[mid])
		{
			if (search_interval(ar, start, mid - 1, val) != -1)
				return (recur_check_for_occurence(ar, mid, val));
			else
				return (-1);
		}
		else
		{
			return (search_interval(ar, mid + 1, end, val));
		}
	}
	return (-1);
}
