#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "lists.h"

/**
 * add_node - this function adds a new node at the
 * beginning of the list "list_t"
 * @head: the head of the node
 * @str: the string to be added at the beginning of
 * "list_t" (ie "head");
 *
 * Description: refer to the first commented out line
 * ( + )
 * "str" in "list_t" needs to be duplicated
 *
 * Return: returns address of the new element or NULL
 * if it failed
 */

list_t *add_node(list_t **head, const char *str)
{
	list_t *newNode;

	newNode = malloc(sizeof(list_t));

	if (newNode == NULL)
	{
		return (NULL);
	}

	newNode->str = strdup(str);
	if (newNode->str != NULL)
	{
		newNode->len = strlen(str);
		newNode->next = *head;
		*head = newNode;
		return (newNode);
	}
	else
	{
		free(newNode);
		return (NULL);
	}
}

