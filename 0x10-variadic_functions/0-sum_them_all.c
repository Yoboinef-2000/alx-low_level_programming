#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>

/**
 * sum_them_all - this function sums up all
 * the parameters provided
 * @n: this is the number of arguments that
 * are going to be added
 *
 * Description: refer to the first commented
 * out line
 *
 * Return: returns the sum of all the parameters
 */

int sum_them_all(const unsigned int n, ...)
{
	unsigned int i; 
	int sum;
	va_list args;

	if (n == 0)
	{
		return (0);
	}
	sum = 0;
	va_start(args, n);

	for (i = 0; i < n; i++)
	{
		sum = sum + va_arg(args, int);
	}

	va_end(args);

	return (sum);
}
