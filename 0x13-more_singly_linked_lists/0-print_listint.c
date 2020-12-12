#include "lists.h"


/**
* print_listint - print all linked list and return nb of nodes
* @h: head pointer to the first node
*
* Return: nb of nodes
*/

size_t print_listint(const listint_t *h)
{
	size_t count = 0;

	while (h)
	{
		printf("%d\n", h->n);
		count++;
		h = h->next;
	}
	return (count);
}
