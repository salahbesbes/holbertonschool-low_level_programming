#include "holberton.h"

/**
 * print_number - check the code for Holberton School students.
 * @n: integer
 * Return: Always 0.
 */

void print_number(int n)
{
	int x, y, z, w;

	if (n < 0)
	{
		n = n * -1;
		_putchar('-');
	}
	x = n / 1000;
	y = n / 100 % 10;
	z = n / 10 % 10;
	w = n % 10;
	if (n < 0)
		_putchar('-');
	if (n > 1000)
		_putchar(x + '0');
	if (n > 100)
		_putchar(y + '0');
	if (n > 10)
		_putchar(z + '0');
	_putchar(w + '0');


}

