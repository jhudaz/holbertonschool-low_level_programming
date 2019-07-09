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
	int flag;
	char *aux = accept;
	unsigned int count2 = 0;

	while (accept[i] != '\0')
	{
		i++;
	}
	count = i;
	for (i = 0; i <= count; i++)
	{
		flag = 0;
		for (j = 0; j <= count; j++)
		{
			if (s[i] == accept[j])
			{
				count2++;
				flag = 1;
				break;
			}
		}
		accept = aux;

		if (flag == 0)
		{
			break;
		}
	}

	return (count2);
}
