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
	newNode = malloc(sizeof(dlistint_t));
	if (!newNode)
		return (NULL);
	newNode->n = n;
	if (idx == 0)
	{
		newNode->prev = NULL;
		newNode->next = current;
		*h = newNode;
		return (*h);
	}
	while (current && i < idx)
	{
		prev = current;
		current = current->next;
		i++;
	}
	if (i < idx)
	{
		free(newNode);
		return (NULL);
	}

	else if (!current && i == idx)
	{
		newNode->next = NULL;
		newNode->prev = prev;
		prev->next = newNode;
		return (newNode);
	}
	newNode->prev = prev;
	newNode->next = current->next;
	if (prev)
		prev->next = newNode;
	current->prev = newNode;
	return (newNode);
}
