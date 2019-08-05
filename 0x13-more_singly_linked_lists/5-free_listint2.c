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
	listint_t *next = NULL;

	if (*head == NULL)
	{
		*head = next;
	}
	while ((*head)->next != NULL)
	{
		next = (*head)->next;
		free(*head);
		*head = next;
	}
	*head = NULL;
}
