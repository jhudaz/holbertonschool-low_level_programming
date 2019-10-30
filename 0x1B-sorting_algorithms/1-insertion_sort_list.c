#include "sort.h"

/**
* swap - swap two nodes
* @nodeL: structure pointer
* @nodeR: structure pointer
* Return: void
*/
void swap(listint_t *nodeL, listint_t *nodeR)
{
	listint_t *connectL, *connectR;

	if (nodeL->prev)
		nodeL->prev->next = nodeR;
	if (nodeR->next)
		nodeR->next->prev = nodeL;
	connectL = nodeL->prev;
	connectR = nodeR->next;
	nodeR->prev = connectL;
	nodeR->next = nodeL;
	nodeL->prev = nodeR;
	nodeL->next = connectR;
}

/**
* insertion_sort_list - sort an array using the bubble method
* @list: int tmp
* Return: void
*/
void insertion_sort_list(listint_t **list)
{
	listint_t *tmp1;

	if (!list)
		return;

	tmp1 = (*list)->next;

	while (tmp1)
	{
		while (tmp1->prev && (tmp1->n < (tmp1->prev)->n))
		{
			swap(tmp1->prev, tmp1);

			if (tmp1->prev == NULL)
			{
				*list = tmp1;
			}
			print_list(*list);
		}

		tmp1 = tmp1->next;
	}
}
