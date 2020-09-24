#include "holberton.h"
#include <stdio.h>
/**
 * print_number - check the code for Holberton School students.
 * @n: integer
 * Return: Always 0.
 */

void print_number(int n)
{

	int y, num;
	unsigned int m = 1;

if (n < 0)
{
	_putchar('-');
	n *= -1;
}
num = n;
while (num != 0)
{
	num /= 10;
	m *= 10;
}
m /= 10;
while (m != 1 && n != 0)
{
	y = n / m;

	_putchar(y + '0');
	n %= m;
	m /= 10;
}
_putchar(n % 10 + '0');
}

