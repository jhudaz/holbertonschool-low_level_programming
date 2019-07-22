#include "dog.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * free_dog - function that free the space in memory of the structure.
 * @d: char pointer to a structure
 * Return: void
*/
void free_dog(dog_t *d)
{
	if (d != NULL)
	{
		free(d->owner);
		free(d->name);
		free(d);
	}
}
