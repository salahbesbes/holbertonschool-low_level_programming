#include "holberton.h"
#include <stdio.h>

/**
 * _strncpy - check the code for Holberton School students.
 *
 * @dest: empty array
 * @src: string
 * @n: nb if char u want to copy ( length of the string )
 *
 * Return: pointer to dest
 */


char *_strncpy(char *dest, char *src, int n)
{
	int i;

	for (i = 0; src[i] && i < n; i++)
	{
		dest[i] = src[i];
	}

	for ( ; i < n ; i++)
		dest[i] = '\0';

	return (dest);
}

