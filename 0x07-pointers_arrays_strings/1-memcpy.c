#include "holberton.h"
/**
 * _memcpy - function that copies memory area.
 * @dest: pointer to change
 * @src: the source
 * @n: the size of the byte to change
 *
 * Return: Nothing.
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	while (n--)
	{
		*dest++ = *src++;
	}

	return (dest);
}
