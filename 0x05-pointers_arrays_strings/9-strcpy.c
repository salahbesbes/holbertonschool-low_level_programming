#include "holberton.h"
#include <stdio.h>
/**
 * _strcpy - concate 2 strings
 * @dest: string
 * @src: string
 *
 * Return: print dest + src
 */

char * _strcpy(char *dest,char *src)
{
	int j, lengthSrc = 0;

	for (j = 0; src[j]; j++)
		lengthSrc++;
	for (j = 0; j < lengthSrc; j++)
	{
		dest[j] = src[j];
	}
	return (dest);
}
