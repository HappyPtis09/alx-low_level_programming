#include <stdlib.h>
#include "main.h"

/**
 * *create_array - a function that creates an array of chars,
 *    and initializes it with a specific char
 * @size: unsigned int
 * @c: char
 * Return: pointer to an array, NULL if size 0
 */

char *create_array(unsigned int size, char c)
{
	char *arr = malloc(size * sizeof(char));

	if (arr == NULL)
	{
		return (NULL);
	}

	for (unsigned int i = 0; i < size; i++)
	{
		arr[i] = c;
	}

	return (arr);
}
