#include "holberton.h"
#include <stdlib.h>
#include <stdio.h>
/**
 * _calloc - function that allocates memory for an array, using malloc.
 * @nmemb: unsigned int
 * @size: unsigned int
 * Return: void
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *ptr, *ptr2;
	unsigned int i;
	unsigned int j;

	if (nmemb <= 0 || size <= 0)
		return (NULL);
	ptr = malloc(sizeof(int) * (nmemb * size));
	ptr2 = ptr;
	if (ptr == NULL)
		return (NULL);
	for (i = 0; i < nmemb; i++)
	{
		for (j = 0; j < size; j++)
		{
			ptr = 0;
			ptr++;
		}
	}
	return (ptr2);
}
