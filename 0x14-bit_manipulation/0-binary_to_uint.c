#include <stdio.h>
#include "holberton.h"
/**
 * _pow_recursion - function that return the power from a number
 * @y: int pow
 * Return: int
 */
int _pow_recursion(int y)
{
	if (y == 0)
	{
		return (1);
	}
	return (2 * _pow_recursion(y - 1));
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
		if (str[i] == '1' || str[i] == '0')
			i++;
		else
			return (0);
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

	if (count > 0)
	{
		while (b[i] != '\0')
		{
			res += (b[i] - '0') * _pow_recursion(pw);
			pw--;
			i++;
		}
	}
	else
	{
		return (0);
	}
	return (res);
}
