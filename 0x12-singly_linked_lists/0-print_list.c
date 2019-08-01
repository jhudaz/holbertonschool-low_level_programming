#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"
/**
 * print_list - function that print the elements in a linked list
 * @h: pointer structure
 * Return: int count of nodes
*/
unsigned long int print_list(list_t *h)
{
	list_t *current = h;
	int i = 0;

	while (current != NULL)
	{
		if (!current->str)
			printf("[0] (nill)\n");
		else
			printf("[%d] %s\n", current->len, current->str);
		current = current->next;
		i++;
	}
	return (i);
}
