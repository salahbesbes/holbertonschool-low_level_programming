#include "lists.h"

/**
* X - 
* @a: 
*
* Return:
*/

listint_t *reverse_listint(listint_t **head)
{
	listint_t  *tail= NULL, *next;


	
	while (*head)
	{
		next = (*head)->next;
		(*head)->next = tail;
		tail = *head;
		*head = next;
	}

	*head = tail;
	return (*head);
}
