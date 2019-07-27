#include "variadic_functions.h"
#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>
/**
 * print_numbers - function that print n number of integers
 * @separator: char separator
 * @n: int nuber of arguments
 * @...: elipsis
 * Return: void
*/
void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int i = 0;
	va_list list;

	va_start(list, n);

	for (i = 0; i < n; i++)
	{
		printf("%d", va_arg(list, int));
		if (separator == NULL)
			continue;
		else if (i == (n - 1))
			continue;
		else
			printf("%s", separator);
	}
	va_end(list);
	printf("\n");
}
