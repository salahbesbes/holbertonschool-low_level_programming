#include"holberton.h"

/**
 * print_sign - check the code for Holberton School students.
 * @n: blabalbal
 *
 * Return: Always 0.
 */



int print_sign(int n)
{
	int result;

	if (n < 0)
	{
		result = -1;
		_putchar('-');
	}
	else if (n > 0)
	{
		result = 1;
		_putchar('+');
	}
	else
	{
		result = 0;
		_putchar('0');
	}
	return (result);
}

