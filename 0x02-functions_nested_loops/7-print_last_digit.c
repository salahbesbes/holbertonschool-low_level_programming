#include "holberton.h"

/**
 * print_last_digit - check the code for Holberton School students.
 * @n: integer
 * Return: Always 0.
 */


int print_last_digit(int i)
{

	int r = i % 10;

	if (r < 0)
	{
		r = r * -1;
	}
	_putchar ('0' + r);
	return (r);
}
