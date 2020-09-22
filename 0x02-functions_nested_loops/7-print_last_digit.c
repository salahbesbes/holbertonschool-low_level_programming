#include "holberton.h"

/**
 * print_last_digit - check the code for Holberton School students.
 * @n: integer
 * Return: Always 0.
 */


int print_last_digit(int n)
{
	int lastDigit;

	if (n < 0)
		lastDigit = (n * -1) % 10;
	else
		lastDigit = n % 10;


	_putchar(lastDigit + '0');
	return (lastDigit);
}
