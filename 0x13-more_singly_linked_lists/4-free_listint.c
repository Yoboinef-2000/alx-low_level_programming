#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * free_listint - this function frees the list "head"
 *
 * @head: the list to be freed
 *
 * Description: refer to the first commented out line
 */

void free_listint(listint_t *head)
{
	listint_t *current, *nexxt;

	current = head;
	while (current != NULL)
	{
		nexxt = current->next;
		free(current);
		current = nexxt;
	}
}
