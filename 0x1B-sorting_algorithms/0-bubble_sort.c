#include "sort.h"

/**
 * bubble_sort - sort an array using the bubble method
 * @array: int pointer
 * @size: array size
 * Return: void
*/
void bubble_sort(int *array, size_t size)
{
	unsigned int i;
	unsigned int tmp;
	unsigned int state;

	state = 1;
	if (!array)
		return;

	while (state == 1)
	{
		state = 0;
		for (i = 0; i < size - 1; i++)
		{
			if (array[i] > array[i + 1])
			{
				tmp = array[i];
				array[i] = array[i + 1];
				array[i + 1] = tmp;
				print_array(array, size);
				state = 1;
			}
		}
	}
}
