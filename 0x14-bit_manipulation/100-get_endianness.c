#include "holberton.h"

/**
 * get_endianness - checks if computer is big or little edian
 * Return: 0 if big edian and 1 if little edian
 */

int get_endianness(void)
{

	int x = 1;
	char *y = (char *) &x;

	if ((int) y[3] == 1)
		return (0);
	else
		return (1);
}



