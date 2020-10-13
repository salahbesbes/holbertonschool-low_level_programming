#include <stdio.h>
#include "holberton.h"
#include <stdlib.h>

/**
* alloc_grid - returns a pointer to a 2 dimensional array of integers.
* @width: int
* @height: int
*
* Return: a pointer to a new 2D array
*/

int **alloc_grid(int width, int height)
{
	int **p = malloc(height * sizeof(int *));
	int i, j;

	if (p == NULL)
		return (NULL);
	/* replaced by :int (*arr)[M] = malloc(sizeof(int[N][M]));*/
	if (height <= 0  && width <= 0)
		return (NULL);

	for (i = 0; i < height; i++)
	{
		p[i] = (int *)malloc(width * sizeof(int));
		if (p[i] == NULL)
			return (NULL);
	}

	for (i = 0; i < height; i++)
		for (j = 0; j < width; j++)
			*(*(p + i) + j) = 0;
	return (p);
}
