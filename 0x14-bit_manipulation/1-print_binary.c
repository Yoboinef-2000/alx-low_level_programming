#include <stdio.h>
#include "main.h"

/**
 * print_binary_recursive - this fucntion prints the binary representation
 * of a number
 *
 * @n: This is the number that is going to be converted
 *
 * Description: refer to the first commeted out line
 */

void print_binary_recursive(unsigned long int n)
{
	if (n > 1)
	{
		print_binary_recursive(n >> 1);
	}
	_putchar((n & 1) + '0');
}

/**
 * print_binary - this fucntion prints the binary representation
 * of a number
 *
 * @n: This is the number that is going to be converted
 *
 * Description: refer to the first commeted out line
 */

void print_binary(unsigned long int n)
{
	if (n == 0)
	{
		_putchar('0');
	}
	else
	{
		print_binary_recursive(n);
	}
}
