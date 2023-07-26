#include "main.h"

/**
 * *_strcat - a function that concatenates two strings.
 *
 * @dest: char to be add to
 * @src: char to be add from
 *
 * Return: a pointer to the resulting string dest.
 */

char *_strcat(char *dest, char *src)
{
	char *p = dest + strlen(dest);

	while (*src)
	{
		*p++ = *src++;
	}
	*p = '\0';
	return (dest);
}
