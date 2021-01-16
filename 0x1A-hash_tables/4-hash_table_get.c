#include "hash_tables.h"

/**
  * hash_table_get - retrieves a value associated with a key
  * @ht: struct that hold the hash table
  * @key: string
  *
  * Return: value of the mapped key
*/
char *hash_table_get(const hash_table_t *ht, const char *key)
{
	unsigned long int idx;
	hash_node_t *current = NULL;

	if (!ht || !key || *key == '\0')
		return (NULL);

	idx = key_index((const unsigned char *)key, ht->size);
	current = ht->array[idx];
	while (current)
	{
		if (strcmp(current->key, key) == 0)
			return (current->value);
		current = current->next;
	}
	return (NULL);

}
