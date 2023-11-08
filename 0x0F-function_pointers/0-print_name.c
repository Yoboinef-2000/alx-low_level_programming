#include "function_pointers.h"
#include <stdio.h>

/**
 * print_name - this function prints name
 * @name: the name to be printed
 * @f: pointer to a function that prints the name
 *
 * Description: refer to the first commented out line
 */

void print_name(char *name, void (*f)(char *))
{
	(*f)(name);
}
