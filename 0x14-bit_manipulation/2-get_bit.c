#include "holberton.h"
/**
* _strlen - str length
* @str:  char*
*
* Return: length
*/

int _strlen(const char *str)
{
	int i;

	for (i = 0; str[i]; i++)
	;
	return (i);
}
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
	char array[255];
	unsigned long div, mod;
	unsigned int len;
	char *ptr = NULL;

	ptr = &array[254];
	*ptr = '\0';

	do {
	div = n >> 1;
	mod = n - (div << 1);
	*--ptr = mod + '0';
	n >>= 1;
	} while (n != 0);
	len = _strlen(ptr);
	if (len - 1 - index < 0)
		return (-1);
	if (index > len - 1)
		return (-1);
	return (ptr[len - 1 - index] - '0');
}
