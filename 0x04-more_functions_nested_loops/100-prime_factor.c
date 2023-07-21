#include "main.h"
#include <stdio.h>
/**
 * main -prints the largest prime factor of the number 612852475143,
 *     followed by a new line.
 *
 * Return: always 0
 */

int main(void)
{
	long long int num = 612852475143, i = 2;

	while (i * i <= num)
	{
		while (num % i == 0)
		{
			num /= i;
		}
		i++;
	}
	if (num > 1)
	{
		printf("%lld\n", num);
	}

	return (0);
}
