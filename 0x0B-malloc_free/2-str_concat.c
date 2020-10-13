#include <stdio.h>
#include <stdlib.h>
#include "holberton.h"

/**
* str_concat - concate 2 strings and save the result on new location
* @s1: str
* @s2: str
* Return: new location of the new word s1+s2
*/

char *str_concat(char *s1, char *s2)
{

	if (!*s1 && s2)
		return (s2);
	else if (s1 && !*s2)
		return (s1);
	else if (s1 && s2)
	{
	int totalLength = 0, lenS1 = 0, lenS2 = 0, i, j;
	char *p = malloc(totalLength);
	
	if (!p)
		return (NULL);
	for (lenS1 = 0; s1[lenS1]; lenS1++)
	;

	for (lenS2 = 0; s2[lenS2]; lenS2++)
	;
	totalLength = lenS1 + lenS2;

	for (i = 0, j = -1; i < totalLength; i++)
	{
		if (i < lenS1)
			p[i] = s1[i];
		if (i >= lenS1)
		{
			j++;
			p[i] = s2[j];
		}
	}
	p[totalLength] = '\0';
	return (p);
	}
	else
		return (NULL);
}
