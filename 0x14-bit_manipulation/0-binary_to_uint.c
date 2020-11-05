

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
* binary_to_uint - convert a "0-1" string to binary nb
* @b: str
*
* Return: unsigned int
*/

unsigned int binary_to_uint(const char *b)
{

	unsigned int  j, num = 0;
	int i, len, ele;

	len = _strlen(b);
	i = 0;
	j = len - 1;
	while (i < len)
	{
		ele = b[i] - '0';

		if (ele != 0 && ele != 1)
			return (0);
		if (ele)
			num += 1 << j;
		i++;
		j--;
	}
	return (num);
}

