#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"
/**
 * _strlen - function that count the numbers of character in a string
 * @s: string
 * Return: int
*/
int _strlen(char *s)
{
	int i = 0;

	if (!s)
		return (0);
	while (s[i] != 0)
	{
		i++;
	}
	return (i);
}
/**
 * add_node_end - function that adds a new node at the end of a list
 * @head: double pointer
 * @str: string
 * Return: Always 0.
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *new;
	list_t *new2;
	char *cpy = strdup(str);

	new = malloc(sizeof(list_t));
	if (!new)
		return (NULL);
	new->str = strdup(cpy);
	new->len = _strlen(cpy);
	new->next = NULL;
	if (*head == NULL)
		*head = new;
	else
	{
		new2 = *head;
		while (new2->next != NULL)
		{
			new2 = new2->next;
		}
		new2->next = new;
	}

	return (new);
}
