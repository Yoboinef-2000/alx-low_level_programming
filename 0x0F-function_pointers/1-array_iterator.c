#include "function_pointers.h"
#include <stdio.h>

/**
 * array_iterator - this is a function that executes a function
 * given as a parameter on each element of an array.
 * @array: the array that is going to be iterated
 * @size: size of the array
 * @action: a pointer to the function to be used
 *
 * Description: refer to the first commented out line
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	int i;

	for (i = 0; i < size; i++)
	{
		(*action)(array[i]);
	}
}

