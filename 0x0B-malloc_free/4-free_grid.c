#include <stdio.h>
#include <stdlib.h>
#include "holberton.h"

/**
* free_grid - frees a 2 dimensional grid
* @grid: array of pointers
* @height: int
* Return: void
*/

void free_grid(int **grid, int height)
{
	int i;

	for (i = 0; i < height; i++)
	{
		free(grid[i]);
	}
	free(grid);

}
