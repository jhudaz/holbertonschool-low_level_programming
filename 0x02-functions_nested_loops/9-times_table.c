#include "holberton.h"
/**
 * times_table - print the tables from 0 to 9
 *
 * Return: int
 */
void times_table(void)
{
	int i;
	int j;
	int tableValue;
	int d0;
	int d1;

	for (i = 0; i <= 9; i++)
	{
		for (j = 0; j <= 9; j++)
		{
			tableValue = j *  i;

			if (j != 0)
			{
				_putchar(44);
				if (tableValue >= 0 && tableValue <= 9)
				{
					_putchar(32);
					_putchar(32);
				}
				else
				{
					_putchar(32);
				}
			}
			if (tableValue >= 10)
			{
				d0 = tableValue / 10;
				d1 = tableValue % 10;
				_putchar('0' + d0);
				_putchar('0' + d1);
			}
			else
			{
				_putchar('0' + tableValue);
			}
		}
		_putchar('\n');
	}
}
