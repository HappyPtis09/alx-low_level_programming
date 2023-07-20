#include "main.h"
/**
 * print_line - draws a straight line in the terminal.
 * @n : int of the number of times the character _ should be printed
 * Return: 0
 */

void print_line(int n)
{
	if (n > 0)
	{
		int i = 1;

		while (i <= n)
		{
			_putchar('_');
			i++;
		}
		_putchar('\n');
	}
	else
	{
		_putchar('\n');
	}
}
