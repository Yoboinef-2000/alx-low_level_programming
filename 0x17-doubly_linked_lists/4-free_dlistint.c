#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * free_dlistint - this function frees a doubly linked list
 *
 * @head: this is a pointer to the doubly linked list that is
 * going to be freed
 *
 * Description: refer to the first commented out line
 */

void free_dlistint(dlistint_t *head)
{
	dlistint_t *currentnode;

	while (head != NULL)
	{
		currentnode = head;
		head = head->next;
		free(currentnode);
	}
}
