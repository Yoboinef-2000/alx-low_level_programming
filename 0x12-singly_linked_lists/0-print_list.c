#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * print_list - this is a function that prints all the
 * elements of the list "list_t"
 * @h: pointer to the list "list_t"
 *
 * Description: refer to the first commented out line
 * ( + )
 * If "str" is NULL, print "[0] (nil)"
 *
 * Return: returns the number of nodes
 */

size_t print_list(const list_t *h)
{
	size_t numNodes;
	const list_t *current;

	current = h;
	numNodes = 0;

	while (current != NULL)
	{
		if (current->str == NULL)
		{
			printf("[0] (nil)\n");
		}
		else
		{
			printf("[%u] %s\n", current->len, current->str);
		}
		current = current->next;
		numNodes += 1;
	}
	return (numNodes);
}
