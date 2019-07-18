#include "holberton.h"
#include <stdlib.h>
#include <stdio.h>
/**
 * _strlen - function that count the length of a string.
 * @s: char pointer
 * Return: int
 */
unsigned int _strlen(char *s)
{
	if (*s == '\0')
	{
		return (0);
	}

	return (1 + _strlen(s + 1));
}
/**
 * string_nconcat - function that concat two strings
 * @s1: string 1
 * @s2: string 2
 * @n: size of s2
 * Return: void
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *ptr;
	unsigned int len1 = 0;
	unsigned int len2 = 0;
	unsigned int total = 0;
	unsigned int i = 0;
	unsigned int j = 0;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	len1 = _strlen(s1);
	len2 = _strlen(s2);
	if (n >= len2)
		n = _strlen(s2);
	total = len1 + n;

	ptr = malloc(sizeof(char) * total);
	if (ptr == NULL)
		return (NULL);
	for (i = 0; i < total; i++)
	{
		if (i < len1)
			ptr[i] = s1[i];
		else
		{
			ptr[i] = s2[j];
			j++;
		}
	}
	ptr[i] = '\0';
	return (ptr);
}
