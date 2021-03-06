#include "holberton.h"
#include <stdio.h>
/**
 * _strcmp - compare 2 string by their code escii
 * @s1: string
 * @s2: string
 *
 * Return:  0 or +int or - int
 */

int _strcmp(char *s1, char *s2)
{
	int i, diff = 0, foundDiff = 0;

	for (i = 0; s1[i] && !foundDiff;  i++)
	{
		diff = s1[i] - s2[i];
		if (diff != 0)
			foundDiff = 1;
	}
	return (diff);
}

