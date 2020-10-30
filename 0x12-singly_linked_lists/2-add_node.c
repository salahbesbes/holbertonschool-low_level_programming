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
* add_node - adds a new node at the beginning of a list_t list.
* @head: a pointer header
* @str: string
*
* Return: a pointer of new header
*/
list_t *add_node(list_t **head, const char *str)
{


	list_t *current = NULL;
	int len = _strlen(str);

	if (!str)
		return (NULL);
	current = malloc(sizeof(list_t));
	if (!current)
		return (NULL);
	current->str = strdup(str);
	if (current->str == NULL)
	{
		free(current->str);
		return (NULL);
	}
	current->next = *head;
	current->len = len;
	*head = current;


	return (current);
}
