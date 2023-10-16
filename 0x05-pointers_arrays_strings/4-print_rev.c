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
	int length, totalcharacters, i;

	length = 0;
	totalcharacters = 0;

	while (s[length] != '\0')
	{
		length++;
	}

	char reversedstring[1024];

	for (i = length - 1; i >= 0 ; i--)
	{
		reversedstring[totalcharacters] = s[i];
		totalcharacters++;
	}

	reversedstring[length] = '\0';
	printf("%s\n", reversedstring);
}
