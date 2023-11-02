#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * array_range - this is a function that creates an array
 * of integers
 * @min: This is the minimum value that the array is going
 * to hold
 * @max: This is the maximum value that the array is going
 * to hold
 *
 * Description - This function creates an array of integers
 * that contain all the values in range of "min", "max" with
 * both "min" and "max" included in the array
 *
 * Return: the pointer to the newly created array
 * If "min" > "max", return NULL
 * If malloc fails, return NULL
 */

int *array_range(int min, int max)
{
	int *minmaxarr, i;

	if (min > max)
	{
		return (NULL);
	}
	minmaxarr = malloc(sizeof(int) * (max - min + 1));
	if (minmaxarr == NULL)
	{
		return (NULL);
	}
	for (i = 0; i <= max; i++)
	{
		minmaxarr[i] = min;
		min++;
	}
	return (minmaxarr);
}
