#include <stdlib.h>
#include "main.h"

/**
 * *malloc_checked - a function that allocates memory using malloc
 * @b: unsigned int
 *
 * Return:  a pointer to the allocated memory
 *    if malloc fails,
 *        the malloc_checked function should cause normal
 *            process termination with a status value of 98.
 */

void *malloc_checked(unsigned int b)
{
	void *alloc;

	alloc = malloc(b);

	if (alloc == NULL)
	{
		exit(98);
	}
	return (alloc);
}
