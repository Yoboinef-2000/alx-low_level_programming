#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * _calloc - this is a function that allocates
 * memory for an array using malloc
 * @nmemb: This is the number of elments in the array
 * @size: This is the size in bytes of the elements
 *
 * Description: The _calloc function allocates memory for
 * an array of "nmemb" elements of "size" bytes each
 *
 * Return: Returns a pointer to the allocated memory
 * If nmemb or size is 0, then _calloc returns NULL
 * If malloc fails, then _calloc returns NULL
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	unsigned int i;
	void *allctdmem;

	if (nmemb == 0 || size == 0)
	{
		return (NULL);
	}

	allctdmem = malloc(nmemb * size);

	if (allctdmem == NULL)
	{
		return (NULL);
	}
	memset(allctdmem, 0, (nmemb * size));
	return (allctdmem);
}
