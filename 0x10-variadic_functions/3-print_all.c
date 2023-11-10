#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>

/**
 * print_all - this is a function that prints anything
 * @format: this is the type of data type that is
 * going to be printed
 * "c": char
 * "i": integer
 * "f": float
 * "s": char * (if the string is NULL, print (nil) instead)
 *
 * Description: refer to the first commented out line
 */

void print_all(const char * const format, ...)
{
	va_list args;
	int isfirst;
	int num;
	int i;
	char c;
	char *str;
	double f;

	i = 0;
	isfirst = 1;
	va_start(args, format);
	while (format[i] != '\0')
	{
		if ((format[i] == 'c') || (format[i] == 'i')
				|| (format[i] == 'f') || (format[i] == 's'))
		{
			if (!isfirst)
			{
				printf(", ");
			}
			isfirst = 0;
			if (format[i] == 'c')
			{
				c = va_arg(args, int);
				printf("%c", c);
			}
			if (format[i] == 'i')
			{
				num = va_arg(args, int);
				printf("%d", num);
			}
			if (format[i] == 'f')
			{
				f = va_arg(args, double);
				printf("%f", f);
			}
			if (format[i] == 's')
			{
				str = va_arg(args, char *);
				if (str == NULL)
				{
					printf("(nil)");
				}
				else
				{
					printf("%s", str);
				}
			}
		}
		i++;
	}
	printf("\n");
	va_end(args);
}
