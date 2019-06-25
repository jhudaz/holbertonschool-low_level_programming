#include "holberton.h"
/**
 * jack_bauer - print every minute until 2400 time
 *
 * Return: int
 */
void jack_bauer(void)
{
	int i;
	int j;
	int k;
	int l;

	for (i = 0; i <= 2; i++)
	{
		for (j = 0; j <= 9; j++)
		{
			for (k = 0; k <= 5; k++)
			{
				for (l = 0; l <= 9; l++)
				{
					_putchar('0' + i);
					_putchar('0' + j);
					_putchar(58);
					_putchar('0' + k);
					_putchar('0' + l);
					_putchar('\n');
				}
				if (k == 5 && l == 9)
				{
					break;
				}
			}
			if (i == 2 && j == 3)
			{
				break;
			}
		}
	}
}
