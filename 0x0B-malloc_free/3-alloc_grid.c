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

	matrix = malloc(sizeof(int *) * height);

	if (width <= 0 || height <= 0)
		return (NULL);

	for (i = 0; i < height; i++)
	{
		matrix[i] = (int *)malloc(sizeof(int) * width);
		if (matrix[i] == NULL)
		{
			for (j = i; j >= 0; j--)
			{
				free(matrix[i]);
			}
			free(matrix);
		}
		for (j = 0; j < width; j++)
		{
			matrix[i][j] = 0;
		}
	}
	return (matrix);
}
