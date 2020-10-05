#include "holberton.h"
#define NULL 0
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
	unsigned int i, j;
	int count, lenNeedle, found = 0;
	char *p = haystack + 1, *a = needle + 1;

	for (lenNeedle = 0; needle[lenNeedle]; ++lenNeedle)
	;

	for (i = 0; haystack[i]; ++i)
	{
		for (j = 0; needle[j]; ++j)
		{
			if (haystack[i] == needle[j] && p[i] == a[j] && !count)
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
		return (NULL);
}

