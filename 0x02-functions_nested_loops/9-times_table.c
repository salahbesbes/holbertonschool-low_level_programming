#include "holberton.h"

/**
 * times_table - check the code for Holberton School students.
 *
 * Return: Always 0.
 */


void times_table(void)
{
	int i, j, x, y, res;

	while (i < 10)
	{
		for (j = 0; j < 10; j++)
		{
			res = i * j;
			x = res / 10;
			y = res % 10;
			if (res >= 10)
				_putchar(x + '0');
			_putchar(y + '0');
			if (j != 9)
			{
			_putchar(',');
			if (i * (j + 1) < 10)
				_putchar(' ');
			_putchar(' ');
			}
		}
		_putchar('\n');
		i++;
	}
}