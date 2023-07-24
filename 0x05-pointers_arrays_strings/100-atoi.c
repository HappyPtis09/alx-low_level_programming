#include "main.h"
/**
 * _atoi - converts a string to an integer
 *
 * @s: the string to convert
 *
 * Return: the integer value of the string, or 0 if there are no digits
 */
int _atoi(char *s)
{
	int n = 0, sign = 1;
	
	while (*s != '\0')
	{
		if (*s == '-')
		{
			sign *= -1;
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
	
	return n * sign;
}
