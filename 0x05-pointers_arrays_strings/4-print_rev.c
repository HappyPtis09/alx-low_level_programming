#include "main.h"

/**
 * print_rev - a function that prints a string
 *    , in reverse, followed by a new line.
 * @s: char with string
 * Return: Nothing
 */

void print_rev(char *s)
{
	int i = _strlen(s);
	int j = i - 1;

	while (j >= 0)
	{
		_putchar(s[j]);
		j--;
	}
	_putchar('\n');
}
