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
<<<<<<< HEAD
	const listint_t *current;
=======
	const listint_t *current, *ptr;
>>>>>>> c2c734b... fix any diff
	int found = 0;
	const listint_t *array[50];
	size_t i, n = 0;

	if (!head)
		return (0);
<<<<<<< HEAD
	current = head;
	n = 0;
	while (current)
	{
=======
	current = ptr = head;
	n = 0;
	while (current)
	{
		ptr = current;
>>>>>>> c2c734b... fix any diff
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
<<<<<<< HEAD
=======
			free((void *)ptr);
>>>>>>> c2c734b... fix any diff
			return (n);
		}
		array[n] = current;
		printf("[%p] %d\n", (void *)current, current->n);
<<<<<<< HEAD
		current = current->next;
		n++;
	}

=======
		free((void *)ptr);
		current = current->next;
		n++;
	}
	free((void *)current);
>>>>>>> c2c734b... fix any diff
	return (n);
}
