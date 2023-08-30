#include "lists.h"

/*
 * reverse_listint - a function that reverses a listint_t linked list
 *
 * @head: Pointer to a pointer
 *
 * Return: Pointer to the first node of the reversed list
 */

listint_t *reverse_listint(listint_t **head)
{
    listint_t *current = NULL;
    listint_t *next = NULL;

    while (*head)
    {
        next = (*head)->next;
        (*head)->next = current;
        current = *head;
        *head = next;
    }

    *head = current;
    return (*head);
}