#include "dog.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * new_dog - function that creates a new dog.
 * @name: char pointer
 * @age: float
 * @owner: char pointer
 * Return: pointer
*/
dog_t *new_dog(char *name, float age, char *owner)
{
	struct dog *ptr;

	ptr = malloc(sizeof(struct dog));
	if (ptr == NULL)
		return (NULL);
	ptr->name = name;
	ptr->age = age;
	ptr->owner = owner;
	return (ptr);
}
