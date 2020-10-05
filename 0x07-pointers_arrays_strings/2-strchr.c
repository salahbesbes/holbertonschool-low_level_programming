#include "holberton.h"
#include <stdio.h>

/**
 * _strchr -  locates a character in a string.
 * @s: str
 * @c: str
 *
 * Return: pointer to new str
 */

char *_strchr(char *s, char c)
{
	unsigned int i;
	char *p = s;

	if (c == '\0')
		return (s);

	for (i = 0; s[i]; ++i)
	{
		if (s[i] != c)
			return (s + i);
	}
	return (0);
}

