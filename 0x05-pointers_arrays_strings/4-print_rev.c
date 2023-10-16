#include "main.h"
#include <stdio.h>

/**
 * print_rev - function that prints the
 * reverse of a string
 * @s: The string to be reversed
 *
 * Description: Look at the first commented
 * out line
 */

void print_rev(char *s)
{
	int length;

	length = 0;

	while (s[length] != '\0')
	{
		length++;
	}

	char reversedstring[length + 1];
	int totalcharacters;

	totalcharacters = 0;

	for (int i = length - 1; i >= 0 ; i--)
	{
		reversedstring[totalcharacters] = s[i];
		totalcharacters++;
	}

	reversedstring[length] = '\0';
	printf("%s\n", reversedstring);
}
