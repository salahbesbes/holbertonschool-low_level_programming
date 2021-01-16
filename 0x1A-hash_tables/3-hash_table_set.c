
#include "hash_tables.h"
#include <string.h>

/**
* add_node - adds a new node at the beginning of a hash_node_t list.
* @head: a pointer header
* @key: string
* @value: value mapped to key
*
* Return: a pointer of new header
*/
hash_node_t *add_node(hash_node_t **head, const char *key, const char *value)
{


	hash_node_t *current = NULL;

	if (!key || !value)
		return (NULL);
	current = malloc(sizeof(hash_node_t));
	if (!current)
		return (NULL);
	current->key = strdup(key);
	if (!current->key)
	{
		free(current);
		return (NULL);
	}
	current->value = strdup(value);
	if (!current->value)
	{
		free(current->key);
		free(current);
		return (NULL);
	}
	current->next = *head;
	*head = current;

	return (current);
}


/**
* add_node_end - add anode to the last position
* @head: pointer to the head of the list
* @str: string
*
* Return: pointer to the header
*/

hash_node_t *add_node_end(hash_node_t **head, const char *key, const char *value)
{
	hash_node_t *newNode = NULL;
	hash_node_t *last = *head;

	if (!key)
		return (NULL);
	newNode = malloc(sizeof(hash_node_t));
	if (!newNode)
		return (NULL);
	newNode->next = NULL;
	newNode->key = strdup(key);
	if (newNode->key == NULL)
	{
		free(newNode);
		return (NULL);
	}
	newNode->value = strdup(value);
	if (!newNode->value)
	{
		free(newNode->key);
		free(newNode);
		return (NULL);
	}
	/* if the list is empty*/
	if (*head == NULL)
	{
		*head = newNode;
		return (newNode);
		/* we return generaly the first node (head)*/
	}

	/* we move the pointer last until the last node */

	while (last->next)
		last = last->next;

	/* we add apointer that point to the newNode*/
	last->next = newNode;

	return (newNode);
}
int check_existance(hash_table_t *ht, const char *key, int idx)
{
	hash_node_t *current = NULL;

	current = ht->array[idx];
	while (current)
	{
		if (strcmp(current->key, key) == 0)
			return (0);
		current = current->next;
	}
	return (1);
}
/**
  * hash_table_set - append the key value data to the hashed table
  * at the correct index
  * @key: string key
  * @value: mapped value to key
  * @ht: head of the struct containing the hashtable
  *
  * Return: 1 or 0
  */
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	int idx = 0;
	hash_node_t *result = NULL;
	int res  = 0;

	if (!ht || !key || *key == '\0')
		return (0);

	idx = key_index((const unsigned char *)key, ht->size);
	res = check_existance(ht, key, idx);
	if (!res)
		return (0);
	result = add_node(&(ht->array[idx]), key, value);
	if (!result)
		return (0);
	return (1);
}
