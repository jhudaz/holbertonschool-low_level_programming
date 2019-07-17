#include "holberton.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * argstostr - function that concatenates all the arguments of your program.
 * @ac: int that count the number of arguments
 * @av: arguments value
 * Return: void
 */
char *argstostr(int ac, char **av)
{
	char *ptr;
	char *ptr2;
	int i;
	int j;
	int count = 0;

	if (ac == 0 || av == NULL)
	{
		return (NULL);
	}

	for (i = 0; i < ac; i++)
	{
		for (j = 0; av[i][j] != '\0'; j++)
		{
			count++;
		}
		count++;
	}
	count += 1;

	ptr = malloc(sizeof(char) * count);
	ptr2 = ptr;
	if (ptr == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < ac; i++)
	{
		for (j = 0; av[i][j] != '\0'; j++)
		{
			*ptr = av[i][j];
			ptr++;
		}
		*ptr = '\n';
		ptr++;
	}
	return (ptr2);
}
