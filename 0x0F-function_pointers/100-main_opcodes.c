#include <stdio.h>
#include <stdlib.h>

/**
 * print_opcodes - a function that prints opcodes
 * @num_bytes: the number of bytes ig
 *
 * Description: refer to the first commented out line
 * ( + )
 * The opcodes should be printed in hexadecimal, lowercase
 * each opcode is two char long
 * listing ends with a new line
 */

void print_opcodes(int num_bytes);

/**
 * main - MAIN
 * @argc: this is short for argument counter and it is
 * the number of arguments passed to the argument line
 * through the terminal
 * @argv: this is short for argument vector and it is
 * a pointer to an array that holds the arguments
 * passed into the command line
 *
 * Description: MAIN
 *
 * Return: Returns 1 if the number of arguments passed is different
 * from 1
 * Returns 2 if the number of bytes are less than 0.
 * Returns 0 upon successful completion
 */

int main(int argc, char *argv[])
{
	int num_bytes;

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}

	num_bytes = atoi(argv[1]);

	if (num_bytes < 0)
	{
		printf("Error\n");
		return (2);
	}

	print_opcodes(num_bytes);
	return (0);
}

/**
 * print_opcodes - a function that prints opcodes
 * @num_bytes: the number of bytes ig
 *
 * Description: refer to the first commented out line
 * ( + )
 * The opcodes should be printed in hexadecimal, lowercase
 * each opcode is two char long
 * listing ends with a new line
 */

void print_opcodes(int num_bytes)
{
	char *ptr;
	int i;

	ptr = (char *)print_opcodes;

	for (i = 0; i < num_bytes; i++)
	{
		if (i > 0)
		{
			printf(" ");
		}
		printf("%02x", (unsigned char)ptr[i]);
	}
	printf("\n");
}

