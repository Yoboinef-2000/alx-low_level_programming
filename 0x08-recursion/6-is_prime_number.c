#include "main.h"
#include <stdio.h>

/**
 * is_prime_number - this is a function that evaluates
 * whether the given number "n" is a  prime number or not
 * @n: the number in question
 *
 * Description: refer to the first commented out line.
 *
 * Return: Returns 1 if the input integer is a prime number,
 * otherwise returns 0
 */

int is_prime_number(int n)
{
	int i, temp;

	temp = n;

	if (n <= 1)
	{
		return (0);
	}

	while (n > 2)
	{
		if (temp % (n - 1) == 0)
		{
			return (0);
		}
		n--;
	}
	return (1);
}
