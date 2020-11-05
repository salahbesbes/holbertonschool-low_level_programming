#include "holberton.h"



/**
* clear_bit - sets the value of a bit to 0 at a given index.
* @n: unsigned long
* @index: index
* Return: 1
*/

int clear_bit(unsigned long *n, unsigned int index)
{
	unsigned long int a = 1, nb = 0;

	if (index > 63)
		return (-1);
	nb = *n & (a << index);
	*n -= nb;

	return (0);
}
