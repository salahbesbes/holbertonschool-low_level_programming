#include "lists.h"
#include <stdlib.h>


/**
* print_listint_safe - print linked list even if its circular
* @head: pouinter to the heder
*
* Return: nb of nodes
*/

size_t print_listint_safe(const listint_t *head)
{
	listint_t *current;
	int i, n, found = 0;
	listint_t *array[50];

	if (!head)
		return (0);
	current = (listint_t *)head;
	n = 0;
	while (current)
	{
		for (i = 0; i < n; i++)
		{
			if (array[i] == current)
			{
				found = 1;
				break;
			}
		}
		if (found)
		{
			printf("-> [%p] %d\n", (void *)current, current->n);
			exit(98);
		}
		printf("[%p] %d\n", (void *)current, current->n);
		array[n] = current;
		n++;
		current = current->next;
	}

	return (0);
}
