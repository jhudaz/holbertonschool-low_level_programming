#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"
/**
 * listint_len -  returns the number of elements in a linked list
 * @h: pointer structure
 * Return: int count of nodes
*/
size_t listint_len(const listint_t *h)
{
	const listint_t *cpy = h;
	unsigned int i = 0;

	if (cpy == NULL)
		return (0);
	while (cpy != NULL)
	{
		cpy = cpy->next;
		i++;
	}
	return (i);
}
