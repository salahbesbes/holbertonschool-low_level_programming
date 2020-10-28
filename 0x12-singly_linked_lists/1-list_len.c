#include <stddef.h>
#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
* list_len - return the number of elment in the structure
* @h: pointer to the header
*
* Return: the nb of elment
*/

size_t list_len(const list_t *h)
{
	unsigned int count = 0;
	const list_t *current = h;

	while (current)
	{
		current = current->next;
		count++;
	}
	return (count);
}
