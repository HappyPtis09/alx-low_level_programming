#include "main.h"

/**
 * flip_bits -  a function that returns the number of bits you would
 *                    need to flip to get from one number to another
 * 
 * @n: first int
 * @m: second int
 *
 * Return: the number of bits you would
 *                need to flip to get from one number to another
 */

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	int i, numm;
	unsigned long int bit;
	unsigned long int flip = n ^ m;

	numm = 0;
	for (i = 63; i >= 0; i--)
	{
		bit = flip >> i;
		if (bit & 1)
		{
			numm++;
		}
	}

	return (numm);
}
