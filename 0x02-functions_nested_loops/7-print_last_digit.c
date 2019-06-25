#include "holberton.h"
/**
 * print_last_digit - print the last digit from  a number
 * @n: variable type int
 *
 * Return: int
 */
int print_last_digit(int n)
{
	int last;

	if (n < 0)
	{
		n = n * -1;
	}
	last = n % 10;
	_putchar('0' + last);
	return (n);
}
