#include "main.h"
#include <stdio.h>

/**
 * reverse_array - a function that reverses the contents
 * of an integer array
 * @a: the array to be reversed
 * @n: the number of elements in the array
 *
 * Description: refer to the first commented out line
 */

void reverse_array(int *a, int n)
{
	int i;
	int temparray;

	for (i = 0; i < n / 2; i++)
	{
		temparray = a[i];
		a[i] = a[n - 1 - i];
		a[n - 1 - i] = temparray;
	}
}

