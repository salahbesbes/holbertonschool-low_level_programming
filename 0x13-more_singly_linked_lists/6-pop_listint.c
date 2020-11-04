#include "lists.h"




/**
* pop_listint - delete one and return the data found
* @head: header pointer
*
* Return: integer data
*/

int pop_listint(listint_t **head)
{
	listint_t *temp = *head;
	int count = 0;


	if (!*head)
		return (count);

	*head = temp->next;
	count = temp->n;
	free(temp);


	return (count);
}
