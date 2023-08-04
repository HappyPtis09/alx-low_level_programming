#include "main.h"

/**
 * _strncat - concatenates two strings up to n bytes.
 * @dest: destination string
 * @src: source string.
 * @n: maximum number of bytes to concatenate from src.
 *
 * Return: pointer to resulting string dest.
 */
char *_strncat(char *dest, char *src, int n)
{
	int dest_len = 0;
	char *dest_end = dest;

	while (*dest_end != '\0')
	{
		dest_end++;
		dest_len++;
	}

	while (*src != '\0' && n-- > 0)
	{
		*dest_end++ = *src++;
		dest_len++;
	}

	if (n > 0)
	{
		*dest_end = '\0';
	}
	return (dest);
}
