#include "main.h"

/**
 * puts2 - a function that prints every other character of a string
 *    , starting with the first character, followed by a new line.
 * @str: input string
 * Return: Nothing
 */

void puts2(char *str)
{
	int l = 0;

	while (str[l] != '\0')
	{
		l++;
	}
	int i;

	i = 0;

	while (i < l)
	{
		_putchar(str[i]);
		i += 2;
	}
}
