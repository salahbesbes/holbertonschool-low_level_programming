#include "holberton.h"



int print_alphabet_x10(void)
{
	int i = 0;
	while (i <= 10)
	{
		print_alphabet();
		_putchar('\n');
		i++;
	}
	return (0);
}
