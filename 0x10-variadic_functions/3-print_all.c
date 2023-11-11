#include <stdio.h>
#include <stdarg.h>
#include "variadic_functions.h"

/**
 * print_char - this function prints characters
 * @args: holds information about the varaible arguments
 *
 * Description: char
 */

void print_char(va_list args)
{
	char c;

	c = va_arg(args, int);
	printf("%c", c);
}

/**
 * print_int - this function prints integers
 * @args: holds information about the varaible arguments
 *
 * Description: integers
 */

void print_int(va_list args)
{
	int num;

	num = va_arg(args, int);
	printf("%d", num);
}

/**
 * print_float - this function prints floats
 * @args: holds information about the varaible arguments
 *
 * Description: float
 */

void print_float(va_list args)
{
	double f;

	f = va_arg(args, double);
	printf("%f", f);
}

/**
 * print_string - this function prints strings
 * @args: holds information about the varaible arguments
 *
 * Description: strings
 */

void print_string(va_list args)
{
	char *str;

	str = va_arg(args, char *);
	printf("%s", (str != NULL) ? str : "(nil)");
}

/**
 * print_all - this function prints all
 * (characters, integers, floats, strings)
 * @format: this is a list of types of arguments
 * passed to the function
 * "c": char
 * "i": integer
 * "f": float
 * "s": char * (if the string is NULL, print (nil) instead
 *
 * Description: This function prints all
 */

void print_all(const char * const format, ...)
{
	va_list args;
	int i, j;
	int is_first;

	FormatSpecifier formats[] = {
		{'c', print_char},
		{'i', print_int},
		{'f', print_float},
		{'s', print_string},
		{0, NULL}
	};
	is_first = 1;
	i = 0;

	va_start(args, format);

	while (format[i] != '\0')
	{
		j = 0;
		while (formats[j].format != 0)
		{
			if (format[i] == formats[j].format)
			{
				if (!is_first)
				{
					printf(", ");
				}
				is_first = 0;
				formats[j].print_function(args);
				break;
			}
			j++;
		}
		i++;
	}
	printf("\n");
	va_end(args);
}
