#include "main.h"
/**
 * print_diagonal - draws a diagonal line on the terminal.
 * @n : int of the number of times the character \ should be printed
 * Return: 0
 */

void print_diagonal(int n)
{
	if (n > 0)
	{
		int i = 1;

		while (i <= n)
		{
			_putchar('\\');
			i++;
		}
		_putchar('\n');
	}
	else
	{
		_putchar('\n');
	}
}
