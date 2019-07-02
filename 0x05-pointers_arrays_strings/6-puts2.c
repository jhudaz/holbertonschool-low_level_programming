#include "holberton.h"
/**
 * puts2 - function that prints one char out of 2 of a string
 * @str: char
 * Return: void.
 */
void puts2(char *str)
{
	int i = 0;
	int count = 0;

	while (str[i] != 0)
	{
		count++;
		i++;
	}
	for (i = 0; i <= count - 1 ; i++)
	{
		if (str[i] % 2 == 0)
		{
			_putchar(str[i]);
		}
	}
	_putchar('\n');
}
