#include "holberton.h"
/**
 * _strspn - function that gets the length of a prefix substring.
 * @s: pointer
 * @accept: pointer
 *
 * Return: unsigned int.
 */
unsigned int _strspn(char *s, char *accept)
{
	int count;
	int i;
	int j;
	unsigned int count2 = 0;

	while (accept[i] != '\0')
	{
		i++;
	}
	count = i;
	for (i = 0; i <= count; i++)
	{
		for (j = 0; j <= count; j++)
		{
			if (s[i] == accept[j])
			{
				count2++;
				break;
			}
		}
	}

	return (count2);
}
