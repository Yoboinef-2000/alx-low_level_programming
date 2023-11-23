#include <stdlib.h>
#include <stdio.h>
#include "main.h"

/**
 * get_bit -  this function gets the values of a bit
 * at a given index.
 *
 * @n: the number in question
 * @index: the position where we want to know the value of
 *
 * Description: refer to hte fisrt commented out line
 *
 * Return: the value of the bit at index index
 * or -1 if an error occured
 */

int get_bit(unsigned long int n, unsigned int index)
{
	unsigned int maxIndex;
	unsigned long int mask;

	maxIndex = sizeof(unsigned long int) * 8 - 1;

	if (index > maxIndex)
	{
		return (-1);
	}
	mask = 1UL << index;
	return ((n & mask) ? 1 : 0);
}
