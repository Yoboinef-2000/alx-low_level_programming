#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "lists.h"

/**
 * add_node_end - this function adds new node at the end
 * of the singly linked list "list_t"
 *
 * @head: the head of "list_t"
 * @str: the new string that is going to be added to "list_t"
 *
 * Description: refer to the first commented out line
 * ( + )
 * "str" needs to be duplicated
 *
 * Return: returns the address to the newly created node
 * or returns NULL otherwise.
 */

list_t *add_node_end(list_t **head, const char *str)
{
	list_t *newNodeattheEnd;
	list_t *lastNode;

	lastNode = *head;
	newNodeattheEnd = malloc(sizeof(list_t));

	if (newNodeattheEnd == NULL)
	{
		return (NULL);
	}
	newNodeattheEnd->str = strdup(str);
	if (newNodeattheEnd->str == NULL)
	{
		free(newNodeattheEnd);
		return (NULL);
	}
	newNodeattheEnd->len = strlen(str);
	newNodeattheEnd->next = NULL;
	if (*head == NULL)
	{
		*head = newNodeattheEnd;
	}
	else
	{
		while (lastNode->next != NULL)
		{
			lastNode = lastNode->next;
		}
		lastNode->next = newNodeattheEnd;
	}
	return (newNodeattheEnd);
}
