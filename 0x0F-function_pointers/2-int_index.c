#include "function_pointers.h"

/**
 * int_index - a function that searches for an integer
 * @array:
 * @size:
 * @cmp:
 *
 * Return: returns the index of the first element for which
 *              the cmp function does not return 0
 *                        If no element matches, If size <=, return -1.
 */

int int_index(int *array, int size, int (*cmp)(int))
{
	if (size <= 0)
	{
		return (-1);
	}
	if (array && cmp)
	{
		for (i = 0; i < size; i++)
		{
			cmp(array[i]);
		}
	}
	return (i);
}
