#include <stdio.h>
#include <stdlib.h>
#include "3-calc.h"

/**
 * main - MAIN
 * @argc: number of arguments
 * @argv: array of arguments
 *
 * Description: refer to the first commented out line
 *
 * Return: 0 on success, 98 for incorrect arguments,
 * 99 for invalid operator
 */

int main(int argc, char *argv[])
{
	int num1, num2;
	int (*operation)(int, int);

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}

	num1 = atoi(argv[1]);
	num2 = atoi(argv[3]);

	operation = get_op_func(argv[2]);

	if (operation == NULL || argv[2][1] != '\0')
	{
		printf("Error\n");
		exit(99);
	}

	printf("%d\n", operation(num1, num2));
	return (0);
}

