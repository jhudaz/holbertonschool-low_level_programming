#include "holberton.h"
#include <stdio.h>
/**
 * _strstr - function that locates a substring.
 * @haystack: pointer
 * @needle:pointer
 *
 * Return: char.
 */

char *_strstr(char *haystack, char *needle)
{
	int i = 0;
	int aux = 0;
	int aux2 = 0;
	int count;

	while (needle[i] != '\0')
	{
		i++;
	}
	count = i;

	for (i = 0; haystack[i] != '\0'; i++)
	{
		if (haystack[i] == needle[aux])
		{
			aux = i;
			while (haystack[aux] == needle[aux2])
			{
				aux++;
				aux2++;
			}
			if (count == aux2 - 1)
			{
				printf("entro!\n");
				return (haystack + i);
			}
		}
	}
	printf("count: %d\n", count);
	printf("aux: %d\n", aux2);
	return (0);
}
