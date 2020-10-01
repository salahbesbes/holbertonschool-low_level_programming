#include "holberton.h"

/**
 * reverse_array - reverse and array
 * @a: array
 * @n: integer
 *
 * Return: reversed array
 */

void reverse_array(int *a, int n)
{
	int i, tmp;

	for (i = 0; i < n / 2; i++)
	{
		tmp = a[i];
		a[i] = a[n - 1 - i];
		a[n - 1 - i] = tmp;
	}
}
