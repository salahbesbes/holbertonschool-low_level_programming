#include "lists.h"


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

	current = *head;
	prev = current;
	while (current)
	{
		current = current->next;
		free(prev);
		prev = current;
	}

	*head = NULL;

}
