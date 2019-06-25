#include "holberton.h"
/**
 * main - only call a function
 *
 * Return: int by default
 */
main(void)
{
	print_alphabet();
}
/**
 * print_alphabet - print alphabet
 *
 * Return: void
 */
void print_alphabet(void)
{
	int ch = 'a';

	while (ch <= 'z')
	{
		_putchar(ch);
		ch++;
	}
	_putchar('\n');
}
