#include "main.h"

/**
 * _isdigit:  checks for a digit (0 through 9)
 * @c: the one to be checked
 * return: 1 if c a digit,0 if otherwise
 */

int _isdigit(int c)
{
	if (c >= 0 && c < 10)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
