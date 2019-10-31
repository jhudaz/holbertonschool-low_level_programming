#include "sort.h"

/**
 * shell_sort - Sorting function in ascending order using the ShellSort
 *				sort algorithm using the knuth sequence.
 *
 * @arr: The integer array that will be sorted.
 *
 * @size: The size of the integer array.
 *
 * Return: Always nothing (VOID).
 */

void shell_sort(int *arr, size_t size)
{
	size_t i, j, gap;

	gap = 1;

	if (size > 1 && arr != NULL)
	{
		while (gap < size / 3)
		{
			gap = gap * 3 + 1;
		}

		while (gap >= 1)
		{
			for (i = gap; i < size; i++)
			{
				for (j = i; j >= gap && arr[j] < arr[j - gap]; j -= gap)
				{
					int tmp = arr[j];

					arr[j] = arr[j - gap];
					arr[j - gap] = tmp;
				}
			}

			gap = gap / 3;
			print_array(arr, size);
		}
	}
}
