#include"main.h"
#include<stdio.h>

/**
 * print_most_numbers - Prints numbers from 1 to 9
 * with the excepyion of 2 and 4
 *
 * Description: Can't you read? Refer to the
 * first commented out line.
 */

void print_most_numbers(void)
{
	char ghar;

	ghar = '1';

	while (ghar <= '9')
	{
		if (ghar != 2 && ghar != 4)
		{
			_putchar(ghar);
		}
		ghar++;
	}
	_putchar('\n');
}
