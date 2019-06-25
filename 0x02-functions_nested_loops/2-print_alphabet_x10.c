#include "holberton.h"
/**
 * main - print the alphabet 10 times
 *
 * Return: 0 for success - 1 for error
 */
int main(void)
{
	int i = 0;

	while (i <= 9)
	{
		int ch = 'a';

		while (ch <= 'z')
		{
			_putchar(ch);
			ch++;
		}
		i++;
		_putchar('\n');
	}
	return (0);
}
