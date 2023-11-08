#include "function_pointers.h"
#include <stdio.h>

/**
 * int_index - this is a function that seraches for
 * an integer
 * @array: the array that is going to be searched
 * @size: the size of the array
 * @cmp: this is a pointer to the function that is
 * going to be used to compare values
 *
 * Description: refer to the first commented out line
 *
 * Return: returns the index of the first element for
 * which the "cmp" function does not return 0
 * If no element matches, return -1
 * If size <= 0, return -1
 */

int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (size <= 0 || array == NULL || cmp == NULL)
	{
		return (-1);
	}
	for (i = 0; i < size; i++)
	{
		if (cmp(array[i]))
		{
			return (i);
		}
	}
	return (-1);
}
