#include "holberton.h"
#include <stdio.h>


/**
 * print_array - prints n element of an array
 * @a: array
 * @n: length
 *
 * Return: elemnt of and array
 */

void print_array(int *a, int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		if (i != n - 1)
			printf("%d, ", *(a + i));
		else
			printf("%d", *(a + n - 1));
	}
	printf ("\n");
}
