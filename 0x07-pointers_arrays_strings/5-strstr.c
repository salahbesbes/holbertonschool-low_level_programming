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
	unsigned int i, j, count = 0;
	char *p = haystack, *a = needle;
	char *zero = '\0';

	if (p != a)
		for (i = 0; needle[i]; ++i)
		{
			for (j = 0; haystack[j]; ++j)
			{
				if (needle[i] == haystack[j] && !count)
				{
					count = j;
					p += count;

					if (a != p)
						count == 0;
				}

			}
		}
	if (p == a)
		return (p);
	else
		return (zero);
}

