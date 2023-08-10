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
	int *arra, i, numbers;

	if (min > max)
	{
		return (NULL);
	}
	numbers = max - min + 1;
	arra = malloc(sizeof(int) * numbers);

	if (arra == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < numbers; i++)
	{
		arra[i] = min + i;
	}
	return (arra);
}
