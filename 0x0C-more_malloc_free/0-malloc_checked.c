#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * malloc_checked - This is a function that alocates memory using malloc
 * @b: If I am not mistaken, this is the size of the of the memory that
 * is going to be allocated using malloc
 *
 * Description: Refer to the first commented out line
 *
 * Return: Returns a pointer to the allocated memory
 * if malloc fails, the malloc_checked function should cause normal process
 * termination with a status value of 98
 */

void *malloc_checked(unsigned int b)
{
	void *ptr;

	ptr = malloc(b);

	if (ptr == NULL)
	{
		exit(98);
	}
	return (ptr);
}
