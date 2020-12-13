#include "lists.h"


/**
* get_dnodeint_at_index - get_dnodeint_at_index
* @head: head
* @index: position
*
* Return: head
*/
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	unsigned int i = 0;

	while (i <= index && head)
	{
		if (i == index)
			return (head);
		head = head->next;
		i++;
	}

	return (head);

}
