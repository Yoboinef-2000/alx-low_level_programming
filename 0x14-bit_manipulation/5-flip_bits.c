#include "main.h"
#include <stdio.h>

/**
 * flip_bits - Counts the number of bits needed to flip to
 * get from one number to another.
 *
 * @n: First unsigned long integer.
 * @m: Second unsigned long integer.
 *
 * Description: This function calculates the number of
 * bits needed to flip in order to transform
 * one unsigned long integer (n) into another (m).
 *
 * Return: The number of bits to flip from n to m.
 */

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int xorResult;
	unsigned int count;

	xorResult = n ^ m;
	count = 0;

	while (xorResult)
	{
		count += xorResult & 1;
		xorResult >>= 1;
	}

	return (count);
}

