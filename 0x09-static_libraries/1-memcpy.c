#include "holberton.h"

/**
 * _memcpy - copies memory area.
 * @dest: str
 * @src: str
 * @n: unsigned int
 *
 * Return: pointer to new str
 */


char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n ; ++i)
	{
		dest[i] = src[i];
	}
	return (dest);
}

