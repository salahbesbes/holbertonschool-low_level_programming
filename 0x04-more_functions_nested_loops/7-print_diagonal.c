#include "holberton.h"

/**
 * print_diagonal - check the code for Holberton School students.
 * @n: integer
 * Return: Always 0.
 */
void print_diagonal(int n)
{
	int i, j;

	if (n <= 0)
		_putchar('\n');
	else
	{
		for (i = 0; i < n; i++)
		{
			for (j = 0; j <= i; j++)
			{
				if (i == j)
					_putchar('\\');
				else
					_putchar(' ');

			}
			_putchar('\n');
		}
	}
}
