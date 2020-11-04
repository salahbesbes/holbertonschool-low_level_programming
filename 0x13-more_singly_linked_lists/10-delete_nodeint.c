#include "lists.h"
#include <stdlib.h>




/**
* delete_nodeint_at_index - delete a node from a list at some given index
* @head: header pointer
* @index: index of the node to be deleted
* Return: 1 onSuccess
* Error: -1
*/

int delete_nodeint_at_index(listint_t **head, unsigned int index)
{

	listint_t *prev = NULL, *current = NULL;
	unsigned int i = 0;


	if (!*head)
		return (-1);
	current = *head;
	/* we stop at the index of node to be deleted */
	for (i = 0; current && i < index; i++)
	{
		prev = current; /* next node is in (current->next)*/
		current = current->next;
	}
	/* if index == 0  there is no prev*/
	if (!prev)
		*head = current->next;
	else /*every other case */
		prev->next = current->next;
	/* prev node get liked to the node->next->next to her*/

	free(current);
	return (1);
}
