#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * add_nodeint_end - this functiin adds new node at the end
 *
 * @head: the list
 * @n: the new node to be added
 *
 * Description: refer to the first commented out line
 *
 * Return: returns address to the newly added node or
 * NULL otherwise
 */

listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *newnode, *current;

	if (head == NULL)
	{
		return (NULL);
	}
	newnode = malloc(sizeof(listint_t));

	if (newnode == NULL)
	{
		return (NULL);
	}

	newnode->n = n;
	newnode->next = NULL;

	if (*head == NULL)
	{
		*head = newnode;
		return (*head);
	}

	current = *head;

	while (current->next != NULL)
	{
		current = current->next;
	}

	current->next = newnode;
	return (newnode);
}
