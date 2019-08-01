#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"
/**
 * print_list - function that print the elements in a linked list
 * @h: pointer structure
 * Return: int count of nodes
*/
size_t print_list(const list_t *h)
{
	unsigned int i = 0;
	const list_t *cpy;

	cpy = h;

	while (cpy != NULL)
	{
		if (cpy->str == NULL)
			printf("[0] (nil)\n");
		else
			printf("[%d] %s\n", cpy->len, cpy->str);
		i++;
		cpy = cpy->next;
	}
	return (i);
}
