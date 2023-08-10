#include <stdlib.h>
#include "main.h"

/**
 * *array_range - a function that creates an array of integers.
 *
 * @min: int
 * @max: int
 *
 * Return: the pointer to the newly created array
 */

int *array_range(int min, int max)
{
	int *arra, i;

	if (min > max)
	{
		return (NULL);
	}

	arra = malloc(sizeof(int) * (max - min + 1));

	if (arra == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < (max - min + 1); i++)
	{
		arr[i] = min + i;
	}
	return (arra);
}
