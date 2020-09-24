#include "holberton.h"

/**
 * print_triangle - check the code for Holberton School students.
 * @size: size of square
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
				if (size - j > i)
					_putchar(' ');
				else
					_putchar('#');
			}
		_putchar('\n');
		}

}
