#include"main.h"
#include<stdio.h>

/**
 * print_line - Prints lines as per the request of
 * the input
 * @n: The number of lines to be printed
 *
 * Description: will print "_" as specified by
 * the user
 */

void print_line(int n)
{
	int count;

	count = 0;

	if (n <= 0)
	{
		_putchar('\n');
	}
	else
	{
		while (count < n)
		{
			_putchar('_');
			count++;
		}
	}
	_putchar('\n');
}
