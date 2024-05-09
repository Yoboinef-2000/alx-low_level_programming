#include "search_algos.h"
#include <math.h>

/**
 * jump_search - this function searches for a value in a sorted array
 * of integers using the Jump Search Algorithm
 *
 * @array: this is a pointer to the first element of the array to search in
 * @size: this is the number of elements on array
 * @value: this is the value to search for
 *
 * Description: refer to the first commented out line
 * (+)
 * The jump step is the square root of the size of the array
 * Every time a value is compared in the array to the value
 * that is being searched, the value must be printed
 *
 * Return: Returns the first index where value is located
 * If value is not present in array or if array is NULL,
 * the function must return -1
 */

int jump_search(int *array, size_t size, int value)
{
	size_t i, jumpstep, low, high;

	jumpstep = sqrt(size);
	low = 0;
	high = jumpstep;
	while (high < size)
	{
		if (array[low] <= value && value <= array[high])
		{
			printf("Value found between indexes [%lu] and [%lu]\n", low, high);
			i = low;
			while (i <= high)
			{
				printf("Value checked array[%lu] = [%d]\n", i, array[i]);
				if (array[i] == value)
					return (i);
				i++;
			}
		}
		else
		{
			if (low == 0)
			    printf("Value checked array[%lu] = [%d]\n", low, array[low]);
			printf("Value checked array[%lu] = [%d]\n", high, array[high]);
		}
		if ((high + jumpstep) > size)
		{
			low = low + jumpstep;
			high = size - 1;
			if (high == low)
			{
				printf("Value found between indexes [%lu] and [%lu]\n", low, size);
				return (-1);
			}
		}
		else
		{
			low = low + jumpstep;
			high = high + jumpstep;
		}
	}
	printf("Value found between indexes [%lu] and [%lu]\n", low, high);
	return (-1);
}
