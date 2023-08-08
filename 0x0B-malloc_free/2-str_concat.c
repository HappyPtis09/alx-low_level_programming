#include <stdlib.h>
#include "main.h"

/**
 * *str_concat - a function that concatenates two strings.
 * @s1: char contains a string
 * @s2: char contains a string
 * Return: a pointer, NULL in failure
 */

char *str_concat(char *s1, char *s2)
{
	int len, len1, len2, i;
	char *conc;

	for (len1 = 0; s1[len1]; len1++)
		;
	for (len2 = 0; s2[len2]; len2++)
		;

	conc = malloc(sizeof(char) + (len1 + len2 + 1));
	len = len1 + len2;

	if (conc == NULL)
	{
		return (NULL);
	}

	for (i = 0; i <= len; i++)
	{
		if (*s1 == NULL)
		{
			*(conc + i) = *(s2 + i);
		}
		else if (*s2 == NULL)
		{
			*(conc + i) = *(s1 + i);
		}
		else
		{
			*(conc + i) = *(s1 + i);
			*(conc + i) = *(s2 + i);
		}

	}
	return (conc);
}
