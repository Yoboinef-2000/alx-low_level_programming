#include "main.h"
#include <stdio.h>

/**
 * _pow_recursion - This is a function that returns
 * the value of "x" raised to the power of "y".
 * @x: The number that is going to be raised by the
 * power of "y"
 * @y: The power
 *
 * Description: Refer to the first commented out line.
 * But there is another condition: If "y" is lower
 * than 0, the function should return -1
 *
 * Return: The result of "x" being raised by the power
 * of "y" is returned
 */

int _pow_recursion(int x, int y)
{
	if (y < 0)
	{
		return (-1);
	}
	if (y == 0)
	{
		return (1);
	}
	if (y == 1)
	{
		return (x);
	}
	return (x * (_pow_recursion(x, y - 1)));
}
