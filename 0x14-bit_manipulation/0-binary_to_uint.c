#include "main.h"

/**
 * binary_to_uint - a function that converts a
 *                       binary number to an unsigned int
 *
 * @b: char pointer
 *
 * Return: the converted number, or 0
*/

unsigned int binary_to_uint(const char *b)
{
	unsigned int dic = 0;
	unsigned int i = 0;

	if (b == NULL)
	{
		return (0);
	}
	while (b[i] != '\0')
	{
		if (b[i] != '0' && b[i] != '1')
		{
			return (0);
		}
		dic = dic * 2 + (b[i] - '0');
		i++;
	}

	return (dic);
}
