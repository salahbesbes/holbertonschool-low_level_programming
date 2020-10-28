#include "lists.h"
#include <stdlib.h>
/**
* free_list - free linked list
* @head: pointer to the header of the list
*
* Return: void
*/

void free_list(list_t *head)
{
	list_t *start = head;

	while (head)
	{
		start = head;
		head = head->next;
		free(start->str);
		free(start);

	}
}
