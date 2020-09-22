#include "holberton.h"

/**
 * print_times_table - check the code for Holberton School students.
 * @n: integer
 * Return: Always 0.
 */

void print_times_table(int n)
{
	int i, j, x, y, z, res;

	if (n >= 0 && n <= 15)
		for (i = 0; i < n + 1; i++)
		{
			for (j = 0; j < n + 1; j++)
			{
				res = i * j;
				z = res / 100;
				x = res / 10 % 10;
				y = res % 10;
				if (res >= 100)
					_putchar(z + '0');
				if (res >= 10)
					_putchar(x + '0');
				_putchar(y + '0');
				if (j != n)
				{
				_putchar(',');
				if (i * (j + 1) < 100)
					_putchar(' ');
				if (i * (j + 1) < 10)
					_putchar(' ');
				_putchar(' ');
				}
			}
			_putchar('\n');


		}
}
