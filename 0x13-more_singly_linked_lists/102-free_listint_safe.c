#include "lists.h"


/**
* free_listint_safe - free list with a loop
* @h: header pointer
*
* Return: nb node
*/

size_t free_listint_safe(listint_t **h)
{
	listint_t *prev = NULL;
	listint_t *current = NULL;
	size_t count = 0;

	if (!h)
		return (0);

	current = *h;
	while (current)
	{
		prev = current;
		current = current->next;
		free(prev);
		count++;
	}

	*h = NULL;
	return (count);
}
