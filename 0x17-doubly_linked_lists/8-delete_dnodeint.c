#include "lists.h"
#include <stdlib.h>


/**
* delete_dnodeint_at_index - delete_dnodeint_at_index
* @head: head
* @index: index
*
* Return: 1 / 0
*/

int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *current = NULL, *prev = NULL, *Next = NULL;
	unsigned int i = 0;

	if (!*head)
		return (-1);
	current = *head;
	prev = (*head)->prev;
	Next = current->next;
	if (index == 0)
	{
		*head = Next;
		free(current);
		return (1);
	}

	while (current && i <= index)
	{
		if (i == index)
		{
			prev->next = Next;
			Next->prev = prev;
			free(current);
			break;
		}
		prev = current;
		current = current->next;
		Next = current->next;
		i++;
	}

	if (index > i)
		return (-1);
	return (1);
}
