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

	for (i = 0; i < length; i++)
	{
		if (i % 2 == 0)
			_putchar(str[i]);
	}
	_putchar('\n');
}
