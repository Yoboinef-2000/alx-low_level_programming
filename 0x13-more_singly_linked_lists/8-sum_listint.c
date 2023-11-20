#include <stdlib.h>
#include <stdio.h>
#include "lists.h"

/**
 * sum_listint - this function returns the sum of all
 * the data(n) of a listint_t linked list.
 *
 * @head: the list
 *
 * Description: refer to the first commented out line
 *
 * Return: returns the sum
 * (or)
 * if the list is empty, return 0
 */

int sum_listint(listint_t *head)
{
	int sum;
	listint_t *current;

	if (head == NULL)
	{
		return (0);
	}
	current = head;
	sum = 0;

	while (current != NULL)
	{
		sum += ((current)->n);
		current = current->next;
	}
	return (sum);
}
