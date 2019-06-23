#include <stdio.h>
#include <stdlib.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
int i;
int j;
for (i = 48; i <= 57; i++)
{
for (j = 48; j <= 57; j++)
{
if (j > i)
{
putchar(i);
putchar(j);
if (i != 56)
{
putchar(44);
putchar(32);
}
}
}
}
putchar('\n');
return (0);
}
