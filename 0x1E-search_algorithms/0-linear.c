#include "search_algos.h"

/**
 * linear_search - this function searches for a value in an array
 * of integers using the Linear search algorithm
 *
 * @array: this is a pointer to the first element of the array to search in
 * @size: this is the number of elements in array
 * @value: this is the value to search for
 *
 * Description: refer to the first commented out line
 * (+)
 * Every time a value is compared in the array to the value
 * that is being searched, the value must be printed
 *
 * Return: Returns the first index where value is located
 * If value is not present in array or if array is NULL,
 * the function must return -1
 */

int linear_search(int *array, size_t size, int value)
{
	size_t i;

	if (array == NULL)
	{
		return (-1);
	}

	for (i = 0; i < size; i++)
	{
		printf("Value checked array[%lu] = [%d]\n", i, array[i]);
		if (array[i] == value)
		{
			return (i);
		}
	}
	return (-1);
}
