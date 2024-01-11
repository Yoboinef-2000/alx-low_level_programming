#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * add_dnodeint_end - this function adds a new node at the end
 * of a doubly linked list "dlistint_t"
 *
 * @head: this is a pointer to the doubly linked list "dlistint_t"
 * @n: this is the value of the new node that is going to be added
 *
 * Description: Refer to the first commented out line
 *
 * Return: Returns the address of the newly added node
 * or NULL if it fails
 */

dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *newnode;
	dlistint_t *currentnode;

	newnode = malloc(sizeof(dlistint_t));

	if (newnode == NULL)
	{
		return (NULL);
	}

	currentnode = *head;
	newnode->n = n;
	newnode->next = NULL;

	if (*head == NULL)
	{
		*head = newnode;
		newnode->prev = NULL;
		return (newnode);
	}

	while (currentnode != NULL)
	{
		if (currentnode->next == NULL)
		{
			currentnode->next = newnode;
			newnode->prev = currentnode;
			return (newnode);
		}
		currentnode = currentnode->next;
	}
	return (NULL);
}
