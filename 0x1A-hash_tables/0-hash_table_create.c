#include "hash_tables.h"

/**
 * hash_table_create- this function creates a hash table.
 *
 * @size: is the size of the array.
 *
 * Description: refer to the first commented out line.
 *
 * Return: returns a pointer to the newly created hash table.
 * (or)
 * If something went wrong, your function should return NULL
 */

hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *hashhTable;
	unsigned long int i;

	hashhTable = NULL;

	if (size < 1)
	{
		return (NULL);
	}
	hashhTable = malloc(sizeof(hash_table_t));

	if (hashhTable == NULL)
	{
		return (NULL);
	}
	hashhTable->array = malloc(sizeof(hash_node_t *) * size);
	if (hashhTable->array == NULL)
	{
		free(hashhTable);
		return (NULL);
	}
	for (i = 0; i < size; i++)
	{
		hashhTable->array[i] = NULL;
	}

	hashhTable->size = size;
	return (hashhTable);
}
