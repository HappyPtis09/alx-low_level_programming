#include "main.h"

/**
 * _memset - fill memory with a constant byte
 * @s: pointer to the memory area to be filled
 * @b: byte value to be used for filling
 * @n: number of bytes to be filled starting from s
 *
 * Return: a pointer to the filled memory area s
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		s[i] = b;
	}
	return (s);
}
