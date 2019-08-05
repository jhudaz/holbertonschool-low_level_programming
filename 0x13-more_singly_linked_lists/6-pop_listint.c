#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"
/**
 * pop_listint - delete de first element in a linked list
 * @head: double pointer
 * Return: the value of the new principal node
*/
int pop_listint(listint_t **head)
{
	listint_t *first = NULL;
	int retval = -1;

	if (*head == NULL)
		return (0);

	first = (*head)->next;
	retval = (*head)->n;
	free(*head);
	*head = first;

	return (retval);
}
