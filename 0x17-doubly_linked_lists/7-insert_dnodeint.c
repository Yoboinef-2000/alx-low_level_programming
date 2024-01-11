#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * insert_dnodeint_at_index - this function inserts a node at a given index
 *
 * @h: a double pointer to the doubly linked list "dlistint_t"
 * @idx: this is the position the new node is going to be inserted at
 * @n: this is the value of the new node that is going to be inserted
 *
 * Description: refer to the first commented out line
 *
 * Return: the address of the new node, or NULL if it failed
 */

dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *currentnode, *newnode;
	unsigned int indexchecker;

	newnode = malloc(sizeof(dlistint_t));
	if (newnode == NULL)
	{
		return (NULL);
	}

	newnode->n = n;
	currentnode = *h;
	indexchecker = 0;
	if (idx == 0)
	{
		newnode->prev = NULL;
		newnode->next = currentnode->next;
		if (currentnode != NULL)
		{
			currentnode->prev = newnode;
		}
		*h = newnode;
		return (newnode);
	}
	while (currentnode != NULL)
	{
		if (indexchecker == idx)
		{
			newnode->prev = currentnode;
			newnode->next = currentnode->next;
			if (currentnode->next != NULL)
			{
				currentnode->next->prev = newnode;
			}
			currentnode->next = newnode;
			return (newnode);
		}
		indexchecker++;
		currentnode = currentnode->next;
	}
	return (NULL);
}

