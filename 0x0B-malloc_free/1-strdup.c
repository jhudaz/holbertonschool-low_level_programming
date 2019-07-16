#include "holberton.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * _strdup - function that dubplicate a pointer using the value of another
 * @str: pointer with the addres of a string
 * Return: a new pointer
 */
char *_strdup(char *str)
{
	int i = 0;
	int count = 0;
	char *str2;

	if (str == NULL)
	{
		return (NULL);
	}

	while (str[i] != '\0')
	{
		i++;
	}
	count = i + 1;
	if (count > 0)
	{
		str2 = (char *)malloc(count * sizeof(char));
		if (str2 == NULL)
		{
			str2 = 0;
		}
		else
		{
			for (i = 0; i < count; i++)
			{
				str2[i] = str[i];
			}
		}
	}
	else
	{
		str2 = 0;
	}
	return (str2);
}
