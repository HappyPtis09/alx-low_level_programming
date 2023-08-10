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
	void *rtp;
	char *str1, *str2;

	if (new_size == 0)
	{
		free(ptr);
		return (NULL);
	}

	if (new_size <= old_size)
	{
		return (ptr);
	}
	if (ptr == NULL)
	{
		return (malloc(new_size));
	}
	rtp = malloc(new_size);
	str1 = (char *)ptr;
	str2 = (char *)rtp;

	if (rtp)
	{
		for (i = 0; i < old_size; i++)
		{
			str1[i] = str2[i];
		}
		free(ptr);
	}
	return (rtp);
}
