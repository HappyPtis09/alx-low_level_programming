#include "main.h"

/**
 * clear_bit - a function that sets the value of a bit to 0 at a given index
 *
 * @n: int pointer
 * @index: int
 *
 * Return: 1 if it worked, or -1 if an error occurred
 */

int clear_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int bit;

	if (index > 63)
	{
		return (-1);
	}
	bit = (1UL << index);

	*n &= ~bit;

	return (1);
}
