#include "variadic_functions.h"
#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>
/**
 * print_all - function that prints anything.
 * @format: char separator
 * @...: elipsis
 * Return: void
*/
void print_all(const char *const format, ...)
{
	char *str;
	unsigned int i = 0;
	va_list list;

	while (format == NULL)
	{
		printf("\n");
		return;
	}
	va_start(list, format);
	while (format[i] != 0)
	{
		switch (format[i])
		{
		case 'c':
			printf("%c", (char)va_arg(list, int));
			break;
		case 'i':
			printf("%d", va_arg(list, int));
			break;
		case 'f':
			printf("%f", (float)va_arg(list, double));
			break;
		case 's':
			str = va_arg(list, char *);
			if (str != NULL)
			{
				printf("%s", str);
				break;
			}
			printf("(nil)");
			break;
		}
		if ((format[i] == 'c' || format[i] == 'i' || format[i] == 's' ||
			format[i] == 'f') && (format[i + 1] != '\0'))
			printf(", ");
		i++;
	}
	printf("\n");
	va_end(list);
}
