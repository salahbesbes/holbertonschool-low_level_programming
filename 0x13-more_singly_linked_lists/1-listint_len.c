#include "lists.h"



/**
* listint_len - return nb of nodes
* @h: pointer to the header of the list
*
* Return: nb of elements in  the list
*/

size_t listint_len(const listint_t *h)
{
	size_t count = 0;

	while (h)
	{
		count++;
		h = h->next;
	}
	return (count);
}
