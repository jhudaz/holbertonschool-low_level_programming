#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"
/**
 * sum_listint - returns the sum of all the data of a listint_t linked list
 * @head: pointer
 * Return: the value of the new principal node
*/
int sum_listint(listint_t *head)
{
	listint_t *cpy = head;
	int sum = 0;

	if (cpy == NULL)
		return (0);
	while (cpy != NULL)
	{
		sum += cpy->n;
		cpy = cpy->next;
	}
	return (sum);
}
