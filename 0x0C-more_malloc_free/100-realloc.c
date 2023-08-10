#include <stdlib.h>
#include "main.h"

/**
 * *_realloc - a function that reallocates a memory block using malloc and free
 * @ptr: pointer
 * @old_size: unsigned int
 * @new_size: unsigned int
 *
 * Return: ptr
 */

void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	unsigned int i;
	char *str1;
	char *str2;

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
		return (malloc(new_size));
	}

	str1 = malloc(new_size);

	if (str1 == NULL)
	{
		return (NULL);
	}
	str2 = str1;

	if (new_size < old_size)
	{
		for (i = 0; i < new_size; i++)
		{
			str1[i] = str2[i];
		}
	}
	if (new_size > old_size)
	{
		for (i = 0; i < old_size; i++)
		{
			str1[i] = str2[i];
		}
	}

	free(ptr);
	return (str1);
}
