#include "holberton.h"
#include <stdio.h>

/**
 * main - check the code for Holberton School students.
 *
 * Return: Always 0.
 */
int main(void)
{
    char s1[98] = "jaime ";
    char s2[] = "andres!\n";
    char *p;

    printf("S1 have: %s\n", s1);
    printf("S2 have: %s\n", s2);
    p = _strncat(s1, s2, 1);
    printf("S1 after function adding a W have: %s\n", s1);
    printf("S2 after function have: %s", s2);
    printf("pointer after function adding  W have:%s\n", p);
    p = _strncat(s1, s2, 1024);
    printf("S1 have: %s", s1);
    printf("S2 have: %s", s2);
    printf("p have: %s", p);
    return (0);
}