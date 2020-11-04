#include "lists.h"
#include <stdlib.h>



/**
* free_listint - free all the nodes
* @head: header of the list
*
* Return: void
*/

void free_listint(listint_t *head)
{
	/* we copy the head*/
	listint_t *current = head;

	/* if we start the loop by free we cant advance the counter*/
	/* we need to advance free and copy */
	while (head)
	{
		/* move the counter to the next node*/
		head = head->next;
		/* we free the previous node*/
		free(current);
		/* we we copy next node*/
		current = head;
	}
}
