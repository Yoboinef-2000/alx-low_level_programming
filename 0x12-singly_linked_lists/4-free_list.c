#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * free_list - this functions frees the memory allocated
 * to a singly linked list "head" by malloc
 *
 * @head: the list to be freed.
 * Free my dogs! #Freemydoghead (Head is the name of my dargy)
 * #FreePalestine
 *
 * Description: refer to the first commented out line
 */

void free_list(list_t *head)
{
	list_t *current, *nextNode;

	current = head;
	while (current != NULL)
	{
		nextNode = current->next;
		free(current->str);
		free(current);
		current = nextNode;
	}
}
