#include "holberton.h"

/**
 * _strcat - concatenates two strings.
 * @dest: str
 * @src: str
 *
 * Return: String
 */


char *_strcat(char *dest, char *src)
{
	int i = 0, j = 0;

	for (j = 0; dest[j]; j++)
		;
	for (i = 0; src[i]; i++, j++)
	{
		dest[j] = src[i];
	}
	dest[j] = '\0';
	return (dest);
}
