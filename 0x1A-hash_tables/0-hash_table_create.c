
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
	unsigned long int i = 0;

	head = malloc(sizeof(hash_table_t));
	if (!head)
		return (NULL);
	if (size)
	{
		head->array = malloc(size * sizeof(void *));
		if (!head->array)
		{
			free(head);
			return (NULL);
		}
	}
	else
		head->array = NULL;
	head->size = size;
	return (head);
}
