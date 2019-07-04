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
	int j = 0;

	while (dest[i] != 0)
	{
		i++;
	}
	while (src[j] != 0)
	{
		dest[i + 1] = src[j];
	}
	dest[i + 1] = '\0';
	return (dest);
}
