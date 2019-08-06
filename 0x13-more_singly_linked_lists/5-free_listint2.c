#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"
/**
 * free_listint2 - clean a linked list
 * @head: double pointer
 * Return: void
*/
void free_listint2(listint_t **head)
{
	listint_t *cpy;

	if (head == NULL)
		return;
	while (*head)
	{
		cpy = *head;
		*head = (*head)->next;
		free(cpy);
	}
	*head = NULL;
}
