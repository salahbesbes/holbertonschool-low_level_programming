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
	int i = 0, j = 0, lenS1, lenS2;
	char *p;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	for (lenS1 = 0; s1[lenS1]; lenS1++)
	;
	for (lenS2 = 0; s2[lenS2]; lenS2++)
	;

	p = malloc(sizeof(char) * (lenS1 + lenS2 + 1));

	if (p == NULL)
		return (NULL);


	for (i = 0, j = 0; s1[i]; i++, j++)
		p[j] = s1[i];
	for (i = 0; s2[i]; i++, j++)
		p[j] = s2[i];
	p[j] = '\0';


	return (p);
}
