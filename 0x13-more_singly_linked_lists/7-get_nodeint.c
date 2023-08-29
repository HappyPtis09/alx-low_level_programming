#include "lists.h"

/**
 * *get_nodeint_at_index - a function that returns
 *                          the nth node of a listint_t linked list.
 *
 * @head: pointer
 * @index: int
 *
 * Return: the nth node, if it does not exist return NULL
*/

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int n;
	listint_t *tempp = head;

	for (n = 0; tempp && n < index; n++)
	{
		tempp = tempp->next;
	}

	return (tempp ? tempp : NULL);
}
