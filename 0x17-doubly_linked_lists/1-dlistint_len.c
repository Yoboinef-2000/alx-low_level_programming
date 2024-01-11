#include <stdlib.h>
#include <stdio.h>
#include "lists.h"

/**
 * dlistint_len - This function returns the length of a
 * doubly linked list dlistint_t
 *
 * @h: a pointer to the doubly linked list dlistint_t
 *
 * Description: refer to the first commented out line
 *
 * Return: returns the number of nodes
 */

size_t dlistint_len(const dlistint_t *h)
{
	size_t numnodes;
	const dlistint_t *current;

	numnodes = 0;
	current = h;

	while (current != NULL)
	{
		current = current->next;
		numnodes += 1;
	}
	return (numnodes);
}
