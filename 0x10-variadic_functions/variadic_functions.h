#ifndef VAR_FUNC
#define VAR_FUNC

#include <stdio.h>

typedef struct
{
	char format;
	void (*print_function)(va_list args);
} FormatSpecifier;

int _putchar(char c);
int sum_them_all(const unsigned int n, ...);
void print_numbers(const char *separator, const unsigned int n, ...);
void print_strings(const char *separator, const unsigned int n, ...);
void print_all(const char * const format, ...);

#endif /* VAR_FUNC */
