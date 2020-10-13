#include <stdio.h>
#include <stdlib.h>
#include "holberton.h"

/**
* _strdup - allocated space in memory, which contains a copy of the
* string given as a parameter.
* @str: string to be coppied
*
* Return: apointer to a new location
*/

char *_strdup(char *str)
{
	int i, j;

	if (!str)
		return (NULL);
	for (i = 0; str[i]; i++)
	;

	char *p = malloc(i + 1);

	if (!p)
		return (NULL);
	for (j = 0; str[j]; j++)
	{
		p[j] = str[j];
	}
	p[j] = '\0';
	return (p);
}
