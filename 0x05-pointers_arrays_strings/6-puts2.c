#include "holberton.h"

/**
 * puts2 - cut into the string
 * @str: string
 *
 * Return: void
 */


void puts2(char *str)
{
	int i, length;

	for (i = 0; str[i]; i++)
		length++;
	char *p = str;

	for (i = 0; i < length - 1; i++)
	{
		if (*p % 2 == 0)
			_putchar(*p);
		p++;
	}
	_putchar('\n');
}

