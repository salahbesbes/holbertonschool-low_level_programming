#include "lists.h"


/**
* get_nodeint_at_index - return the node of index i
* @head: header pointer
* @index: index of the node we want to get
* Return: node
*/

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{

	unsigned int i = 0;
	listint_t *current = NULL;
	
	if (!head)
		return (NULL);

	current = head;
	for (i = 0; current && i < index; i++)
	{
		
		current = current->next;
	}
	if (!current)
		return (NULL);
	return (current);
}
