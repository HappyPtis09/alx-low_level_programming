#include "main.h"

/**
 * puts_half -  a function that prints half of a string,
 *      followed by a new line
 * @str: input char
 * Return: Nothing
 */

void puts_half(char *str)
{
	int l = 0;
	int i;

	while (str[l] != '\0')
	{
		l++;
	}
	i = l / 2;

	if (l % 2 != 0)
	{
		i++;
	}
	while (i < l)
	{
		_putchar(str[i]);
		i++;
	}
	_putchar('\n');
}
