
#include "hash_tables.h"
#include <stdlib.h>
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
  * check_existance - check if the key in the hash table exists if it does
  * we replace free old and replace it if it dont exist we return 1 (else 0)
  * @ht: struct that hold the hash table
  * @key: key string
  * @value: value mapped to the key
  * @idx: index of the head of list
  *
  * Return:  1 if it does not exist else 0
  */
int check_existance(hash_table_t *ht, const char *key,
		int idx, const char *value)
{
	hash_node_t *current = NULL;

	current = ht->array[idx];
	while (current)
	{
		if (strcmp(current->key, key) == 0)
		{
			free(current->value);
			current->value = strdup(value);
			return (0);
		}
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
	res = check_existance(ht, key, idx, value);
	if (!res)
		return (1);
	result = add_node(&(ht->array[idx]), key, value);
	if (!result)
		return (0);
	return (1);
}
