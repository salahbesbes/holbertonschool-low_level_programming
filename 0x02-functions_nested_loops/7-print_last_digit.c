#include "holberton.h"

/**
 * print_last_digit - check the code for Holberton School students.
 * @n: integer
 * Return: Always 0.
 */


int print_last_digit(int n)
{
	int result, lastDigit;

	if (n < 0)
		result = n * -1;
	else
		result = n;

	lastDigit = result % 10;
	_putchar(lastDigit + '0');
	return (lastDigit);
}
