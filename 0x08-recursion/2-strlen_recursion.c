#include "main.h"

/**
 * _strlen_recursion - Returns the length of a string.
 * 
 * @s: Pointers to The string to be measured.
 *
 * Return: The length of the string.
 */

int _strlen_recursion(char *s)
{
	int l = 0;

	if (*s)
	{
		l++;
		l += _strlen_recursion(s + 1);
	}

	return (l);
}
