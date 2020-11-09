#include <stdio.h>
#include "holberton.h"
#include <stdlib.h>

/**
* strCopyAlloc - copy and allocate str
* @format: const str
*
* Return: new pointer
*/

char *strCopyAlloc(char *format)
{
	int i, len;
	char *p;

	for (len = 0; format[len]; len++)
	;

	p = malloc(sizeof(char) * (len + 1));
	
	if (!p)
		return (NULL);
	for (i = 0; format[i]; i++)
		p[i] = format[i];
	p[i] = '\0';

	return (p);
}
