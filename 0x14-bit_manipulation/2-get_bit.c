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
