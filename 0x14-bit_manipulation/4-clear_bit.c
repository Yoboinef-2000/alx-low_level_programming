#include <stdlib.h>
#include <stdio.h>
#include "main.h"

/**
 * clear_bit - this function the value of a bit to 0 at a
 * given index.
 *
 * @n: the value to be changed
 * @index: the value of where the index is going to change
 *
 * Description: refer to the first commented out line
 *
 * Return: 1 if it worked, or -1 if an error occurred
 */

int clear_bit(unsigned long int *n, unsigned int index)
{
	unsigned int maxIndex;
	unsigned long int mask;

	maxIndex = sizeof(unsigned long int) * 8 - 1;
	if (index > maxIndex)
	{
		return (-1);
	}
	mask = ~(1UL << index);
	*n &= mask;
	return (1);
}
