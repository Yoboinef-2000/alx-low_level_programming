#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * add_nodeint - this is a functiion that adds a node
 * at the beginning of the listint_t list "head"
 *
 * @head: the list
 * @n: the new node that is going to be added
 *
 * Description: refer to the first commented out line
 *
 * Return: the address of the new pointer or NULL if it
 * failed
 */

listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *newnode;

	newnode = malloc(sizeof(listint_t));

	if (newnode == NULL)
	{
		return (NULL);
	}
	newnode->n = n;
	newnode->next = *head;
	*head = newnode;
	return (*head);
}
