#include <stdio.h>
#include <math.h>

/**
 * main - Finds and prints the largest prime factor of a number.
 *
 * Return: Always 0.
 */
int main(void)
{
	long long int n = 612852475143;
	long long int max_prime = -1;
	long long int i;

	while (n % 2 == 0)
	{
		max_prime = 2;
		n = n / 2;
	}

	for (i = 3; i <= sqrt(n); i = i + 2)
	{
		while (n % i == 0)
		{
			max_prime = i;
			n = n / i;
		}
	}

	if (n > 2)
	{
		max_prime = n;
	}
	printf("%lld\n", max_prime);
	return (0);
}

