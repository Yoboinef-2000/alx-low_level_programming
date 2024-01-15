#include "main.h"
#include <stdio.h>

/**
 * _memcpy - This is a function that copies memory area
 * @dest: The destiination of where the copied memory
 * area is going to be
 * @src: the memory area that is being copied
 * @n: "n" bytes of memory area from "src" are copied to
 * "dest"
 *
 * Description: refer to the first commented out line
 *
 * Return: A pointer to the memory area "dest" is returned
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		dest[i] = src[i];
	}
	return (dest);
}
