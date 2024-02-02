#include "hash_tables.h"

/**
 * hash_table_get - thsi function retrieves a value associated
 * with a key.
 *
 * @ht: this is the hash table that is going to be checked
 * @key: this is the key that we are looking for
 *
 * Description: refer to the first commented out line.
 *
 * Return: returns the value associated with the element,
 * or NULL if key couldn’t be found
 */

char *hash_table_get(const hash_table_t *ht, const char *key)
{
	hash_node_t *currentnode;
	unsigned long int pos;

	pos = key_index((const unsigned char *)key, ht->size);
	currentnode = ht->array[pos];

	while (currentnode != NULL)
	{
		if (strcmp(currentnode->key, key) == 0)
		{
			return (currentnode->value);
		}
		currentnode = currentnode->next;
	}
	return (NULL);
}
