#include "main.h"
/**
 * print_line - draws a straight line in the terminal.
 * @n : int of the number of times the character _ should be printed
 * Return: 0
 */

void print_line(int n)
{
	if (n > '0')
	{
		_putchar('_' * n);
	}
	else
	{
		_putchar('\n');
	}
}
