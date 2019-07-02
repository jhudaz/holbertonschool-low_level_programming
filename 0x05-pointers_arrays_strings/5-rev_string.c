#include "holberton.h"
/**
 * rev_string -  reverse a string
 * @s: char
 * Return: void.
 */
void rev_string(char *s)
{
	int i = 0;
	int j = 0;
	int size;
	char rev[500];

	while (s[i] != 0)
	{
		i++;
	}
	size = i;
	for (i = size - 1; i >= 0; i--)
	{
		rev[j] = s[i];
		j++;
	}
	for (i = 0; i <= size - 1; i++)
	{
		s[i] = rev[i];
	}
}
