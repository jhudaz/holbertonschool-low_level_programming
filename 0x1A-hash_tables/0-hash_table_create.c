#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "hash_tables.h"

/**
 * hash_table_create - create a hash table
 * @size: int
 * Return: a pointer to the hash table or null on error
 */
hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *ht;

	ht = (hash_table_t *)malloc(sizeof(hash_table_t));
	if (!ht)
	{
		return (NULL);
	}
	ht->array = malloc(sizeof(hash_node_t) * size);
	if (!ht->array)
	{
		free(ht);
		return (NULL);
	}
	ht->size = size;
	return (ht);
}
