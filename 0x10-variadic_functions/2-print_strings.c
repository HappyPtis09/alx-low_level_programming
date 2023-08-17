#include <stdio.h>
#include "variadic_functions.h"
#include <stdarg.h>

/**
 * print_strings -  a function that prints strings, followed by a new line
 *
 * @separator: separator of strings
 * @n: num of strings
 *
 * Return: 0
 */

void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int s;
	va_list strings;

	va_start(strings, n);

	for (s = 0; s < n; s++)
	{
		char *str = va_arg(strings, char*);
		if (str == NULL)
		{
			printf("(nil)");
		}
		else
		{
			printf("%s", str);
		}

		if (s < n - 1 && separator != NULL)
		{
			printf("%s", separator);
		}
	}

	va_end(strings);

	printf("\n");
}
