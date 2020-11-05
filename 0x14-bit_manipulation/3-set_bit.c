#include "holberton.h"




/**
* set_bit - set the value of a bit at a given index to 1
* to set some bit to 1 we use | with some nb
*  expemple :nb = 00000(1)000000  its equal to 2^index
* @n: long unsigned nb
* @index: index of a bit
* Return: 1
* Error: 0
*/

int set_bit(unsigned long *n, unsigned int index)
{

	unsigned long int a = 1;

	if (index > 63)
		return (-1);
	*n = *n | (a << index);
	return (1);

}
