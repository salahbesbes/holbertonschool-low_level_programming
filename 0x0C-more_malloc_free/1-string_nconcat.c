#include <stdio.h>
#include <stdlib.h>
#include "holberton.h"


/**
* string_nconcat - concatenates two strings.
* @s1: str
* @s2: str
* @n: unsigned int
*
* Return: pointer to a new str in memory
*/

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int lenS1 = 0, totalLength = 0;
	unsigned int i, j;
	char *p;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	for (lenS1 = 0; s1[lenS1]; lenS1++)
	;

	totalLength = lenS1 + n + 1;

	p = malloc(sizeof(char) * totalLength);

	if (!p)
	{
		free(p);
		return (NULL);
	}

	for (i = 0, j = 0; s1[i]; i++, j++)
		p[j] = s1[i];

	for (i = 0; i < n && s2[i]; i++, j++)
		p[j] = s2[i];

	p[j] = '\0';

	return (p);
}
