#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * free_listint2 - this function frees the list "head"
 * and sets "head" to NULL.
 *
 * @head: the list to be freed
 *
 * Description: refer to the first commented out line
 */

void free_listint2(listint_t **head)
{
	listint_t *current, *nexxt;

	if (head == NULL || *head == NULL)
	{
		return;
	}
	current = *head;
	while (current != NULL)
	{
		nexxt = current->next;
		free(current);
		current = nexxt;
	}
	*head = NULL;
}
