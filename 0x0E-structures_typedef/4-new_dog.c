#include "dog.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * _strlen - function that count the number of characters in a string
 * @s: char pointer
 * Return: int
*/
int _strlen(char *s)
{
	int i = 0;

	while (s[i] != '\0')
	{
		i++;
	}
	return (i);
}
/**
 * _copychar - function that copy a string to another
 * @dest: char pointer
 * @src: char pointer
 * Return: char
*/
char *_copychar(char *dest, char *src)
{
	int i = 0;

	for (i = 0; src[i] != 0; i++)
	{
		dest[i] = src[i];
	}
	dest[i] = '\0';
	return (dest);
}
/**
 * new_dog - function that creates a new dog.
 * @name: char pointer
 * @age: float
 * @owner: char pointer
 * Return: pointer
*/
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *my_dog;
	char *cpname;
	char *cpowner;
	int namelen;
	int ownerlen;

	namelen = _strlen(name);
	ownerlen = _strlen(owner);

	cpname = malloc(sizeof(char *) * (namelen + 1));
	if (cpname == NULL)
	{
		free(my_dog);
		free(cpname);
		return (NULL);
	}
	cpname = _copychar(cpname, name);

	cpowner = malloc(sizeof(char *) * (ownerlen + 1));
	if (cpowner == NULL)
	{
		free(my_dog);
		free(cpowner);
		return (NULL);
	}
	cpowner = _copychar(cpowner, owner);

	my_dog = malloc(sizeof(struct dog));
	if (my_dog == NULL)
		return (NULL);

	my_dog->name = cpname;
	my_dog->age = age;
	my_dog->owner = cpowner;
	return (my_dog);
}
