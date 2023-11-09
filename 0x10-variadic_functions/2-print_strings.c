#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>

/**
 * print_strings - this is a function that prints numbers
 * followed by a new line
 * @separator: this is going to be the string that is going
 * to be used to separate the numbers
 * @n: the number of integers that are going to be printed
 *
 * Description: refer to the first commented out line
 */

void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	char *chupi;
	va_list args;

	va_start(args, n);

	if (separator == NULL)
	{
		separator = "";
	}
	for (i = 0; i < n; i++)
	{
		chupi = va_arg(args, char *);

		if (chupi == NULL)
		{
			printf("(nil)");
		}
		else
		{
			printf("%s", chupi);
		}
		if (i != (n - 1))
		{
			printf("%s", separator);
		}
	}
	printf("\n");
	va_end(args);
}
