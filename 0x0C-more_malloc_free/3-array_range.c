#include <stdio.h>
#include <stdlib.h>
#include "holberton.h"

/**
* array_range - allocate an array in memory that contain
* values from min to max (both included)
* @min: int
* @max: int
*
* Return: new pointer to that array
*/

int *array_range(int min, int max)
{

	int *p;
	int i;

	if (min > max)
		exit(0);

	p = malloc(sizeof(int) * (max - min + 1));
	if (!p)
	{
		free(p);
		exit(0);
	}
	for (i = 0; i <= max; i++, min++)
	{
		p[i] = min;
	}
	return (p);
}
