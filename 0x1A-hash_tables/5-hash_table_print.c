#include "hash_tables.h"

/**
 * hash_table_print - this function prints a hash table
 *
 * @ht: the hash table to be printed
 *
 * Decription: refer to the first commented out line.
 *
 * Return: nada
 */
void hash_table_print(const hash_table_t *ht)
{
	unsigned long int i;
	hash_node_t *currentnode;

	if (ht != NULL)
	{
		printf("{");
		for (i = 0; i < ht->size; i++)
		{
			currentnode = ht->array[i];
			while (currentnode != NULL)
			{
				printf("'%s': '%s',", currentnode->key, currentnode->value);
				currentnode = currentnode->next;
			}
		}
		printf("}\n");
	}
	else if (ht == NULL)
	{
		printf("{}\n");
	}
}
