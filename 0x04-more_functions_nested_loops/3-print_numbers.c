#include"main.h"
#include<stdio.h>

/**
 * print_numbers - Prints numbers from 1 to 9
 *
 * Description: Can't you read? Refer to the
 * first commented out line.
 */

void print_numbers(void)
{
	char ghar;

	ghar = '0';

	while (ghar <= '9')
	{
		_putchar(ghar);
		ghar++;
	}
	_putchar('\n');
}
