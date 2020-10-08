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
 * isPal - comparing each characteri
 * @s: str
 * @i: counter left
 * @len: couter right
 *
 * Return:  0 or 1
 */

int isPal(char *s, int i, int len)
{
	if (s[i] != s[len])
		return (0);
	else if (i == len)
		return (1);
	else if (i < len)
		return (isPal(s, i + 1, len - 1));
	return (1);
}



/**
 * is_palindrome - if a string is a palindrome
 * @s: str
 *
 * Return: 0 or 1
 */
int is_palindrome(char *s)
{
	int len;

	len = theLength(s);

	if (len == 0 || len == 1)
		return (1);


	return (isPal(s, 0, len - 1));
}
