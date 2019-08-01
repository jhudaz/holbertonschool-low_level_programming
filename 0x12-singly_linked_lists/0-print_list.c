#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"
/**
 * print_list - function that print the elements in a linked list
 * @h: pointer structure
 * Return: int count of nodes
*/
size_t print_list(list_t *h)
{
	int i = 0;

	while (h != NULL)
	{
		if (!h->str)
			printf("[0] (nill)\n");
		else
			printf("[%d] %s\n", h->len, h->str);
		h = h->next;
		i++;
	}
	return (i);
}
