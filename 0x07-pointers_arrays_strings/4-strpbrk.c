#include "holberton.h"

/**
 * _strpbrk -  searches a string for any of a set of bytes
 * @s: str
 * @accept: str
 *
 * Return: a str that matches one of the bytes in accept,
 *	or NULL if no such byte is found
 */


char *_strpbrk(char *s, char *accept)
{

	unsigned int i, j;
	int count = 0;

	for (i = 0; s[i]; ++i)
	{
		if (!count)
		{
			for (j = 0; accept[j]; ++j)
			{
				if (s[i] == accept[j])
				{
					count = i;
					break;
				}
			}
		}
	}
	return (s + count);
}

