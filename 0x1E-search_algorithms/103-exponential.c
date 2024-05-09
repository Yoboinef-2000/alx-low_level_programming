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

/**
 * exponential_search - this function searches for a value in a sorted
 * array of integers using the Exponential search algorithm
 *
 * @array: this is a pointer to the first element of the array to search in
 * @size: this is the number of elements in array
 * @value: this is the value to search for
 *
 * Description: refer to the first commented out line
 * (+)
 * The exponential ranges should be powers of 2
 *
 * Return: Returns the first index where value is located
 * If value is not present in array or if array is NULL,
 * the function must return -1
 */

int exponential_search(int *array, size_t size, int value)
{
	size_t i, start, end;

	if (array == NULL || size == 0)
	{
		return (-1);
	}

	if (array[0] == value)
	{
		return (0);
	}

	i = 1;
	while (i < size && array[i] <= value)
	{
		printf("Value checked array[%lu] = [%d]\n", i, array[i]);
		i *= 2;
	}

	start = i / 2;
	end = i < size ? i : size;

	printf("Value found between indexes [%lu] and [%lu]\n", start, i - 1);
	return (binary_search(array + start, end - start, value) + start);
}
