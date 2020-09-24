#include "holberton.h"

/**
 * more_numbers - check the code for Holberton School students.
 *
 * Return: Always 0.
 */
void more_numbers(void)
{
	int i, j;

	for (j = 0; j < 10; j++)
	{
		for (i = '0'; i <= '9'; i++ )
		{
			_putchar(i);
		}
		_putchar('\n');
	}
}
