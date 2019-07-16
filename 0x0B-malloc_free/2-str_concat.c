#include "holberton.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * str_concat - function concat two strings
 * @s1: pointer with a string
 * @s2: pointer with a string
 * Return: a new pointer with the two strings
 */
char *str_concat(char *s1, char *s2)
{
	int i = 0;
	int j = 0;
	int c1 = 0;
	int c2 = 0;
	int total = 0;
	char *str;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	while (s1[i] != '\0')
	{
		c1++;
		i++;
	}
	while (s2[j] != '\0')
	{
		c2++;
		j++;
	}
	total = (c1 + c2) + 1;
	str = malloc(sizeof(char) * total);
	if (str == NULL)
		str = 0;
	else
	{
		j = 0;
		for (i = 0; i < total; i++)
		{
			if (i < c1)
				str[i] = s1[i];
			else
			{
				str[i] = s2[j];
				j++;
			}
		}
	}
	return (str);
}
