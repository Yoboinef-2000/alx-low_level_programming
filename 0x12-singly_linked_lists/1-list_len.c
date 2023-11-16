#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * list_len - this is a function that evaluates the number
 * of nodes in a singly linked list
 *
 * @h: a pointer to the singly linked list "list_t"
 *
 * Description: refer to the first commented out line
 *
 * Return: returns the number of nodes
 */

size_t list_len(const list_t *h)
{
	size_t numNodes;
	const list_t *current;

	current = h;
	numNodes = 0;

	while (current != NULL)
	{
		current = current->next;
		numNodes += 1;
	}
	return (numNodes);
}
