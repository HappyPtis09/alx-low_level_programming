#include "function_pointers.h"

/**
 * int_index - a function that searches for an integer
 * @array: int array
 * @size: int for size of array
 * @cmp: function pointer
 *
 * Return: returns the index of the first element for which
 *              the cmp function does not return 0
 *                        If no element matches, If size <=, return -1.
 */

int int_index(int *array, int size, int (*cmp)(int))
{
	int a;

	if (array && cmp)
	{
		if (size <= 0)
		{
			return (-1);
		}
		for (a = 0; a < size; a++)
		{
			if (cmp(array[a]))
			{
				return (a);
			}
		}
	}
	return (-1);
}
