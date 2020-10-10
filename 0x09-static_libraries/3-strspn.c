#include "holberton.h"

/**
 * _strspn - gets the length of a prefix substring
 * @s: str
 * @accept: substring
 *
 * Return: length of the the segment contains this substring
 */


unsigned int _strspn(char *s, char *accept)
{
	unsigned int i, j;
	int found, count = 0;

	for (j = 0; s[j]; ++j)
	{
		for (i = 0; accept[i]; ++i)
		{
			found = 0;
			if (accept[i] == s[j])
			{
				count++;
				found++;
				break;
			}
		}
		if (found)
			break;;
	}
	return (count);
}
