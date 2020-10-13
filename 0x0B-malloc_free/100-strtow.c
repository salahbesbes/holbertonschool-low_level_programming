#include <stdio.h>
#include <stdlib.h>
#include "holberton.h"

/**
* strtow - transform a long string into words and save them into array of
* string
* @str: string
*
* Return: array of strings
*/

char **strtow(char *str)
{
	int i = 0, j = 0, k = 0;
	char **p = malloc(50 * sizeof(char *));

	if (!p)
	{
		free(p);
		return (NULL);
	}

	for (i = 0; i < 50; i++)
	{
		p[i] = malloc(100 * sizeof(char));
		if (!p[i])
			{
				for(; i >= 0; i--)
					free(p[i]);
				free(p);
			}
	}
	i = 0;
	while (str[k])
	{
		if (str[k] == ' ' && j > 0)
		{
			p[i][j] = '\0';
			j = 0;
			i++;
		}
		else if (str[k] != ' ')
		{
			p[i][j] = str[k];
			j++;
		}

		k++;
	}
	if (j > 0)
	{
		p[i][j] = '\0';
		j = 0;
		i++;
	}
	p[i] = NULL;

	return (p);
}

