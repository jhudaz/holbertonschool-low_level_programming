#include "holberton.h"
/**
 * rot13 - Write a function that concatenates two strings.
 * @s: char pointer
 * Return: char
 */
char *rot13(char *s)
{
	char abc[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
	char rot[] = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";
	int i;
	int j;

	for (i = 0; s[i] != '\0'; i++)
	{
		for (j = 0; j < 52; j++)
		{
			if (s[i] == abc[j])
			{
				s[i] = rot[j];
				break;
			}
		}
	}
	return (s);
}
