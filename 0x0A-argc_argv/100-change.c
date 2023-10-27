#include <stdio.h>
#include <stdlib.h>
/**
 * main - MAIN
 * @argc: This is short for argument count and it
 * represents the number of arguments passed in the
 * argument line
 * @argv: This is short for argument vector and it is
 * an array of pointers that point to the strings passed
 * in the argument
 *
 * Description: This is a program that prints the minimum
 * number of coins to make change for an amount of money.
 *
 * Return: Returns the amount of cents your given money
 * can be separated to.
 */

int main(int argc, char *argv[])
{
	int chupi, i, ncents;
	int coins[] = {25, 10, 5, 2, 1};

	ncents = 0;
	chupi = atoi(argv[1]);

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}
	if (chupi < 0)
	{
		printf("0\n");
		return (0);
	}
	for (i = 0; i < 5; i++)
	{
		while (chupi >= coins[i])
		{
			chupi -= coins[i];
			ncents++;
		}
	}
	printf("%d\n", ncents);
	return (0);
}
