#include <stdlib.h>
#include <stdio.h>
#include "lists.h"

/**
 * delete_dnodeint_at_index - this function deletes a node at a
 * specified index
 *
 * @head: this is a pointer to the doubly linked list
 * @index: this is the position of the node that is going to be
 * deleted
 *
 * Description: refer to the first commented out line
 *
 * Return: returns 1 if the deletion was successful, returns -1
 * otherwise
 */

int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *currentnode;
	unsigned int indexchecker;

	if (*head == NULL)
	{
		return (-1);
	}
	indexchecker = 0;

	currentnode = *head;
	if (index == 0)
	{
		*head = currentnode->next;
		if (*head != NULL)
		{
			(*head)->prev = NULL;
		}
		free(currentnode);
		return (1);
	}

	while (currentnode != NULL)
	{
		if (indexchecker == index)
		{
			if (currentnode->prev->next != NULL)
			{
				currentnode->prev->next = currentnode->next;
			}
			if (currentnode->next->prev != NULL)
			{
				currentnode->next->prev = currentnode->prev;
			}
			free(currentnode);
			return (1);
		}
		indexchecker++;
		currentnode = currentnode->next;
	}
	return (-1);
}


