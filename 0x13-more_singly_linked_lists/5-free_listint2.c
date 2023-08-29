#include "lists.h"

/**
 * free_listint2 - a function that frees a listint_t list.
 *
 * @head: Pointer to a pointer
 *
 * Return: Nothing
*/

void free_listint2(listint_t **head)
{
	listint_t *tempp;

	if (head == NULL)
	{
		return (NULL);
	}

	while (*head)
	{
		tempp = (*head)->next;
		free(*head);
		*head = tempp;
	}
	*head = NULL;
}
