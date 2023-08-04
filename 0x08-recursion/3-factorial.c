#include "main.h"

/**
 * factorial -  a function that returns the factorial of a given number.
 *
 * @n: the number to be calculated
 *
 * Return: factorial of number, if n < 0 return -1
 */

int factorial(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	else if (n == 0)
	{
		return (1);
	}
	return (n = n * factorial(n - 1));
}