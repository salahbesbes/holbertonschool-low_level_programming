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
	if (idx == 0)
		return (add_dnodeint(h, n));
	while (current && i < idx)
	{
		prev = current;
		current = current->next;
		i++;
	}
	if (i == idx && !current)
		return (add_dnodeint_end(h, n));

	if (idx > i)
		return (NULL);
	newNode = malloc(sizeof(dlistint_t));
	if (!newNode)
		return (NULL);
	newNode->n = n;
	newNode->prev = prev;
	newNode->next = current;
	prev->next = newNode;
	current->prev = newNode;
	return (newNode);
}
