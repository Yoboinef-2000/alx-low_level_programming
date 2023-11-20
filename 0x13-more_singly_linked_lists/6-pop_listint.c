#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * pop_listint - this function deletes the head node of a
 * listint_t linked list "head"
 *
 * @head: the list in question
 *
 * Description: refer to the first commented out line
 *
 * Return: returns the head node’s data "n"
 * (or)
 * if the linked list is empty, return 0
 */

int pop_listint(listint_t **head)
{
	listint_t *current;
	int headN;

	if (*head == NULL)
	{
		return (0);
	}

	headN = (*head)->n;

	current = (*head)->next;
	free(*head);
	*head = current;

	return (headN);
}

