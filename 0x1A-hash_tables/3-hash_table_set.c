#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "hash_tables.h"

/**
 * hash_table_set - function add elements to the hash table
 * @ht: hash_table_t pointer
 * @key: char pointer
 * @value: char pointer
 * Return: 1 success - 0 failure
 */

int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	unsigned long int idx;
	hash_node_t *node;

	if (strlen(key) == 0)
		return (0);

	if (!ht || !key || !value)
		return (0);

	idx = key_index((unsigned char *)key, ht->size);

	node = malloc(sizeof(hash_node_t *));
	if (!node)
		return (0);

	node->value = strdup(value);
	node->key = strdup(key);
	node->next = NULL;

	if (ht->array[idx] == NULL)
	{
		ht->array[idx] = node;
	}
	else
	{
		while (ht->array[idx])
		{
			if ((ht->array[idx])->key == key)
			{
				node->next = ht->array[idx];
				ht->array[idx] = node;
				return (1);
			}
			ht->array[idx] = (ht->array[idx])->next;
		}
	}
	return (0);
}
