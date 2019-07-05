#include "holberton.h"

/**
* _strcmp - function that compares two strings
* @s1: char pointer
* @s2: char pointer
*
* Return: int
*/
int _strcmp(char *s1, char *s2)
{
	int n;
	int i;

	for (i = 0; (s1[i] != '\0' && s2[i] != '\0'); i++)
	{
		if (s1[i] != s2[i])
		{
			n = s1[i] - s2[i];
			break;
		}
		else
		{
			return (0);
		}
	}
	return (n);
}
