#include "holberton.h"
#include <stdlib.h>
/**
 * create_array - function that reserve in memory for an array
 * @size: variable int with the value of the size
 * @c: character value to add in the array
 * Return: pointer
 */
char *create_array(unsigned int size, char c)
{
	char *ptr;
	unsigned int i;

	ptr = (char *)malloc(size * sizeof(char));

	if (size == 0 || ptr == NULL)
	{
		ptr = 0;
	}
	else
	{
		for (i = 0; i < size; i++)
		{
			ptr[i] = c;
		}
	}
	return (ptr);
}
