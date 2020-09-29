#include "holberton.h"

/**
 * puts_half - print the second half of the string
 * @str: string
 *
 * Return: void
 */

void puts_half(char *str)
{
	int i, length = 0;

	for (i = 0; str[i]; i++)
		length++;

	for (i = ((length - 1) / 2) + 1; i < length - 1; i++)
	{
		_putchar(str[i]);

	}
	_putchar('\n');
}
