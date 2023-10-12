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
	if (n <= 0)
	{
		_putchar('\n');
	}
	else
	{
		while (n > 0)
		{
			_putchar('_');
			n--;
		}
		_putchar('\n');
	}
}
