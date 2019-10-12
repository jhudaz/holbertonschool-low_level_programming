#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "hash_tables.h"

/**
 * hash_table_get - get a value froma hash table.
 * @ht: hash_table_t pointer
 * @key: char pointer
 * Return: Always EXIT_SUCCESS.
 */
char *hash_table_get(const hash_table_t *ht, const char *key)
{
	unsigned long int idx;

	if (!ht || !key)
		return (NULL);

	idx = key_index((unsigned char *)key, ht->size);

	while (ht->array[idx])
	{
		if (strcmp((ht->array[idx])->key, key) == 0)
		{
			return ((ht->array[idx])->value);
		}
		ht->array[idx] = (ht->array[idx])->next;
	}
	return (NULL);
}
