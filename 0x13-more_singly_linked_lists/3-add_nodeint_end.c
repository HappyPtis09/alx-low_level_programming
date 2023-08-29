#include "lists.h"

/**
 * *add_nodeint_end -  a function that adds a new node
 *                          at the end of a listint_t list.
 *
 * @head: Pointer to a pointer
 * @n: const int
 *
 * Return: the address of the new element, or NULL if it failed
*/

listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *node;
	listint_t *tempp = *head;

	node = malloc(sizeof(listint_t));

	if (node == NULL)
	{
		return (NULL);
	}
	node->n = n;
	node->next = NULL;

	if (*head == NULL)
	{
		*head = node;
		return (node);
	}
	while (tempp->next)
	{
		tempp = tempp->next;
	}
	tempp->next = node;
	return (node);
}
