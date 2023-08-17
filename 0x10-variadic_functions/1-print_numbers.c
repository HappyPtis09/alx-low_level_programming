#include <stdarg.h>
#include "variadic_functions.h"
#include <stdio.h>
/**
 * print_numbers - a function that prints numbers, followed by a new line.
 *
 * @separator: separator of numbers
 * @n: number of integers passed to the function
 *
 * Return: 0
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int j;
	va_list numbers;

	va_start(numbers, n);

	for (j = 0; j < n; j++)
	{
		printf("%d", va_arg(numbers, int));

		if (separator != NULL && j < n - 1)
		{
			printf("%s", separator);
		}
	}

	va_end(numbers);

	printf("\n");
}
