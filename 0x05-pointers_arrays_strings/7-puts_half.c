#include "holberton.h"

/**
 * puts_half - function that prints one char out of 2 of a string
 * @str: char
 * Return: void.
 */
void puts_half(char *str)
{
	int i = 0;
	int count = 0;

	while (str[i] != 0)
	{
		count++;
		i++;
	}

	if (count  % 2 == 0)
	{
		for (i = count / 2; i < count ; i++)
		{
			_putchar(str[i]);
		}
	}
	else
	{
		for (i = (count + 1) / 2; i < count; i++)
		{
			_putchar(str[i]);
		}
	}
	_putchar('\n');
}
