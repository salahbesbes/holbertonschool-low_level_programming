#include "holberton.h"
/**
 * _strlen - retrun legth of strng.
 * @s: string
 *
 * Return: length of s
 */
int _strlen(char *s)
{
	int i, length;

	for (i = 0; s[i]; i++)
	{
		length++;
	}
	return (length);
}
