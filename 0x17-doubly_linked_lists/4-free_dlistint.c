#include "lists.h"
#include <stdlib.h>



/**
* free_dlistint - free_dlistint
* @head: head
*
* Return: void
*/
void free_dlistint(dlistint_t *head)
{
	if (head)
	{
		while (1)
		{
			if (head->prev)
				free(head->prev);
			if (!(head->next))
			{
				free(head);
				break;
			}
			head = head->next;
		}
	}
}
