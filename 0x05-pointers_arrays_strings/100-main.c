#include "holberton.h"
#include <stdio.h>

/**
 * main - check the code for Holberton School students.
 *
 * Return: Always 0.
 */
int main(void)
{
	int n;

	n = _atoi("-2147483648");
	printf("%d\n", n);
	n = _atoi("2147483647");
	printf("%d\n", n);
	return (0);
}
