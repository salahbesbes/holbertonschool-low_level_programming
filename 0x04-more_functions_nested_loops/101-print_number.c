#include "holberton.h"
#include <stdio.h>
/**
 * print_number - check the code for Holberton School students.
 * @n: integer
 * Return: Always 0.
 */

void print_number(int n)
{


int i = 1;
int num;
if (n < 0)
{
	_putchar('-');
	n *= -1;
}

num = n;
do {
	i *= 10;
	n /= 10;
} while (n);
i /= 10;
do {
	_putchar(num / i + '0');
	num %= i;
	i /= 10;
} while (num);
}
