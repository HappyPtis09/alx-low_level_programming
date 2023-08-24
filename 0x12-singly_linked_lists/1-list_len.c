#include "lists.h"

/*
* list_len - a function that returns the number of elements in a linked list_t list.
*
* @h: Pointer
*
* Return: the number of elements
*/

size_t list_len(const list_t *h)
{
        size_t l = 0;

	while (h)
	{
		l++;
		h = h->next;
	}
	return (l);
}
