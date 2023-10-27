#include <stdio.h>

/**
 * main - MAIN
 * @argc: this is short for argument count and it
 * holds the number of arguments passed to the program
 * @argv: this is short for argument vector and it
 * is an array of pointers to the strings passed in
 * the argument line
 *
 * Description: this function prints the number of
 * arguments passed to the argument line
 *
 * Return: 0
 */

int main(int argc, char *argv[])
{
	printf("%d\n", argc - 1);
	return (0);
}
