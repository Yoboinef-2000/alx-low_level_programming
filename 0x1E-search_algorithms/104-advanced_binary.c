#include "search_algos.h"

/**
 * advanced_binary - this function does a basic binary search
 * but with a twist - it must return the index of the first value
 * in the array
 *
 * @array: this is a pointer to the first element of the array to search in
 * @size: this is the number of elements in array
 * @value: this is the value to search for
 *
 * Description: refer to the first commented out line.
 * (+)
 * Every time an array is split, the new array (or subarray)
 * that is being searched in, should be printed.
 *
 * Return: returns the index where value is located
 * If value is not present in array or if array is NULL,
 * the function must return -1
 */

int advanced_binary(int *array, size_t size, int value)
{
	size_t mid, i;
	int result;

	if (array == NULL || size == 0)
		return (-1);

	printf("Searching in array: ");
	for (i = 0; i < size; i++)
	{
		printf("%d", array[i]);
		if (i < size - 1)
			printf(", ");
	}
	printf("\n");

	mid = size / 2;
	if (array[mid] == value)
	{
		if (size == 1 || array[mid - 1] != value)
			return (mid);
	}
	if (array[mid] < value)
	{
		result = advanced_binary(array + mid + 1, size - mid - 1, value);
		if (result != -1)
			return (mid + 1 + result);
	}
	else
	{
		return (advanced_binary(array, mid, value));
	}
	return (-1);
}
