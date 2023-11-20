#include <stdlib.h>
#include <stdio.h>
#include "lists.h"

/**
 * listint_len - this is a functiion that tells the
 * length of the listint_t list "h"
 *
 * @h: the list in question
 *
 * Description: refer to the first commenteted out line
 *
 * Return: returns the number of nodes
 */

size_t listint_len(const listint_t *h)
{
	const listint_t *current;
	int nodecounter;

	current = h;
	nodecounter = 0;
	while (current != NULL)
	{
		nodecounter += 1;
		current = current->next;
	}
	return (nodecounter);
}
