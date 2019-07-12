#include "holberton.h"
#include <stdio.h>

int pal_length(char *s, int length);

/**
 * is_palindrome - function that define is a string is a palindrome.
 * @s: char pointer
 * Return: int
 */
int is_palindrome(char *s)
{
	int length = _strlen_recursion(s);

	if (length <= 1)
	{
		return (1);
	}
	return (pal_length(s, length));
}
/**
 * pal_length - function .
 * @s: char pointer
 * @length: int
 * Return: int
 */

int pal_length(char *s, int length)
{
	if (*s == 0)
	{
		return (1);
	}
	else if (*s == s[--length])
	{
		return (pal_length(++s, --length));
	}
	return (0);
}
