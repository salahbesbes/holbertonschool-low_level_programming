
#include <stdio.h>
#include <stdlib.h>
#include "lists.h"
#include <string.h>
/**
* _strlen - get the length of a strig
* @str: string
*
* Return: length
*/

int _strlen(const char *str)
{
	int i;

	for (i = 0; str[i]; i++)
	;
	return (i);
}

/**
* allocStr - allocate string
* @str: string
*
* Return: str
*/

char *allocStr(const char *str)
{
	char *newStr;
	int i;

	newStr = malloc(sizeof(char) * (_strlen(str) + 1));
	if (!newStr)
		return (NULL);
	for (i = 0; str[i]; i++)
		newStr[i] = str[i];
	newStr[i] = '\0';
	return (newStr);
}


/**
* add_node_end - add anode to the last position
* @head: pointer to the head of the list
* @str: string
*
* Return: pointer to the header
*/

list_t *add_node_end(list_t **head, const char *str)
{
	list_t *newNode = NULL;
	list_t *last = *head;

	newNode = malloc(sizeof(list_t));
	if (!newNode)
		return (NULL);
	newNode->next = NULL;
	newNode->len = _strlen(str);
	newNode->str = strdup(str);

	/* if the list is empty*/
	if (*head == NULL)
	{
		*head = newNode;
		return (*head);
		/* we return generaly the first node (head)*/
	}

	/* we move the pointer last until the last node */
	while (last->next)
		last = last->next;
	/* we add apointer that point to the newNode*/
	last->next = newNode;

	return (*head);
}
