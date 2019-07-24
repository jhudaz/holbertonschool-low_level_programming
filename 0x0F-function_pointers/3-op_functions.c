#include "function_pointers.h"
#include "calc.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * op_add - returns the sum of a and b
 * @a: first int
 * @b: second int
 * Return: result int
*/
int op_add(int a, int b)
{
	return (a + b);
}
/**
 * op_sub - returns the difference of a and b
 * @a: first int
 * @b: second int
 * Return: result int
*/
int op_sub(int a, int b)
{
	return (a - b);
}
/**
 * op_mul -returns the product of a and b
 * @a: first int
 * @b: second int
 * Return: result int
*/
int op_mul(int a, int b)
{
	return (a * b);
}
/**
 * op_div - returns the result of the division of a by b
 * @a: first int
 * @b: second int
 * Return: result int
*/
int op_div(int a, int b)
{
	if (b == 0)
	{
		exit(98);
		printf("Error\n");
	}
	return (a / b);
}
/**
 * op_mod - returns the remainder of the division of a by b
 * @a: first int
 * @b: second int
 * Return: result int
*/
int op_mod(int a, int b)
{
	if (b == 0)
	{
		exit(98);
		printf("Error\n");
	}
	return (0);
}
