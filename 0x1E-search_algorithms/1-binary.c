#include "search_algos.h"

/**
 * print_array - print an array
 * @start: index to start in the array
 * @end: limit of the loop
 * @array: array
 * Return: void
*/
void print_array(int start, int end, int *array)
{
	int i;

	printf("Searching in array: ");
	for (i = start; i <= end; i++)
	{
		printf("%d", array[i]);
		if (i != end)
			printf(", ");
	}
	printf("\n");
}

/**
 * binary_search - searches for a value using the Binary search algorithm
 * @array: pointer to an array of integer
 * @size: size of the array
 * @value: search value
 * Return: int
*/
int binary_search(int *array, size_t size, int value)
{
	int L = 0;
	int R = size - 1;
	int m;

	while (L <= R)
	{
		print_array(L, R, array);
		m = (L + R) / 2;

		if (array[m] < value)
			L = m + 1;
		else if (array[m] > value)
			R = m - 1;
		else
			return (m);
	}

	return (-1);
}
