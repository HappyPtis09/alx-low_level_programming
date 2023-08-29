#include "lists.h"

/**
 * free_listint - a function that frees a listint_t list.
 *
 * @head: Pointer
 *
 * Return: Nothing
*/

void free_listint(listint_t *head)
{
	listint_t *tempp;

	while (head != NULL)
	{
		tempp = head->next;
		free(head);
		head = tempp;
	}
}
