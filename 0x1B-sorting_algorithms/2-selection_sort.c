#include "sort.h"

/**
 * selection_sort - Sorting function in ascending order using the selection
 *					sort algorithm.
 *
 * @array: The integer array that will be sorted.
 *
 * @size: The size of the integer array.
 *
 * Return: Always nothing nothin (VOID).
 */

void selection_sort(int *array, size_t size)
{
	unsigned int swap, i;

	if (size > 1 && array != NULL)
	{
		for (i = 0; i < size; i++)
		{
			swap = find_idx_min(array, i, size);
			if (swap != i)
			{
				array[i] ^= array[swap];
				array[swap] ^= array[i];
				array[i] ^= array[swap];
				print_array(array, size);
			}
		}
	}
}

/**
 * find_idx_min - Finds the position of lowest number in an integer array.
 *
 * @array: The integer array that will be processed.
 *
 * @start: The index of the start point from where the array will be checked.
 *
 * @size: The size of the integer array.
 *
 * Return: The index of the lowest number in the array.
 */

int find_idx_min(int *array, int start, size_t size)
{
	int base, idx;
	size_t i;

	base = array[start];
	idx = start;

	for (i = start + 1; i < size; i++)
	{
		if (array[i] < base)
		{
			idx = i;
			base = array[i];
		}
	}

	return (idx);
}
