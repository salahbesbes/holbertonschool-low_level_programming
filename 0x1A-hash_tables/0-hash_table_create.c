
#include "hash_tables.h"
#include <stdlib.h>

/**
  * hash_table_create - create an empty hash table init with NULL
  * @size: size of the hash_table
  *
  * Return: a struct with an init hashtable
  */
hash_table_t *hash_table_create(unsigned long int size)
{

	hash_table_t *head = NULL;

	head = malloc(sizeof(hash_table_t));
	if (!head)
		return (NULL);
	head->array = malloc(size * sizeof(hash_node_t));
	if (!head->array)
	{
		free(head);
		return (NULL);
	}
	head->size = size;
	return (head);
}
