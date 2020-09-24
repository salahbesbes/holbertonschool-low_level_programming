#include "holberton.h"

/**
 * print_triangle - check the code for Holberton School students.
 *
 * Return: Always 0.
 */

void print_triangle(int size)
{
	int i, j;

	if (size <= 0)
		_putchar('\n');
	else
		for (i = 0; i < size; i++)
		{
			for (j = 1; j <= size; j++)
			{
				if(i + j >= size)
					_putchar('#');
				else
					_putchar('.');
			}
		_putchar('\n');
		}

}
