#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * add_dnodeint - this function will add a new node
 * at the beginning of a dlistint_t list.
 *
 * @head: pointer to the doubly linked list "dlistint_t"
 * @n: the new node that is going to be added
 *
 * Description: refer to the first commented out line
 *
 * Return: the address of the new element, or NULL if it failed
 */

dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *current;

	current = malloc(sizeof(dlistint_t));

	if (current == NULL)
	{
		return (NULL);
	}
	current->n = n;
	current->prev = NULL;
	current->next = *head;

	if (*head != NULL)
	{
		(*head)->prev = current;
	}
	*head = current;
	return (current);
}
