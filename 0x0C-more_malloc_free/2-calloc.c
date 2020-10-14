#include <stdio.h>
#include <stdlib.h>
#include "holberton.h"

/**
* _calloc -  allocates memory for an array, using malloc
* containing nmemb of element (type of element is defined by the size)
* @nmemb: nb element
* @size: size of element
* Return: pointer to new array
*/

void *_calloc(unsigned int nmemb, unsigned int size)
{
	unsigned int i;
	void *p;

	if (nmemb == 0 || size == 0)
		return (NULL);
	switch (size)
	{
	case 1:
		p = malloc(sizeof(char) * nmemb);
		if (!p)
		{
			free(p);
			return (NULL);
		}
		for (i = 0; i < nmemb; i++)
			*((char *)p + i) = 0;
		return ((char *)p);
	case 4:
		p = malloc(sizeof(int) * nmemb);
		if (!p)
		{
			free(p);
			return (NULL);
		}
		for (i = 0; i < nmemb; i++)
			*((int *)p + i) = 0;
		return ((int *)p);
	case 8:
		p = malloc(sizeof(long) * nmemb);
		if (!p)
		{
			free(p);
			return (NULL);
		}
		for (i = 0; i < nmemb; i++)
			*((long *)p + i) = 0;
		return ((long *)p);
	}
	return (NULL);
}
