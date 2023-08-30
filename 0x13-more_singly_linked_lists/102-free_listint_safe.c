#include "lists.h"

/**
 * free_listint_safe -  a function that frees a listint_t list
 *
 * @h: pointer
 *
 * Return: the size of the list that was free’d
*/

size_t free_listint_safe(listint_t **h)
{
	size_t count = 0;
	int i;
	listint_t *current;

	if (!h || !*h)
		return (0);

	while (*h)
	{
		i = *h - (*h)->next;
		if (i > 0)
		{
			current = (*h)->next;
			free(*h);
			*h = current;
			count++;
		}
		else
		{
			free(*h);
			*h = NULL;
			count++;
			break;
		}
	}

	*h = NULL;

	return (count);
}
