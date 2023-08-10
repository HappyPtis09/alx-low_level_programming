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
	
