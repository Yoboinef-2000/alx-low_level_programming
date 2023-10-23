#include "main.h"
#include <stdio.h>

/**
 * print_diagsums - this is a function that prints the sum
 * of the two diagonals of a square matrix of integers.
 * @a: the name of the square matrix
 * @size: the size of the square matrix "a"
 *
 * Description: refer to the first commented out line
 */

void print_diagsums(int *a, int size)
{
	int firstdiag, seconddiag, i;

	firstdiag = 0;
	seconddiag = 0;

	for (i = 0; i < size; i++)
	{
		firstdiag += a[i * size + i];
	}

	for (i = 0; i < size; i++)
	{
		seconddiag += a[i * size + (size - 1 - i)];
	}

	printf("%d, ", firstdiag);
	printf("%d\n", seconddiag);
}
