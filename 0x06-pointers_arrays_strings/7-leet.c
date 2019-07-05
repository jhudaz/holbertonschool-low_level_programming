#include "holberton.h"
/**
 * leet -  function that encodes a string into 1337
 * @s: char pointer
 * Return: char
 */
char *leet(char *s)
{
	char data[5][2] = {
		{'a', 'A'}, {'e', 'E'}, {'o', 'O'}, {'t', 'T'}, {'l', 'L'}};
	char values[] = {'4', '3', '0'};
	int i;
	int j;

	for (i = 0; s[i] != '\0'; i++)
	{
		for (j = 0; j < 100; j++)
		{
			if (s[i] == data[i][j] && data[i][j] != ' ')
			{
				s[i] = values[i];
			}
			else
			{
				break;
			}
		}
	}
	return (s);
}
