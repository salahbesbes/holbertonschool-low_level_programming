#include "holberton.h"

/**
 * print_to_98 - check the code for Holberton School students.
 * caseLessAndPositive - blablabla
 * caseGreater - blablabal
 * caseNegative - blablababal
 * @n: blablabla
 *
 * Return: nb to 98
 */

void caseLessAndPositive(int n)
{
	for (i = n; i <= 98; i++)
	{
		x = i / 10;
		y = i % 10;
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
	for (i = n; i >= 98; i--)
	{
		z = i / 100;
		x = i / 10 % 10;
		y = i % 10;
		if (i >= 100)
			_putchar(z + '0');
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
	for (i = n; i <= 98; i++)
	{
		z = i / 100;
		x = i / 10 % 10;
		y = i % 10;
		if (i < 0)
		{
			_putchar(z * -1 + '0');
			_putchar(x * -1 + '0');
			_putchar(y * -1 + '0');
		}
		else
		{
			_putchar(z + '0');
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
	int i, x, y, z;

	if (n <= 98 && n > 0)
		caseLessAndPositive();
	if (n > i98)
		caseGreater();
	if (n < 0)
		caseNegative();
	_putchar('\n');
}
