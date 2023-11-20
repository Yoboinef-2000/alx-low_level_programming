#include <stdlib.h>
#include <stdio.h>
#include "lists.h"

/**
 * get_nodeint_at_index - this function gets and returns the
 * nth node of a listint_t linked list.
 *
 * @head: the list in question
 * @index: this is the index of the node, starting at 0
 *
 * Description: refer to the first commented out line
 *
 * Return: returns the nth node of the list
 * (or)
 * if the node does not exist, return NULL
 */

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int i;
	listint_t *current;

	current = head;
	i = 0;
	while (current != NULL)
	{
		if (i == index)
		{
			return (current);
		}
		current = current->next;
		i++;
	}
	return (NULL);
}

