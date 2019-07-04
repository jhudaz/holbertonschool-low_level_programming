#include "holberton.h"
/**
 * _strcat - Write a function that concatenates two strings.
 * @dest: char pointer
 * @src: char pointer
 * Return: char
 */
char *_strcat(char *dest, char *src)
{
	int i = 0;
	int count = 0;
	int begin = 0;

	while (dest[i] != 0)
	{
		i++;
	}
	count = i;
	for (i = count; src[begin] != 0; i++)
	{
		dest[i] = src[begin];
		begin++;
	}
	dest[i + 1] = '\0';
	return (dest);
}
