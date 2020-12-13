
#include "lists.h"


/**
* sum_dlistint - return the summ all node n
* @head: head
*
* Return: sum of all nodes
*/

int sum_dlistint(dlistint_t *head)
{
	int sum = 0;


	while (head)
	{
		sum += head->n;
		head = head->next;
	}
	return (sum);
}
