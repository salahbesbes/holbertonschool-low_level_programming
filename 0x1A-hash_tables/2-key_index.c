#include "hash_tables.h"


/**
 * key_index - generate an index for the string to be insered in the hash table
 * @key: key string to genearte hashed index
 * @size: size of the hash array
 * Return: index of the string
 */

unsigned long key_index(const unsigned char *key, unsigned long size)
{
	unsigned long hash = 0;


	hash = hash_djb2(key);
	return (hash % size);
}
