#include "hash_tables.h"

/**
  * hash_table_print - print hash table
  * @ht: hash table
  *
  * Return: void
  */
void hash_table_print(const hash_table_t *ht)
{
	hash_node_t *current = NULL;
	unsigned long int i = 0, empty = 1;
	char *sep = ", ";

	printf("{");
	for (i = 0; i < ht->size; ++i)
	{
		current = ht->array[i];
		if (current)
		{
			if (empty == 0)
				printf("%s", sep);
			while (current)
			{
				printf("'%s': '%s'", current->key, current->value);
				current = current->next;
			}
			if (empty)
				empty = 0;
		}
	}
	printf("}\n");
}
