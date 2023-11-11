#include <stdio.h>
#include <stdarg.h>
#include "variadic_functions.h"

typedef struct
{
	char format;
	void (*print_function)(va_list args);
} FormatSpecifier;

void print_char(va_list args)
{
	char c;

	c = va_arg(args, int);
	printf("%c", c);
}

void print_int(va_list args)
{
	int num;

	num = va_arg(args, int);
	printf("%d", num);
}

void print_float(va_list args)
{
	double f; 

	f = va_arg(args, double);
	printf("%f", f);
}

void print_string(va_list args)
{
	char *str;

	str = va_arg(args, char *);
	printf("%s", (str != NULL) ? str : "(nil)");
}


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
