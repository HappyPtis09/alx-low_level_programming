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
	list_t *temp = *head;
	unsigned int length;

	for (length = 0; str[length]; length++)
		;

	new = malloc(sizeof(list_t));

	if (!new)
	{
		return (NULL);
	}

	new->str = strdup(str);
	new->length = length;
	new->next = NULL;

	if (*head == NULL)
	{
		*head = new;
		return (new);
	}

	while (temp->next)
	{
		temp = temp->next;
	}

	temp->next = new;

	return (new);
}
