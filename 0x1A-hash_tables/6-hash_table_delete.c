#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "hash_tables.h"

/**
 * hash_table_delete - free the hash table.
 * @ht: hash_table_t pointer
 * Return: void.
 */
void hash_table_delete(hash_table_t *ht)
{
	free(ht);
}
