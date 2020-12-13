#include "lists.h"
#include <stdlib.h>


/**
* insert_dnodeint_at_index - insert_dnodeint_at_index
* @h: head
* @idx: index
* @n: data
*
* Return: head
*/
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *current = NULL, *newNode = NULL, *prev = NULL;
	unsigned int i = 0;


	current = *h;
	prev = *h;
	newNode = malloc(sizeof(dlistint_t));
	if (!newNode)
		return (NULL);
	newNode->n = n;
	while (current && i <= idx)
	{
		if (i == idx)
		{
			newNode->prev = current->prev;
			newNode->next = current;
			prev->next = newNode;
			current->prev = newNode;
			break;
		}
		prev = current;
		current = current->next;
		i++;
	}
	if (idx > i)
		free(newNode);
	if (idx == i)
	{
		newNode->prev = prev;
		newNode->next = NULL;
		prev->next = newNode;

	}

	return (newNode);
}
