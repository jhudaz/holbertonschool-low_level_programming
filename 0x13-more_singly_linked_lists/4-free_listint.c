#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"
/**
 * free_listint - clan a linked list
 * @head: pointer
 * Return: void
*/
void free_listint(listint_t *head)
{
	listint_t *cpy;

	while (head)
	{
		cpy = head;
		head = head->next;
		free(cpy);
	}
}
