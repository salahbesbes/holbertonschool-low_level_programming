#include "lists.h"



/**
* print_dlistint - print list
* @h: header
*
* Return: nb of element found
*/
size_t print_dlistint(const dlistint_t *h)
{
	const dlistint_t *current = NULL;
	size_t count = 0;

	if (!h)
		return (count);
	current = h;
	while (current)
	{
		printf("%d\n", current->n);
		current = current->next;
		count++;
	}
	return (count);
}

