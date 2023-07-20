#include "main.h"

/**
 * print_most_numbers - prints the numbers, from 0 to 9, followed by a new line
 *
 * Return: always 0
 */

void print_most_numbers(void)
{
	int i = 0;

	while (i < 10)
	{
		if (i != '2' && i != '4')
		{
			_putchar(i);
		}
		i++;
	}
}
