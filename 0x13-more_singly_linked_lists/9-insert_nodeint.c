#include "lists.h"



/**
* insert_nodeint_at_index - insert node at a given index
* @head: pointerr to the header
* @idx: index where to insert the node
* @n: data
* Return: newNode added
*/

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{

	listint_t *newNode = NULL, *current = NULL;
	unsigned int i;


	if (!head)
		return (NULL);
	newNode = malloc(sizeof(listint_t));
	if (!newNode)
		return (NULL);

	newNode->n = n;
	if (idx == 0)
	{
		newNode->next = *head;
		*head = newNode;
		return (newNode);
	}
	current = *head;
	for (i = 0; current && i < idx - 1; i++)
		current = current->next;

	if (!current)
		return (NULL);
	newNode->next = current->next;
	current->next = newNode;


	return (newNode);
}
