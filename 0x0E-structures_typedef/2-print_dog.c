#include "dog.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * print_dog - function that print the structure
 * @d: pointer to a structure
 * Return: void
*/
void print_dog(struct dog *d)
{
	if (d == NULL)
	{
		printf("\n");
	}
	else
	{
		if (d->name == NULL)
			printf("(nill)\n");
		else
			printf("Name: %s\n", d->name);

		if (d->age == 0)
			printf("(nill)\n");
		else
			printf("Age: %f\n", d->age);

		if (d->owner == NULL)
			printf("(nill)\n");
		else
			printf("Owner: %s\n", d->owner);
	}
}
