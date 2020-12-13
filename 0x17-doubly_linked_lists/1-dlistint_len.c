#include "lists.h"

/**
* dlistint_len - get length
* @h: head
*
* Return: int
*/
size_t dlistint_len(const dlistint_t *h)
{
	size_t count = 0;

	if (h)
	{
		while (h)
		{
			count++;
			h = h->next;
		}
	}
	return (count);
}
