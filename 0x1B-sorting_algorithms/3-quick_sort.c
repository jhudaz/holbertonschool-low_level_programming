#include "sort.h"

/**
 * quick_sort - Sorting function in ascending order using the Quicksort
 *				sort algorithm.
 *
 * @array: The integer array that will be sorted.
 *
 * @size: The size of the integer array.
 *
 * Return: Always nothing (VOID).
 */

void quick_sort(int *array, size_t size)
{
	if (size > 1 && array != NULL)
	{
		quick_sort_helper(array, 0, size - 1, size);
	}
}

/**
 * quick_sort_helper - Helper function to execute the quicksort algorithm
 *					   recursively in the array.
 * @arr: The array that will be sorted.
 *
 * @start: The index of the start point from where the array will be checked.
 *
 * @end: The index of the end point to where the array will be checked.
 *
 * @size: The size of the integer array.
 *
 * Return: Always nothing (VOID).
 */

void quick_sort_helper(int *arr, int start, int end, size_t size)
{
	if (start < end)
	{
		int pivot = lomuto_partition(arr, start, end, size);

		quick_sort_helper(arr, start, pivot - 1, size);
		quick_sort_helper(arr, pivot + 1, end, size);
	}
}

/**
 * lomuto_partition - Makes the partition of the array following the lomuto's
 *					  steps and ubicates the pivot.
 *
 * @arr: The array that will be partitionated.
 *
 * @start: The index of the start point from where the array will be checked.
 *
 * @end: The index of the end point to where the array will be checked.
 *
 * @size: The size of the integer array.
 *
 * Return: The index of the pivot.
 */

int lomuto_partition(int *arr, int start, int end, size_t size)
{
	int pivot, i, j, aux;

	pivot = arr[end];
	i = start;

	for (j = start; j < end; j++)
	{
		if (arr[j] <= pivot)
		{
			aux = arr[i];
			arr[i] = arr[j];
			arr[j] = aux;

			i++;
			if (i - 1 != j)
			{
				print_array(arr, size);
			}
		}
	}

	aux = arr[i];
	arr[i] = arr[end];
	arr[end] = aux;

	if (i != end)
	{
		print_array(arr, size);
	}

	return (i);
}
