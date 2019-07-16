#include "holberton.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * alloc_grid - function that returns a pointer to a 2 dimensional array of int
 * @width: int
 * @height: int
 * Return: pointer
 */
int **alloc_grid(int width, int height)
{
	int **matrix;
	int i;
	int j;

	if (width < 1 || height < 1)
		return (NULL);
	matrix = malloc(sizeof(int *) * height);
	if (matrix == NULL)
		return (NULL);

	for (i = 0; i < height; i++)
	{
		matrix[i] = malloc(sizeof(int) * width);
		if (matrix[i] == NULL)
		{
			for (j = 0; j < i; j++)
			{
				free(matrix[j]);
			}
			free(matrix);
			return (NULL);
		}
		for (j = 0; j < width; j++)
		{
			matrix[i][j] = 0;
		}
	}
	return (matrix);
}
