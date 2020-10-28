#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
* print_list - print all element of a linked list
* @h: pointer to the head
*
* Return: void
*/

size_t print_list(const list_t *h)
{
	int count = 0;
	const list_t *current = h;

	while (current)
	{
		if (!current->str)
			printf("[0] (nil)\n");
		else
			printf("[%d]%s\n", current->len, current->str);
		current = current->next;
		count++;
	}
	return (count);
}
