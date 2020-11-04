#include "lists.h"
#include <stdlib.h>


/**
* free_listint2 - free the list
* @head: pointer to the header
*
* Return: void
*/

void free_listint2(listint_t **head)
{
	listint_t *prev = NULL;
	listint_t *current = NULL;

	if (!head)
		return;

	current = *head;
	while (current)
	{
		prev = current;
		current = current->next;
		free(prev);
	}

	*head = NULL;

}
