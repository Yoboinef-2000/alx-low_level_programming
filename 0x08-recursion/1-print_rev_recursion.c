#include "main.h"
#include <stdio.h>

/**
 * _print_rev_recursion - this is a function that
 * is going to print a string in reverse recursively.
 * @s: the string to be printed
 *
 * Description: refer to the first commented out line
 */

void _print_rev_recursion(char *s)
{
	if (*s == '\0')
	{
		return;
	}
	_print_rev_recursion(s + 1);
	putchar(*s);
}
