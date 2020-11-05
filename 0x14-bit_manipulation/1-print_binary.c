
#include "holberton.h"


/**
* printB - print binary
* @n: unsigned long int
*
* Return: void
*/

void printB(unsigned long n)
{
	unsigned long mod, div;

	if (n == 0)
		return;
	div = n >> 1;
	mod = n - (div << 1);
	printB(n >> 1);
	_putchar(mod + '0');
}

/**
* print_binary - print an integer to bynary
* @n: unsigned long int
*
* Return: void
*/

void print_binary(unsigned long n)
{
	if (n == 0)
		_putchar('0');
	printB(n);
}
