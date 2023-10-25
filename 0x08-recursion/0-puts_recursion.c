#include "main.h"
#include <stdio.h>

/**
 * _puts_recursion - this is a function that prints a
 * string followed by a new line
 * @s: the string to be printed
 *
 * Description: Refer to the first commented out line
 */
void _puts_recursion(char *s)
{
	if (*s == '\0')
	{
		putchar('\n');
		return;
	}
	putchar(*s);
	_puts_recursion(s + 1);
}

