#include <stdio.h>

/**
 * main - the main function
 * @argc: short for argument counter which basically
 * holds the number of arguments presented in the input
 * @argv: short for argument vector which basically is
 * array of pointers to the strings which are those
 * arguments
 *
 * Description: this is a program that prints its name,
 * followed by a new line.
 *
 * Return: 0
 */

int main(int argc, char *argv[])
{
	printf("%s\n", argv[0]);
	return (0);
}
