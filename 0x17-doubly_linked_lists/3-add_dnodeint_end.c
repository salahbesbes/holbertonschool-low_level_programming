
#include "lists.h"


/**
* add_dnodeint_end - add at the end if the list
* @head: head of the list
* @n: data
*
* Return: 1
*/
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *newNode = NULL, *current = NULL;

	current = *head;
	newNode = malloc(sizeof(dlistint_t));
	if (!newNode)
		return (NULL);
	newNode->n = n;
	newNode->next = NULL;

	if (!*head)
	{
		newNode->prev = NULL;
		*head = newNode;
		return (*head);
	}
	while (1)
	{
		if (current->next == NULL)
		{
			current->next = newNode;
			newNode->prev = current;
			break;
		}
		current = current->next;
	}
	return (*head);
}
