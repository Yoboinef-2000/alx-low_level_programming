#include<stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	char comb;

	for (comb = '0'; comb <= '9'; comb ++)
	{
		putchar(comb);
	}

	for (comb = 'a'; comb <= 'f'; comb ++)
	{
		putchar(comb);
	}

	putchar('\n');
	return (0);
}
