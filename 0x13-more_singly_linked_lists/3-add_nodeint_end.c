#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"
/**
 * add_nodeint_end - adds a new node at the end of a linked list
 * @head: double pointer
 * @n: constant int
 * Return: address of the new element
*/
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *current = *head;
	listint_t *new;

	new = malloc(sizeof(listint_t));
	if (!new)
		return (NULL);

	new->n = n;
	new->next = NULL;

	if (*head == NULL)
	{
		*head = new;
	}
	else
	{
		while (current->next != NULL)
		{
			current = current->next;
		}
		current->next = new;
	}
	return (new);
}
