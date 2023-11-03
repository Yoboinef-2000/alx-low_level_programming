#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

int isPositiveInteger(char *str)
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

int multiply(int num1, int num2)
{
	return (num1 * num2);
}

int main(int argc, char *argv[])
{
	int num1, num2, product;

	if (argc != 3) {
		printf("Error\n");
		return (98);
	}
	
	if (!isPositiveInteger(argv[1]) || !isPositiveInteger(argv[2]))
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

