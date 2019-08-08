#include <stdio.h>
#include "holberton.h"
/**
 * _pow_recursion - function that return the power from a number
 * @x: int base
 * @y: int pow
 * Return: int
 */
int _pow_recursion(int x, int y)
{
	if (y == 0)
	{
		return (1);
	}
	else if (y < 0)
	{
		return (-1);
	}

	return (x * _pow_recursion(x, (y - 1)));
}
/**
 * _strlen - return the amount of characters in a string
 * @str: string pointer
 * Return: int
 */
unsigned int _strlen(const char *str)
{
	unsigned int i = 0;

	while (str[i] != '\0')
	{
		i++;
	}
	return (i);
}
/**
 * binary_to_uint - converts a binary number to an unsigned int.
 * @b: string
 * Return: unsigned int.
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int res = 0;
	unsigned int i = 0;
	unsigned int count = _strlen(b);
	unsigned int pw = count - 1;

	if (b == NULL)
		return (0);

	while (b[i] != '\0')
	{
		if (b[i] != '0' && b[i] != '1')
			return (0);
		res += (b[i] - '0') * _pow_recursion(2, pw);
		pw--;
		i++;
	}

	return (res);
}
