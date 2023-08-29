#include "lists.h"

/**
 * sum_listint - a function that returns the sum of all
 *                     the data (n) of a listint_t linked list.
 *
 * @head: Pointer
 *
 * Return:  the sum of all the data (n);if the list is empty, return 0
 */

int sum_listint(listint_t *head)
{
	int summ;
	listint_t *current = head;

	summ = 0;
	while (current)
	{
	summ += current->n;
	current = current->next;
	}
	return (summ);
}
