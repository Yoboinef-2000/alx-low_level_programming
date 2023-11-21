#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * print_listint_safe - this function prints the
 * singly linked list "head"
 *
 * @head: the list that is going to be printed
 *
 * Description: refer to the first commented out line
 * ( + )
 * This function can print lists with a loop
 * You should go through the list only once
 *
 * Return: the number of nodes in the list
 * If the function fails, exit the program with status 98
 */

size_t print_listint_safe(const listint_t *head)
{
	const listint_t *current;
	size_t nodecount;

	current = head;
	nodecount = 0;

	while (current != NULL)
	{
		printf("[%p] %d\n", (void *)current, current->n);
		nodecount += 1;

		if (current <= current->next)
		{
			exit(98);
		}
		current = current->next;
	}
	return (nodecount);
}
