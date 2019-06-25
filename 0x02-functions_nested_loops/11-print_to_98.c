#include "holberton.h"
#include <stdio.h>

/**
 * print_to_98 - add a number to another one
 * @n: number int
 *
 * Return: int
 */
void print_to_98(int n)
{
	int i;

	if (n <= 98)
	{
		for (i = n; i <= 98; i++)
		{
			printf("%d", i);
			if (i != 98)
			{
				putchar(44);
				putchar(32);
			}
		}
	}
	else
	{
		for (i = n; i >= 98; i--)
		{
			printf("%d", i);
			if (i != 98)
			{
				putchar(44);
				putchar(32);
			}
		}
	}
	putchar('\n');
}
