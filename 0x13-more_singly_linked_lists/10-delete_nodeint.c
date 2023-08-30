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

	if (*head == NULL)
	{
		return (-1);
	}
	if (index == 0)
	{
		*head = (*head)->next;
		free(current);
		return (1);
	}
	while (i < index - 1)
	{
		if (!current || !(current->next))
		{
			return (-1);
		}
		current = current->next;
		i++;
	}
	previous = current->next;
	current->next = previous->next;
	free(previous);

	return (1);
}
