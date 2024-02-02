#include "hash_tables.h"

/**
 * key_index - this function gives you the index of the key.
 *
 * @key: the key in question
 * @size: the size of the array of the hash table
 *
 * Description: refer to the first commented out line.
 *
 * Return: Returns the index at which the key/value pair should
 * be stored in the array of the hash table.
 */
unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	return (hash_djb2(key) % size);
}
