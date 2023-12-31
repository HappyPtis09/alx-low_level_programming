#include "lists.h"

/**
 * listint_len - a function that the number of elements in a list.
 *
 * @h: pointer
 *
 * Return: number of elements in a linked list.
*/

size_t listint_len(const listint_t *h)
{
	size_t i;

	for (i = 0; h != NULL; i++)
	{
		h = h->next;
	}
	return (i);
}
