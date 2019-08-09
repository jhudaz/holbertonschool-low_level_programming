#include <stdio.h>
#include "holberton.h"
/**
 * binary_to_uint - converts a binary number to an unsigned int.
 * @b: string
 * Return: unsigned int.
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int i = 0;
	unsigned int res = 0;

	if (!b)
		return (0);
	while (b[i] != '\0')
	{
		if (b[i] != '0' && b[i] != '1')
			return (0);
		i++;
	}
	i = 0;
	while (b[i] != '\0')
	{
		res <<= 1;
		if (b[i] == '1')
			res += 1;
		i++;
	}
	return (res);
}
