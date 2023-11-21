#include <stdlib.h>
#include <stdio.h>
#include "lists.h"

/**
 * delete_nodeint_at_index - this is a function that deletes a
 * node at a given index from a listint_t list "head"
 *
 * @head: the list
 * @index: the postion from which the new node is going to be
 * deleted
 *
 * Description: refer to the first commented out line
 *
 * Return: 1 if it succeeded, -1 if it failed.
 */

int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *current, *toBeDeleted;
	unsigned int i;

	if (*head == NULL)
	{
		return (-1);
	}

	current = *head;

	if (index == 0)
	{
		*head = (*head)->next;
		free(current);
		return (1);
	}

	for (i = 0; i < index - 1 && current != NULL; i++)
	{
		current = current->next;
	}

	if (current == NULL || current->next == NULL)
	{
		return (-1);
	}

	toBeDeleted = current->next;
	current->next = toBeDeleted->next;
	free(toBeDeleted);
	return (1);
}
