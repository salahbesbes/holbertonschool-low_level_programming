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
	const listint_t *current;
	int found = 0;
	const listint_t *array[50];
	size_t i, n = 0;

	if (!head)
		return (0);
	current = head;

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
		array[n] = current;
		printf("[%p] %d\n", (void *)current, current->n);
		current = current->next;
		n++;
	}

	return (n);
}
