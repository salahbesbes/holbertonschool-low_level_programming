#include "holberton.h"

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
	unsigned int i, j, count, lenNeedle, found = 0;
	char *p = haystack + 1, *a = needle + 1;
	char *zero = '\0';

	for (lenNeedle = 0; needle[lenNeedle]; ++lenNeedle)
	;

	for (i = 0; haystack[i]; ++i)
	{
		for (j = 0; j < lenNeedle; ++j)
		{
			if (haystack[i] == needle[j] && p[i] == a[j] && !count )
			{
				count = i;
			}

			if (haystack[i] == needle[j] && p[i] == a[j])
			{
				found++;
				break;
			}
		}
	}

	if (found == lenNeedle)
		return (haystack + count);
	else
		return (zero);
}

