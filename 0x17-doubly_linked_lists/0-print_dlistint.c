#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * print_dlistint - this is a function that prints all the
 * elements of the doubly linked list "dlistint_t"
 *
 * @h: pointer to the doubly linked list "dlistint_t"
 *
 * Description: Refer to the first commented out line
 *
 * Return: returns the number of nodes
 */

size_t print_dlistint(const dlistint_t *h)
{
	size_t numnodes;
	const dlistint_t *current;

	numnodes = 0;
	current = h;

	while (current != NULL)
	{
		printf("%d\n", current->n);
		current = current->next;
		numnodes += 1;
	}
	return (numnodes);
}
