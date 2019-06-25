#include "holberton.h"
/**
 * print_last_digit - print the last digit from  a number
 * @n: variable type int
 * Return: int
 */
int print_last_digit(int n)
{
	int abs;
	int newValue;

	if (n < 0)
	{
		abs = n * -1;
	}
	else
	{
		abs = n;
	}
	newValue = abs % 10;
	return (newValue);
}
