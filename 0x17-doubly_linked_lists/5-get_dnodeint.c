#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * get_dnodeint_at_index - this function returns the nth node
 * of a dlistint_t linked list.
 *
 * @head: pointer to the doubly linked list
 * @index: the position in the doubly linked list that we
 * are looking for
 *
 * Description: refer to the first commented out line
 *
 * Return: returns the nth node or returns NULL if it
 * doesnt exit.
 */

dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	dlistint_t *current;
	unsigned int indexchecker;

	current = head;
	indexchecker = 0;
	while (current != NULL)
	{
		if (indexchecker == index)
		{
			return (current);
		}
		indexchecker++;
		current = current->next;
	}
	return (NULL);
}
