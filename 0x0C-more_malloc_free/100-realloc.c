#include <stdlib.h>
#include "main.h"
/**
 * *_realloc - a function that reallocates a memory block using malloc and free
 * @ptr: pointer
 * @old_size: unsigned int
 * @new_size: unsigned int
 * Return: ptr
 */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	char *old_ptr;
	char *new_ptr;
	unsigned int copy_size;
	unsigned int i;

	if (new_size == old_size)
	{
		return (ptr);
	}
	if (new_size == 0 && ptr)
	{
		free(ptr);
		return (NULL);
	}

	if (ptr == NULL)
	{
		return malloc(new_size);
	}

	new_ptr = malloc(new_size);
	if (new_ptr == NULL)
	{
		return (NULL);
	}

	old_ptr = ptr;
	copy_size = old_size < new_size ? old_size : new_size;
	for (i = 0; i < copy_size; i++)
	{
		new_ptr[i] = old_ptr[i];
	}

	free(ptr);
	return (new_ptr);
}
