#include "main.h"

/**
 * rev_string - Write a function that reverses a string.
 * @s: char contains a string
 * Return: rev string
 */

void rev_string(char *s)
{
	char rev = s[0];
	int l = 0;
	int i = 0;

	while (s[l] != '\0')
	{
		l++;
	}

	while (i < l)
	{
		l--;
		rev = s[i];
		s[i] = s[l];
		s[l] = rev;
		i++;
	}
}
