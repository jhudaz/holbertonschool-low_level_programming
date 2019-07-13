#include "holberton.h"
/**
 * _isalpha - function to describe if the parameter is a character
 * @c: character type int
 *
 * Return: int 1 if is uppercase 0 if not
 */
int _isalpha(int c)
{
	if ((c >= 65 && c <= 90) || (c >= 97 && c <= 122))
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
