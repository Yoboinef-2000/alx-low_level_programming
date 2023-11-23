#include <stdlib.h>
#include <stdio.h>
#include "main.h"

/**
 * print_binary - this fucntion prints the binary representation
 * of a number
 *
 * @n: This is the number that is going to be converted
 *
 * Description: refer to the first commeted out line
 *
 * Return: returns the binary representation of a number
 */

void print_binary(unsigned long int n)
{
	int shift;
	unsigned long int mask;

	mask = 1UL << shift;
	shift = sizeof(unsigned long int) * 8 - 1;

	while (shift >= 0)
	{
		if ((n & mask) == 0)
		{
			_putchar('0');
		}
		else
		{
			_putchar('1');
		}
		shift--;
		if (shift % 4 == 0)
		{
			_putchar(' ');
		}
		mask >>= 1;
	}
	_putchar('\n');
}
