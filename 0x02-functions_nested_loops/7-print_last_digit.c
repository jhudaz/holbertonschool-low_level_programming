#include "holberton.h"
/**
 * print_last_digit - print the last digit from  a number
 * @n: variable type int
 *
 * Return: int
 */
int print_last_digit(int n)
{
	if (n < 0)
	{
		n = -(n % 10);
		_putchar('0' + n);
	}
	else
	{
		n = n % 10;
		_putchar('0' + n);
	}
	return (n);
}
