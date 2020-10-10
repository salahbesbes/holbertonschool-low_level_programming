#include "holberton.h"
#include <stdio.h>
/**
 * _strncat - concatenates two strings starting with n charachter
 * @dest: str
 * @src: str
 * @n: number
 *
 * Return: Pointer to the dest
 */


char *_strncat(char *dest, char *src, int n)
{	int i = 0, j = 0;
	char *p = dest;

	for (j = 0; dest[j]; j++)
		;
	for (i = 0; i < n && src[i]; i++, j++)
	{
		dest[j] = src[i];
	}

	dest[j] = '\0';
	return (p);

}
