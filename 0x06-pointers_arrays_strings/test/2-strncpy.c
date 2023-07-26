#include "main.h"

/**
 * _strncpy - copies a string.
 * @dest: The buffer to copy to.
 * @src: The string to copy from.
 * @n: The maximum number of characters to copy.
 * Return: A pointer to dest.
 */
char *_strncpy(char *dest, char *src, int n)
{
	int i = 0;

	while (src[i] != '\0' && i < n)
	{
		dest[i] = src[i];
		i++;
	}

	while (i < n)
	{
		dest[i] = '\0';
		i++;
	}

	return (dest);
}
