#include "holberton.h"

/**
 * _abs - check the code for Holberton School students.
 * @n: blablabal
 *
 * Return: Always result.
 */

int _abs(int n)
{
	int result;

	if (n < 0)
		result = n * -1;
	else
		result = n;
	return (result);
}

