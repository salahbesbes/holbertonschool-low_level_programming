#include "holberton.h"

/**
 * _memset - fills memory with a constant byte.(char)
 * @s: str
 * @b: char
 * @n: unsigned int
 *
 * Return: str filled by char n times
 */


char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; ++i)
	{
		s[i] = b;
	}
	return (s);
}
