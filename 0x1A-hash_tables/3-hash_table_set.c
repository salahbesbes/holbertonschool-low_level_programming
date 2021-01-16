
#include "hash_tables.h"

/**
* add_node - adds a new node at the beginning of a list_t list.
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
	current->next = *head;
	*head = current;

	return (current);
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

	if (!key || *key == '\0' || value == NULL)
		return (0);

	idx = key_index((const unsigned char *)key, ht->size);

	add_node(&(ht->array[idx]), key, value);
	return (1);
}
