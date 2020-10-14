#include <stdio.h>
#include "holberton.h"
#include <stdlib.h>

/**
* malloc_checked - allocate memory usinf malloc
* @b: unsigned int
* 
* Return: a pointer  to the memory allocated
*/

void *malloc_checked(unsigned int b)
{
	unsigned int *p;

	p = malloc(b);

	if (!p)
		exit(98);
	return (p);
}
