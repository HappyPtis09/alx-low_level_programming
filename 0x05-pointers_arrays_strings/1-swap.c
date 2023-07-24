#include "main.h"

/**
 * swap_int - a function that swaps the values of two integers.
 * @a: int to be swapped
 * @b: int to be swapped
 * Return: Nothing
 */

void swap_int(int *a, int *b)
{
	*a = b;
	*b = a;
}
