#include "holberton.h"

/**
 * print_to_98 - check the code for Holberton School students.
 * @n: blablabla
 *
 * Return: nb to 98
 * caseLessAndPositive - blablabla
 * description: blablbalba
 * @n: blablabal
 *
 */

void caseLessAndPositive(int n)
{
	int i, x, y, z;

	for (i = n; i <= 98; i++)
	{
		z = i / 100;
		x = i / 10;
		y = i % 10;
		if (i >= 100)
			_putchar(z + '0');
		if (i >= 10)
			_putchar(x + '0');
		_putchar(y + '0');
		if (i != 98)
		{
			_putchar(',');
			_putchar(' ');
		}
	}
}

void caseGreater(int n)
{
	int i, x, y, z;

	for (i = n; i >= 98; i--)
	{
		z = i / 100;
		x = i / 10 % 10;
		y = i % 10;
		if (i >= 100)
			_putchar(z + '0');
		if (i >= 10)
			_putchar(x + '0');
		_putchar(y + '0');
		if (i != 98)
		{
			_putchar(',');
			_putchar(' ');
		}
	}

}

void caseNegative(int n)
{
	int i, x, y, z;

	for (i = n; i <= 98; i++)
	{
		z = i / 100;
		x = i / 10 % 10;
		y = i % 10;
		if (i < 0)
		{
			_putchar('-');
			if (z < 0)
				_putchar(z * -1 + '0');
			if (x < 0)
				_putchar(x * -1 + '0');
			_putchar(y * -1 + '0');
		}
		else
		{
			if (i >= 100)
				_putchar(z + '0');
			if (i >= 10)
				_putchar(x + '0');
			_putchar(y + '0');
		}
		if (i != 98)
		{
			_putchar(',');
			_putchar(' ');
		}
	}
}
void print_to_98(int n)
{
	if (n <= 98 && n >= 0)
		caseLessAndPositive(n);
	if (n > 98)
		caseGreater(n);
	if (n < 0)
		caseNegative(n);
	_putchar('\n');
}

