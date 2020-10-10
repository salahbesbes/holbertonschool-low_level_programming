#include <stdio.h>

/**
 * _isdigit - check the code for Holberton School students.
 * @c: integer
 *
 * Return: Always 0.
 */
int _isdigit(int c)
{
	int result;

	if (c >= 48  && c <= 57)
		result = 1;
	else
		result = 0;
	return (result);
}
