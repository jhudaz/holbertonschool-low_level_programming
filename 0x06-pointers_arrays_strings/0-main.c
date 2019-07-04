#include "holberton.h"
#include <stdio.h>

/**
 * main - check the code for Holberton School students.
 *
 * Return: Always 0.
 */
int main(void)
{
    char s1[98] = "I'm ";
    char s2[] = "Jimmy\n";
    char *p;

    printf("%s\n", s1);
    printf("%s", s2);
    p = _strcat(s1, s2);
    printf("s1 have %s\n", s1);
    printf("s2 have %s\n", s2);
    printf("pointer have %s", p);
    return (0);
}