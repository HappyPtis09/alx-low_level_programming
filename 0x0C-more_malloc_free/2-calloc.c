#include <stdlib.h>
#include "main.h"

/**
 * *_calloc - a function that allocates memory for an array, using malloc
 *
 * @nmemb: unsigned int
 * @size: unsigned in
 *
 * Return: returns a pointer to the allocated memory.
 *             If nmemb or size is 0, then _calloc returns NULL
 *                 If malloc fails, then _calloc returns NULL
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *alloc;
	unsigend int i;

	if (nmemb == 0 || size == 0)
	{
		return (NULL);
	}

	alloc = malloc(size * nmemb);

	if (alloc == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < size; i++;)
	{
		alloc[i] == 0;
	}
	return (alloc);
}
