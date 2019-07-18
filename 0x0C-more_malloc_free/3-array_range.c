#include "holberton.h"
#include <stdlib.h>
#include <stdio.h>
/**
 * array_range - function that creates an array of integers
 * @min: unsigned int
 * @max: unsigned int
 * Return: int
 */
int *array_range(int min, int max)
{
	int *ptr;
	int i;
	int total;
	int j = 0;

	if (min > max)
		return (NULL);
	total = max - min;
	ptr = malloc(sizeof(int) * (total + 1));
	if (ptr == NULL)
		return (NULL);
	for (i = min; i <= max; i++)
	{
		ptr[j] = i;
		j++;
	}
	return (ptr);
}
