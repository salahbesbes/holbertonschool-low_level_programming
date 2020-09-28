#include "holberton.h"

/**
 * _puts - prints a string, followed by a new line, to stdout
 * @str: string
 *
 * Return: void
 */



void _puts(char *str)
{
	int i;

	for (i = 0; str[i]; i++)
	{
		_putchar(*(str + i));
	}
	_putchar('\n');
}
