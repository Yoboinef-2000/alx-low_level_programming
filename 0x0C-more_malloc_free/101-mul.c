#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

/**
 * isInteger - this function checks whether the char
 * "str" is an integer or not
 * @str: the char to be checked
 *
 * Description: refer to the first commented out line
 *
 * Return: returns 1 if "str" is is a digit, or returns
 * 0 otherwise
 */

int isInteger(char *str)
{
	int i;

	for (i = 0; str[i] != '\0'; i++)
	{
		if (!isdigit(str[i]))
		{
			return (0);
		}
	}
	return (1);
}

/**
 * multiply - this function multiplies two numbers and returns
 * their product
 * @num1: the first number to be multiplied
 * @num2: the second number to be multiplied
 *
 * Description: refer to the first commented out line
 *
 * Return: returns their product
 */

int multiply(int num1, int num2)
{
	return (num1 * num2);
}

/**
 * main - MAIN
 * @argc: This stands for argument counter and it is basically is
 * the number of arguments passed to the argument line
 * @argv: This stands for argument vector and it is a pointer to an
 * array that holds the values that were passed to the argument line
 *
 * Description - MAIN FUNCTION
 *
 * Return: Product of the multiplication of two numbers passed through
 * the argument line
 */

int main(int argc, char *argv[])
{
	int num1, num2, product;

	if (argc != 3)
	{
		printf("Error\n");
		return (98);
	}

	if (!isInteger(argv[1]) || !isInteger(argv[2]))
	{
		printf("Error\n");
		return (98);
	}

	num1 = atoi(argv[1]);
	num2 = atoi(argv[2]);

	product = multiply(num1, num2);
	printf("%d\n", product);
	return (0);
}

