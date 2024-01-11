#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * sum_dlistint - this function sums up all the data (n)
 * of a dlistint_t linked list.
 *
 * @head: a pointer to the doubly linked list dlistint_t
 *
 * Description: refer to the first commented out line
 *
 * Return: returns the sum or returns 0 if the list is
 * empty
 */

int sum_dlistint(dlistint_t *head)
{
	dlistint_t *current;
	int sum;

	if (head == NULL)
	{
		return (0);
	}
	current = head;
	sum = 0;

	while (current != NULL)
	{
		sum += current->n;
		current = current->next;
	}
	return (sum);
}


