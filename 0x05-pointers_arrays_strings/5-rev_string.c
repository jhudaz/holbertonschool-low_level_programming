#include "holberton.h"
#include <stdio.h>
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
	while (s[i] != 0)
	{
		i++;
	}
	size = i; 
	char rev[size];
	for (i = size -1; i >= 0; i--)
	{
		rev[j] = s[i];
		j++;
	}
	for (i = 0; i <= size -1; i++)
	{
		s[i] = rev[i];
		
	}
}
