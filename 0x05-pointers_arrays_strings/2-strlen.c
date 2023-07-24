#include "main.h"

/**
 * _strlen - a function that returns the length of a string.
 * @s: char represent the string
 *
 * Return: length of string
 */

int _strlen(char *s)
{
	int i = 0;

	while (*s != '\0')
	{
		i++;
		s++;
	}
	return (i);
}
