#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
int ch;
int space;
int comma;
space = 32;
comma = 44;
for (ch = 48; ch <= 57; ch++)
{
putchar(ch);
if (ch != 57)
{
putchar(comma);
putchar(space);
}
}
putchar('\n');
}
