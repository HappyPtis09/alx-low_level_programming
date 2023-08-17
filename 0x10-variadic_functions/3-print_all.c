#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>
/**
 * print_all - a function that prints anything.
 * @format: list of types of arguments passed to the functio
 * Return: 0
 */
void print_all(const char * const format, ...)
{
	va_list args;
	int i = 0;
	char *s;
	char c;
	float f;
	int int_value;

	va_start(args, format);
	while (format && format[i])
	{
		switch (format[i])
		{
		case 'c':
			printf("%c", va_arg(args, int));
			break;
		case 'i':
			printf("%d", va_arg(args, int));
			break;
		case 'f':
			printf("%f", va_arg(args, double));
			break;
		case 's':
			s = va_arg(args, char *);
			if (s == NULL)
				printf("(nil)");
			else
				printf("%s", s);
			break;
		default:
			i++;
			continue;
		}
		if (format[i + 1])
			printf(", ");
		i++;
	}
	va_end(args);
	printf("\n");
}
