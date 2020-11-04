#include "lists.h"



/**
* add_nodeint - add node to the front of the list
* @head: pointer to the header
* @n: nb to be added
*
* Return: pointer to node
*/

listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new_node = NULL;

	if (!head)
		return (NULL);
	/* allocate space */
	new_node = malloc(sizeof(listint_t));
	if (!new_node)
		return (NULL);
	new_node->n = n;
	/* Make next of new node as head */
	new_node->next = *head;
	/* Make next of new node as head (head is always at head of list)*/
	*head = new_node;
	return (new_node);
}
