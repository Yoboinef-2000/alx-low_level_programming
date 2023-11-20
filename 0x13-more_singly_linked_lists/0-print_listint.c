#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * print_listint - this function prints all the elements
 * of the listint_t list "h"
 *
 * @h: the list to be printed
 *
 * Description: the list to be printed
 *
 * Return: returns the number of nodes
 */

size_t print_listint(const listint_t *h)
{
	const listint_t *current;
	int nodecounter;

	current = h;
	nodecounter = 0;

	while (current != NULL)
	{
		printf("%d\n", current->n);
		nodecounter += 1;
		current = current->next;
	}
	return (nodecounter);
}

