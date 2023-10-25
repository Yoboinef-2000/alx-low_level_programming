#include "main.h"
#include <stdio.h>

/**
 * sqroot - Helper function to find the natural
 * square root of a number recursively.
 * @n: The number to find the square root of.
 * @gluck: The current guess for the square root.
 *
 * Description: This recursive function finds
 * the natural square root of the input number.
 *
 * Return: Returns the natural square root if
 * found, or -1 if there is no natural square root.
 */
int sqroot(int n, int gluck)
{
	if (gluck * gluck == n)
	{
		return (gluck);
	}

	if (gluck * gluck > n)
	{
		return (-1);
	}

	return (sqroot(n, gluck + 1));
}

/**
 * _sqrt_recursion - Find the natural square root
 * of a number using recursion.
 * @n: The number to find the square root of.
 *
 * Description: This function finds the natural square
 * root of the input number using recursion.
 *
 * Return: Returns the natural square root if found,
 * or -1 if there is no natural square root.
 */

int _sqrt_recursion(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	return (sqroot(n, 0));
}
