#include "holberton.h"
/**
 * print_sign - print if a number is positive , negative or zero with his sign
 * @n: variable type int
 * Return: int
 */
int print_sign(int n)
{
	if (n > 0)
	{
		_putchar(43);
		return (1);
	}
	else if (n == 0)
	{
		_putchar(48);
		return (0);
	}
	else
	{
		_putchar(45);
		return (-1);
	}
}
