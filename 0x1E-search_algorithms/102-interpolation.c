#include "search_algos.h"
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

	if (array == NULL && size > 0)
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
