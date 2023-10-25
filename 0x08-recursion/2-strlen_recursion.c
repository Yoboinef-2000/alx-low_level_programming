#include "main.h"
#include <stdio.h>

/**
 * _strlen_recursion - This is a function that will
 * print the length of a string but doee it with
 * the help of the concept of recursion
 * @s: The string
 *
 * Description: Refer to the first commented out line
 *
 * Return: Returns the length of the string 's'
 */
int _strlen_recursion(char *s)
{
	if (*s == '\0')
	{
		return (0);
	}
	return (1 + _strlen_recursion(s + 1));
}
