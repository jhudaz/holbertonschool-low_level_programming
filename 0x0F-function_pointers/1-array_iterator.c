#include "function_pointers.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * array_iterator - function that executes a function given as a parameter.
 * @array: pointer char
 * @size: int
 * @action: function pointer
 * Return: void
*/
void array_iterator(int *array, int size, void (*action)(int))
{
	int i = 0;

	if (size < 0 || array == NULL || action == NULL)
		return;

	for (i = 0; i < size; i++)
	{
		action(array[i]);
	}
}
