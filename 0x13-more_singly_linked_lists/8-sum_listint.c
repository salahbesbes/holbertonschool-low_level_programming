#include "lists.h"


/**
* sum_listint - return the sum of all the data of the linked list
* @head: pointer to the head
*
* Return: sum of data
*/

int sum_listint(listint_t *head)
{
	int sum = 0;
	listint_t *current;

	if (!head)
		return (0);

	current = head;
	while (current)
	{
		sum += current->n;
		current = current->next;
	}

	return (sum);
}
