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

