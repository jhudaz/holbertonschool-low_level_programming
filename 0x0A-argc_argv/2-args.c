#include <stdio.h>
/**
 * main - function that prints all the arguments with a new line
 * @argc: count of the arguments
 * @argv: pointers array
 * Return: int
 */
int main(int argc, char **argv)
{
	while (argc--)
	{
		printf("pocision %d tiene %s\n", argc, *argv++);
	}
	return (0);
}
