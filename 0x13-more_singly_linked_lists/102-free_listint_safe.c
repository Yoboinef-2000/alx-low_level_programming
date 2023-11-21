#include "lists.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * free_listint_safe - this is a function that frees
 * a singly linked list
 *
 * @h: the list to be freed
 *
 * Description: refer to the first commented out line
 * ( + )
 * This function can free lists with a loop
 * You should go though the list only once
 * The function sets the head to NULL
 *
 * Return: the size of the list that was free’d
 */

size_t free_listint_safe(listint_t **h)
{
	size_t size;
	listint_t *current, *next_node;

	size = 0;
	if (h == NULL || *h == NULL)
	{
		return (0);
	}
	current = *h;
	while (current != NULL)
	{
		next_node = current->next;
		free(current);
		size++;
		current = next_node;
	}
	*h = NULL;
	return (size);
}
