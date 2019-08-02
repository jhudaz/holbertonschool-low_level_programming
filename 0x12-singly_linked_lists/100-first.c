#include <stdio.h>
int first(void) __attribute__((constructor));
/**
 * first - check the code for Holberton School students.
 * Return: void.
 */
int first(void)
{
	printf("You're beat! and yet, you must allow,\n"
		   "I bore my house upon my back!\n");
	return (0);
}
