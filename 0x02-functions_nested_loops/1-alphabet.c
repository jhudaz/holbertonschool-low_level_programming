#include "holberton.h"
/**
 * main - print the alphabet
 *
 * Return: 0 for success - 1 for error
 */
void main(void)
{
	int ch = 'a';

	while (ch <= 'z')
	{
		_putchar(ch);
		ch++;
	}
	_putchar('\n');
}
