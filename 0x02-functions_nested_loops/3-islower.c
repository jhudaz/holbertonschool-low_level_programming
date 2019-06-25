#include "holberton.h"

/**
 * _islower - check is a character is in lowercase
 * @ch:  int checked
 *
 * Return: Always 0.
 */
int _islower(int ch)
{
	if (ch >= 97 && ch <= 122)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
