#include "hash_tables.h"
#include <stdlib.h>


/**
* free_list - free linked list
* @head: pointer to the header of the list
*
* Return: void
*/

void free_list(hash_node_t *head)
{
	hash_node_t *start = head;

	while (head)
	{
		head = head->next;
		free(start->value);
		start->value = NULL;
		free(start->key);
		start->key = NULL;
		free(start);
		start = head;
	}

}
/**
  * hash_table_delete - free all the hash table
  * @ht: struct that holds the hashtable
  *
  *Return: void
  */
void hash_table_delete(hash_table_t *ht)
{
	hash_node_t *tmp = NULL;
	unsigned long int i = 0;

	for (i = 0; i < ht->size; ++i)
	{
		tmp = ht->array[i];
		if (tmp)
			free_list(tmp);
	}
	free(ht->array);
	free(ht);

}
