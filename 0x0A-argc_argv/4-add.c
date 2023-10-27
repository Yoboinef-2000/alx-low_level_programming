#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

/**
 * main - MAIN
 * @argc: this is short for argument count and it
 * represents the number of arguments passed to the
 * argument line
 * @argv: this is short for argument vector and it
 * hold an array of pointers that point to the strings
 * presented in the argument line
 *
 * Description: This function adds all poistive integers
 * passed into the argument line. There are two conditions
 * though:
 * If no number is passed to the program, it prints 0,
 * followed by a new line
 * If one of the number contains symbols that are not
 * digits, print "Error", followed by a new line, and return 1
 *
 * Return: Returns the sum of the inputted integer numbers
 */

int main(int argc, char *argv[])
{
	int i, chartoint, sum, count;

	sum = 0;

	if (argc == 0)
	{
		printf("%d\n", 0);
		return (0);
	}
	for (count = 1; count < argc; count++)
	{
		i = 0;
		while (argv[count][i])
		{
			if (!isdigit(argv[count][i]))
			{
				printf("Error\n");
				return (1);
			}
			i++;
		}
		chartoint = atoi(argv[count]);
		sum = sum + chartoint;
	}
	printf("%d\n", sum);
	return (0);
}
