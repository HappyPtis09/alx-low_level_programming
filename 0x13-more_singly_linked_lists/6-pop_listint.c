#include "lists.h"

/**
 * pop_listint -  a function that deletes the head node of a listint_t linked list,
 *                         and returns the head node’s data (n).
 *
 * @head: Pointer to a pinter
 *
 * Return: the head node’s data (n); if the linked list is empty return 0
*/

int pop_listint(listint_t **head)
{
	listint_t *tempp;
	int n;

	if (!head || !*head)
	{
		return (0);
	}
	n = (*head)->n;
	tempp = (*head)->next;
	free(*head);
	*head = tempp;

	return (n);
}
