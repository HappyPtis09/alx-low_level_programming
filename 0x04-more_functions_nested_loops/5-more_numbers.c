#include "main.h"

/**
 * more_numbers -  prints 10 times the numbers,
 *      from 0 to 14, followed by a new line.
 *
 * Return: 0
 */

void more_numbers(void)
{
	int i = 1;

	while (i <= 10)
	{
		int j = 1;

		while (j <= 14)
		{
			_putchar(j + '0');
			j++;
		}
		_putchar('\n');
		i++;
	}
}
