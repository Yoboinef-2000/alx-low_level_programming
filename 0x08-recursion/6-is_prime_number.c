#include "main.h"
#include <stdio.h>

/**
 * primerec - Helper function to recursively check
 * if a number is prime.
 * @n: The number to be checked.
 * @div: The current divisor to test.
 *
 * Description: This recursive function
 * checks if the input integer is a prime number.
 *
 * Return: Returns 1 if the input integer is prime, 0 otherwise.
 */

int primerec(int n, int div)
{
	if (n <= 1)
	{
		return (0);
	}
	if (n <= 3)
	{
		return (1);
	}
	if (div * div > n)
	{
		return (1);
	}
	if (n % div == 0)
	{
		return (0);
	}
	return (primerec(n, div + 1));
}

/**
 * is_prime_number - a function that checks whether a number
 * "n" is prime or not
 * @n: The number to be checked
 *
 * Description: Refer to the first commented out line
 *
 * Return: Returns 1 if the input integer is prime, 0 otherwise.
 */

int is_prime_number(int n)
{
	return (primerec(n, 2));
}

