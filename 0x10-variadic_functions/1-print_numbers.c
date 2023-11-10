#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>

/**
 * print_numbers - this is a function that prints numbers
 * followed by a new line
 * @separator: this is going to be the string that is going
 * to be used to separate the numbers
 * @n: the number of integers that are going to be printed
 *
 * Description: refer to the first commented out line
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	va_list args;

	va_start(args, n);

	if (n == 0)
	{
		printf("\n");
		va_end(args);
		return;
	}

	if (separator == NULL)
	{
		separator = "";
	}
	for (i = 0; i < n; i++)
	{
		printf("%d", va_arg(args, int));

		if (i < n - 1 && separator != NULL)
		{
			printf("%s", separator);
		}
	}

	printf("\n");
	va_end(args);
}
