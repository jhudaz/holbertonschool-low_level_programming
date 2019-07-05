#include "holberton.h"
/**
 * cap_string -  convert all
 * @s: char pointer
 * Return: int
 */
char *cap_string(char *s)
{
	int i = 0;
	int j;

	while (s[i] != '\0')
	{
		i++;
	}
	for (j = 0; j < i; j++)
	{
		if (s[j] == 32 || s[j] == 44 || s[j] == 59 ||
			s[j] == 46 || s[j] == 33 || s[j] == 63 ||
			s[j] == 34 || s[j] == 40 || s[j] == 41 ||
			s[j] == 123 || s[j] == 125 || s[j] == 9 ||
			s[j] == 10)
		{
			if (s[j + 1] >= 97 && s[j + 1] <= 122)
			{
				s[j + 1] = s[j + 1] - 32;
			}
		}
	}
	if (s[0] >= 97 && s[0] <= 122)
	{
		s[0] = s[0] - 32;
	}
	return (s);
}
