#include <stdio.h>
#include <stdlib.h>
#include "holberton.h"



/**
* replaceMem - allocate new memory and copy the content of the
* old one
* @new: pointer to new  location
* @p: old pointer to old location
* @size: size in bytes
* Return: void*
*/

void *replaceMem(char *new, void *p, unsigned int size)
{
	unsigned int i;

	new = malloc(size);
	if (!new)
	{
		free(new);
		return (NULL);
	}
	for (i = 0; *((char *)p + i); i++)
		new[i] = *((char *)p + i);
	free(p);
	return (new);
}


/**
* _realloc - reallocates memory using malloc and free
* @ptr: previous location of a pointer
* @old_size: the size of prev memory in bytes
* @new_size: new size in bytes
*
* Return: void*
*/

void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	char *new = NULL;

	if (ptr == NULL)
	{
		new = malloc(new_size);
		if (!new)
		{
			free(new);
			return (NULL);
		}
		return (new);
	}
	if (new_size == 0 && ptr)
	{
		free(ptr);
		return (NULL);
	}
	if (old_size != new_size)
	{
		new = replaceMem(new, ptr, new_size);
	}
	else
		return (ptr);
	return (new);
}
