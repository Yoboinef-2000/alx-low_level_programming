#include "hash_tables.h"

/**
 * hash_table_delete - this function deletes a hash table
 *
 * @ht: this is the hash table that is going to be deleted
 *
 * Description: refer to the first commented out line
 *
 * Return: nada
 */
void hash_table_delete(hash_table_t *ht)
{
	unsigned long int i;
	hash_node_t *currentnode;
	hash_node_t *holder;

	if (ht != NULL)
	{
		for (i = 0; i < ht->size; i++)
		{
			currentnode = ht->array[i];
			while (currentnode != NULL)
			{
				holder = currentnode;
				currentnode = currentnode->next;
				free(holder->key);
				free(holder->value);
				free(holder);
			}
		}
		free(ht->array);
		free(ht);
	}
}
