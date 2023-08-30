#include "lists.h"

/**
 * print_listint_safe -  a function that prints a listint_t linked list
 *
 * @head: pointer
 *
 * Retuen: the number of nodes in the list
*/

size_t free_listint_safe(listint_t **h)
{
	size_t count = 0;
	int diff;
	listint_t *current;

	if (!h || !*h)
	{
		return (0);
	}

	while (*h != NULL)
	{
		diff = *h - (*h)->next;
		if (diff > 0)
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
