#include "main.h"
#include <stdio.h>

/**
 * factorial - this is a function that returns
 * the factorial of a given number
 * @n: The number which we are trying to figure
 * out the factorial of
 *
 * Description: Refer to the first commented out line
 *
 * Return: The factorial of "n"
 */

int factorial(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	if (n == 0)
	{
		return (1);
	}
	return (n * factorial(n - 1));
}
