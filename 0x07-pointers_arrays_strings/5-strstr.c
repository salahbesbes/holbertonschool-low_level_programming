#include "holberton.h"
#include <stdio.h>

/**
 * _strstr - function that locates a substring.
 * @haystack: str
 * @needle: str
 *
 * Return: pointer to the beginning of the located substring,
 *	or NULL if the substring is not found.
 */

char *_strstr(char *haystack, char *needle)
{
	unsigned int i, j, found = 1;

	for (i = 0; haystack[i]; ++i)
	{
		found = 0;
		if (haystack[i] == needle[0])
		{
			for (j = 1; needle[j]; ++j)
			{
				if (haystack[i + j] && haystack[i + j] == needle[j])
				{
					found = 1;
				}
				else
				{
					found = 0;
					break;
				}
			}
		}
		if (found)
		{
			break;
		}
	}
	if (found)
	{
		return (haystack + i);
	}
	else
	{
		return (0);
	}
}

