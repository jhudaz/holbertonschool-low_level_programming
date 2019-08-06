#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"
/**
 * get_nodeint_at_index - returns the nth node of a listint_t linked list.
 * @head: pointer
 * @index: unsigned int
 * Return: the value of the new principal node
*/
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	listint_t *cpy = head;
	unsigned int i = 0;

	while (cpy != NULL)
	{
		if (i == index)
			return (cpy);
		cpy = cpy->next;
		i++;
	}
	return (NULL);
}
