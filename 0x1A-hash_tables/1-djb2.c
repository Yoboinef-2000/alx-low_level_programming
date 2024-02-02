#include "hash_tables.h"

/**
 * hash_djb2 - this hash function implements the djb2 algorithm.
 *
 * @str: pointer to unsigned constant character
 *
 * Description: refer to the first commented out line.
 *
 * Return: returns an unsigned long integer
 */

unsigned long int hash_djb2(const unsigned char *str)
{
	unsigned long int hash;
	int c;

	hash = 5381;
	while ((c = *str++))
	{
		hash = ((hash << 5) + hash) + c; /* hash * 33 + c */
	}
	return (hash);
}
