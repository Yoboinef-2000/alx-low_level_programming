#include <stdio.h>

/**
 * main - MAIN
 * @argc: this is short for argument count and
 * it holds the number of arguments passed to
 * the argument line
 * @argv: this is short for argument vector and
 * it is an array of pointers that point to the
 * strings passed in the argument line
 *
 * Description: this function will print any argument
 * that was passed to the argument line
 *
 * Return: 0
 */

int main(int argc, char *argv[])
{
	int counter;

	counter = 0;

	while (counter < argc)
	{
		printf("%s\n", argv[counter]);
		counter++;
	}
	return (0);
}
