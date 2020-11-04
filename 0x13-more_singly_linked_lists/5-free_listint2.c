#include "lists.h"


/**
* free_listint2 - free the list
* @head: pointer to the header
*
* Return: void
*/

void free_listint2(listint_t **head)
{
	listint_t *tmp = NULL;
	listint_t *temp2 = NULL;

	tmp = *head;
	temp2 = tmp;
	while (temp2)
	{
		temp2 = temp2->next;
		free(tmp);
		tmp = temp2;
	}

	*head = NULL;

}
