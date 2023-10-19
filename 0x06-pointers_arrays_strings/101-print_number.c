#include "main.h"
#include <stdio.h>
#include <unistd.h>
/**
 * print_number - a function that prints integers
 * @n: the integer to be printed
 *
 * Desription: refer tot he first commented out line
 */

void print_number(int n)
{
	if (n < 0)
	{
		_putchar('-');
		n = -n;
	}
	if (n / 10 != 0)
	{
		print_number(n / 10);
	}
	_putchar(n % 10 + '0');
}
