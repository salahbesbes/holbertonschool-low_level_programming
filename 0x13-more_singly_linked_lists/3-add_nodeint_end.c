#include "lists.h"


/**
* add_nodeint_end - add node at the end of yje list
* @head: header
* @n: int
* Return: header of the list
*/

listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *new_node = NULL;
	listint_t *last;


	/* we create new node (the last node)*/
	new_node = malloc(sizeof(listint_t));
	if (!new_node)
		return (NULL);
	new_node->n = n;
	new_node->next = NULL;


	/* we check if the list is empty*/
	if (!*head)
	{
		*head = new_node;
		return (new_node);
	}

	/* we want to step into the last node so that we can add an other one */
	last = *head;
	while (last->next)
		last = last->next;

	/* we create a link to the new node*/
	last->next = new_node;

	return (*head);
}
