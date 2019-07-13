#include "holberton.h"
/**
 * _abs - print the absolute value from a number
 * @n: variable type int
 * Return: int
 */
int _abs(int n)
{
	int val;

	if (n > 0 || n == 0)
	{
		return (n);
	}
	else
	{
		val = n * -1;
		return (val);
	}
}
