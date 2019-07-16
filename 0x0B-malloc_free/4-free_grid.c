#include "holberton.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * free_grid - function that free memory in the grid
 * @grid: int pointer to a bidimensional array
 * @height: int
 * Return: void
 */
void free_grid(int **grid, int height)
{
	int i;

	for (i = 0; i < height; i++)
	{
		free(grid[i]);
	}
	free(grid);
}
