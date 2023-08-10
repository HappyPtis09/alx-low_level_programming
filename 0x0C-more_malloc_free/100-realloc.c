#include <stdlib.h>
#include "main.h"

/**
 * *_realloc - a function that reallocates a memory block using malloc and free
 * @ptr
 * @old_size: unsigned int
 * @new_size: unsigned int
 *
 * Return: ptr
 */

void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	if (new_size == 0)
	{
		return (NULL);
	}

	ptr = malloc(old_size);

	if (new_size == old_size)
	{
		return (ptr);
	}
	if (ptr == NULL)
	{
		return(NULL);
	}
	if (new_size > old_size)
	{
		ptr = malloc(new_size);
	}
	return (ptr);
}
