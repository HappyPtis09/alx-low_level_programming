#include "main.h"

/**
 * _atoi -  a function that convert a string to an integer.
 * @s: string to be converted
 * Return: int from srting, if none 0
 */
int _atoi(char *s)
{
	int n = 0, i = 1;

	while (*s != '\0')
	{
		if (*s == '-')
		{
			i *= -1;
		}
		else if (*s >= '0' && *s <= '9')
		{
			n = n * 10 + (*s - '0');
		}
		else if (n > 0)
		{
			break;
		}
		
		s++;
	}
	
	return n * i;
}
