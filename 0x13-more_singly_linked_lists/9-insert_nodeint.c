#include "lists.h"

/**
 * *insert_nodeint_at_index -  a function that inserts
 *                               a new node at a given position.
 *
 * @head: pointer to pointer
 * @idx: unsigned int
 * @n: int
 *
 * Return: the address of the new node, or NULL if it failed
*/

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *new_node = malloc(sizeof(listint_t));

	if (new_node == NULL)
	{
		return (NULL);
	}

	new_node->n = n;
	if (idx == 0)
	{
		new_node->next = *head;
		*head = new_node;
		return (new_node);
	}

	listint_t *current = *head;
	listint_t *prev = NULL;
	unsigned int count = 0;

	while (current != NULL && count < idx)
	{
		prev = current;
		current = current->next;
		count++;
	}
	if (current == NULL && count < idx)
	{
		return (NULL);
	}
	new_node->next = current;
	prev->next = new_node;

	return (new_node);
}
