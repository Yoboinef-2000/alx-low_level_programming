#include <stdio.h>
#include <stdlib.h>

/**
 * main - MAIN
 * @argc: This is short for argument count
 * and it represents the number of arguments
 * passed into the argument line
 * @argv: This is short for argument vector and
 * it is an array of pointers that point to the
 * string passed in the argument line
 *
 * Description: this function will multiply two
 * numbers that have been inputted throught the
 * argument line
 *
 * Return: Returns their product
 */

int main(int argc, char *argv[])
{
	int product, firstargument, secondargument;

	if (argc != 3)
	{
		printf("Error\n");
		return (1);
	}
	firstargument = atoi(argv[1]);
	secondargument = atoi(argv[2]);
	product = firstargument * secondargument;
	printf("%d\n", product);
	return (0);
}
