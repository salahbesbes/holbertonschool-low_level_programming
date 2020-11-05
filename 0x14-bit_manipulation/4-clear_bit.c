#include "holberton.h"



/**
* clear_bit - sets the value of a bit to 0 at a given index.
* @n: unsigned long
* @index: index
* Return: 1
*/

int clear_bit(unsigned long *n, unsigned int index)
{
	unsigned long int nb = 1;

	if (index > 63)
		return (-1);

	nb <<= index;

	*n = *n & ~nb;

	return (1);
}
