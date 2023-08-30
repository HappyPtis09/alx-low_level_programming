#include "lists.h"

/**
 * delete_nodeint_at_index -  a function that deletes the node
 *                                   at index index of a listint_t linked list.
 *
 * @head: pointer to pointer
 * @index: int
 *
 * Return: 1 if it succeeded, -1 if it failed
*/

int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *current = *head;
	listint_t *previous = NULL;
	unsigned int i = 0;

	while (current != NULL && i < index)
	{
		previous = current;
		current = current->next;
		i++;
	}

	if (current == NULL && i < index)
	{
		return (-1);
	}
	if (previous == NULL)
	{
		*head = current->next;
		free(current);
	}
	else
	{
		previous->next = current->next;
		free(current);
	}

	return (1);
}
