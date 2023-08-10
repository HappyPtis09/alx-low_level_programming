#include "main.h"

/**
 * palin2 - length of a
 * @a: string
 * @l: integer
 *
 * Return: int
 */
int palin2(char *a, int l)
{
	if (*a == 0)
	{
		return (l - 1);
	}
	return (palin2(a + 1, l + 1));
}
/**
 * palin3 - compares string and string reverse
 * @a:char
 * @l: length
 *
 * Return: int
 */

int palin3(char *a, int l)
{
	if (*a != *(a + l))
	{
		return (0);
	}
	else if (*a == 0)
	{
		return (1);
	}
	return (palin3(a + 1, l - 2));
}
/**
 * is_palindrome - if string is a palindrome
 * @s: string
 *
 * Return: int
 */
int is_palindrome(char *s)
{
	int l;

	l = palin2(s, 0);
	return (palin3(s, l));
}
