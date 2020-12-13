#include "lists.h"

/**
* name - des
* @arg1: des
*
* Return: 1
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
