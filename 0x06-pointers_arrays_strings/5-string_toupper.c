#include "main.h"

/**
 * string_toupper - change all lowercase to uppercase
 * @i: pointer
 *
 * Return: i
 */

char *string_toupper(char *i)
{
	char *j = i;

	while (*j != '\0')
	{
		if (*j >= 'a' && *j <= 'z')
		{
			*j = *j - 'a' + 'A';
		}
		j++;
	}
	return (i);
}
