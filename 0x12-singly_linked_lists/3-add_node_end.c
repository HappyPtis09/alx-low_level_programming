#include "lists.h"

/**
* *add_node_end - a function that adds a new node at the end of a list_t list.
*
* @head: Pointer to a pointer
* @str: Pointer
*
* Return: he address of the new element, or NULL if it failed
*/

list_t *add_node_end(list_t **head, const char *str)
{
	list_t *new;
	list_t *node = *head;
	unsigned int len;

	for (len = 0; str[len]; len++)
		;

	new = malloc(sizeof(list_t));

	if (!new)
	{
		return (NULL);
	}

	new->str = strdup(str);
	new->len = len;
	new->next = NULL;

	if (*head == NULL)
	{
		*head = new;
		return (new);
	}

	while (node->next)
	{
		node = node->next;
	}

	node->next = new;

	return (new);
}
