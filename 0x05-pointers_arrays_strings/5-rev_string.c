#include "holberton.h"
#include <stdio.h>
/**
 * rev_string - everses a string.
 * @s: string
 * return: string
 */

void rev_string(char *s)
{
	int length = 0, i;

	for (i = 0; s[i]; i++)
		length++;
	char *start = s, *end = s + length - 1, tmp;

	for (i = 0; i < length / 2; i++)
	{
		tmp = *end;
		*end = *start;
		*start = tmp;
		start++;
		end--;
	}
}


