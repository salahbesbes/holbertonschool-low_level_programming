# include "holberton.h"


/**
 * print_rev - print str in reverse
 * @s: string
 * Return: string
 */


void print_rev(char *s)
{
	int i, length;

	for (i = 0; s[i]; i++)
	{
		length++;
	}
	for (i = length - 1; i >= 0; i--)
	{
		_putchar(*(s + i));
	}
	_putchar('\n');

}
