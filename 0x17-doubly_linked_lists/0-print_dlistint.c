#include "lists.h"



/**
* name - des
* @arg1: des
*
* Return: 1
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
		count ++;
	}
	return (count);
}


