#include "holberton.h"
#include <stdio.h>




/**
 * theLength - determine the legth of the string
 * @s: str
 *
 * Return: length
 */

int theLength(char *s)
{
	if (*s)
		return (1 + theLength(s + 1));
	else
		return (0);
}


/**
 * findChar - find char in te string and return its idex
 * @str: str
 * @s: str
 * @i: index
 * Return: index
 */
int findChar(char *str, char s, int i)
{
	if (*str == s)
		return (i);
	if (*str == '\0')
		return (-1);
	return (findChar(str + 1, s, i + 1));
}

/**
 * Compare - compare 2 string with special char *
 * can replace any char
 *
 * @s1: str
 * @s2: str
 * Return: 0 or 1
 */
int Compare(char *s1, char *s2)
{

	int diff, len, len1;

	len = theLength(s2);
	len1 = theLength(s1);

	if (len1 > 0 && *s2 == '\0')
		return (0);
	if (len == 1 && s2[0] == '*')
		return (1);
	if (s2[0] == '*' && s2[1] == '*')
		return (Compare(s1, s2 + 1));

	if (s2[0] == '*' && s2[1])
	{
		diff = findChar(s1, s2[1], 0);
		if (diff < 0)
			return (0);
		return (Compare(s1 + diff, s2 + 1));
	}
	if (s1[0] == s2[0] && s2[1])
		return (Compare(s1 + 1, s2 + 1));
	if (s1[0] != s2[0])
		return (0);
	return (1);
}




/**
 * wildcmp - compare 2 string with special char *
 * can replace any char
 *
 * @s1: str
 * @s2: str
 *
 * Return: 0 or 1
 */
int wildcmp(char *s1, char *s2)
{
	return (Compare(s1, s2));
}
