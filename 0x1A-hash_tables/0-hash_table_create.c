
#include "hash_tables.h"

/**
  * hash_table_create - create an empty hash table init with NULL
  * @size: size of the hash_table
  *
  * Return: a struct with an init hashtable
  */
hash_table_t *hash_table_create(unsigned long int size)
{

	hash_table_t *head = NULL;
	unsigned long int i = 0;

	head = malloc(sizeof(hash_table_t));
	head->array = malloc(size * sizeof(hash_node_t));
	head->size = size;

	for (i = 0; i < size; i++)
		head->array[i] = NULL;
	return (head);
}
