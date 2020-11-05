#include "holberton.h"

/**
* get_bit - get the value of the bit
* @n: unsigned long
* @index: index of the bit
*
* Return: index
* Error: -1
*/

int get_bit(unsigned long n, unsigned int index)
{
	unsigned long nb;

	if (index >= sizeof(unsigned long int) * 8)
		return (-1);

	nb = n >> index;
	return (nb & 1);
}


/**
* flip_bits - get nb
* @n: unsigned long
* @m: unsigned long
*
* Return: cout
*/

unsigned int flip_bits(unsigned long n, unsigned long m)
{
	unsigned long nb = 0;
	unsigned int count = 0, i;

	nb = n ^ m;
	for (i = 0; i < 64; i++)
		if (get_bit(nb, i))
			count++;
	return (count);
}
