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
	int val = 1;

	if (*head == NULL)
		return (-1);

	first = (*head)->next;
	free(*head);
	*head = first;

	return (val);
}

/**
 * delete_nodeint_at_index - deletes node at index of a listint_t linked list.
 * @head: double pointer
 * @index: unsigned int
 * Return: int (1 - success || 0 -1 failed)
*/
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *cpy = *head;
	listint_t *adress;
	unsigned int i = 0;

	if (head == NULL)
		return (-1);
	if (index == 0)
		return (pop_listint(head));

	while (cpy != NULL)
	{
		if (i == (index - 1))
		{
			adress = (cpy->next)->next;
			free(cpy->next);
			cpy->next = adress;
			return (1);
		}
		cpy = cpy->next;
		i++;
	}

	return (-1);
}
