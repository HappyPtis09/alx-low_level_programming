#include "main.h"

/**
 * reverse_array - a function that reverses the content
 *    of an array of integers.
 *
 * @a: an array of integers
 * @n: the number of elements of the array
 *
 * Return: Nothing
 */

void reverse_array(int *a, int n)
{
	int i = 0;
	int j;

	while (i < n / 2)
	{
		j = a[i];
		a[i] = a[n - 1 - i];
		a[n - 1 - i] = j;
		i++;
	}
}
