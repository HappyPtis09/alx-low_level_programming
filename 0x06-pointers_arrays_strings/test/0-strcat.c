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
	int i = 0;
	char *p = dest + i;

	while (dest[i] != '\0')
	{
		i++;
	}
	while (*src)
	{
		*p++ = *src++;
	}
	*p = '\0';
	return (dest);
}
