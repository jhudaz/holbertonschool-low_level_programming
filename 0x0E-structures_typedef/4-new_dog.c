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
	struct dog *my_dog;

	my_dog = malloc(sizeof(struct dog));
	if (my_dog == NULL)
		return (NULL);
	my_dog->name = name;
	my_dog->age = age;
	my_dog->owner = owner;
	return (my_dog);
}
