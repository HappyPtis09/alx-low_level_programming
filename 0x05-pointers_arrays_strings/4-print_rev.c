#include "main.h"

/**
 * print_rev - a function that prints a string
 *    , in reverse, followed by a new line.
 * @s: char with string
 * Return: Nothing
 */

void print_rev(char *s)
{
	int l = 0;/* Length */
	int i;

	while (s[l] != '\0')
	{
		l++;
	}

	i = l - 1;

	while (i >= 0)
	{
		_putchar(s[i]);/* reverse length*/
		i--;
	}
	_putchar('\n');
}
