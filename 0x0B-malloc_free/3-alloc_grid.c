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
	int i, j;
	int **p;

	if (width <= 0 || height <= 0)
		return (NULL);

	p = malloc(height * sizeof(*p));
	if (!p)
	{
		free(p);
		return (NULL);
	}

	for (i = 0; i < height; i++)
	{
		p[i] = malloc(width * sizeof(int));
		if (!p[i])
		{
			for (j = 0; i < height; j++)
			{
  				free(p[i]);
				return (NULL);
			}
		}
	}

	for (i = 0; i < height; i++)
		for (j = 0; j < width; j++)
			p[i][j] = 0;
	return (p);
}
