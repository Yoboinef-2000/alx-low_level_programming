#include "search_algos.h"

/**
 * binary_search - this function searches for a value in a sorted array
 * of integers using the Binary search algorithm
 *
 * @array: this is a pointer to the first element of the array to search in
 * @size: this is the number of elements in array
 * @value: this is the value to search for
 *
 * Description: refer to the first commented out line
 * (+)
 * Print the array that is being searched every time it changes.
 *
 * Return: Returns the index where value is located
 * If value is not present in array or if array is NULL,
 * the function must return -1
 */

int binary_search(int *array, size_t size, int value)
{
	size_t i, low, mid, high;

	if (array == NULL)
	{
		return (-1);
	}
	low = 0;
	high = size - 1;

	while (low <= high)
	{
		printf("Searching in array: ");
		i = low;
		while (i < high)
		{
			printf("%d, ", array[i]);
			i++;
		}
		printf("%d\n", array[i]);

		mid  = low + ((high - low) / 2);
		if (array[mid] == value)
		{
			return (mid);
		}
		if (array[mid] < value)
		{
			low = mid + 1;
		}
		else
		{
			high = mid - 1;
		}
	}
	return (-1);
}
