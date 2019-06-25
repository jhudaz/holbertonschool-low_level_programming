#include "holberton.h"
/**
 * print_last_digit - print the last digit from  a number
 * @n: variable type int
 * Return: int
 */
int print_last_digit(int n)
{

	if (n < 0)
	{
		n = n * -1;
	}
	n = n % 10;
	_putchar(n + '0');
	return (n);
}
