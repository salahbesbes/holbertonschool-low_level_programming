#include "holberton.h"
#include <stdlib.h>
#include <stdio.h>
/**
* create_array - allocate an array of chars,
* and initializes it with a specific char.
* @size: size of array
* @c: value to initializes it
*
* Return: pointer to that array
*/

char *create_array(unsigned int size, char c)
{
	unsigned int i;
	char *p = malloc(size);

	if (p == NULL)
		return (NULL);
	if (size == 0)
		return (NULL);
	for (i = 0; i < size; i++)
	{
		p[i] = c;
	}
	return (p);
	free(p);
}
