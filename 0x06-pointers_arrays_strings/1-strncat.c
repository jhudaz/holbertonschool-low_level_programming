#include "holberton.h"
/**
 * _strncat -  function is similar to the _strcat function, except that
 * @dest: char pointer
 * @src: char pointer
 * @n: int limit
 * Return: char
 */
char *_strncat(char *dest, char *src, int n)
{
	int i;
	int count = 0;
	int begin = 0;

	while (dest[i] != 0)
	{
		i++;
	}
	count = i;
	for (i = count; (src[begin] != 0 && i < (count + n)); i++)
	{
		dest[i] = src[begin];
		begin++;
	}
	dest[i] = 0;
	return (dest);
}
