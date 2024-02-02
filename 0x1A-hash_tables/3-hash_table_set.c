#include "hash_tables.h"

/**
 * hash_table_set - this function adds a new element to the
 * hash table.
 *
 * @ht: is the hash table you want to add or update the key/value to
 * @key: key is the key
 * @value: this is the value that is going to be added.
 *
 * Description: For the most part, refer to the first commenteed out line.
 * But in case of collisions, add the new element in the beginning of the list.
 *
 * Return: 1 if it succeeded, 0 otherwise
 */
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	hash_node_t *newElement;
	hash_node_t *currentElement;
	hash_node_t *head;
	unsigned long int pos;

	newElement = malloc(sizeof(hash_node_t));
	if (newElement == NULL)
		return (0);
	newElement->key = strdup(key);
	if (newElement->key == NULL)
		return (0);
	newElement->value = strdup(value);
	if (newElement->value == NULL)
		return (0); /* My bad for the congestion - Betty a bit** */
	pos = key_index((const unsigned char *)key, ht->size);
	head = ht->array[pos];
	currentElement = ht->array[pos];
	while (currentElement != NULL) /* For Collisions - I am losing my mind */
	{
		if (strcmp(currentElement->key, key) == 0)
		{
			if (head == NULL)
			{
				head = newElement;
				newElement->next = NULL;
			}
			else
			{
				newElement->next = head;
				head = newElement;
			}
			return (1);
		}
		currentElement = currentElement->next;
	}
	newElement->next = ht->array[pos];
	ht->array[pos] = newElement;
	return (1);
}



