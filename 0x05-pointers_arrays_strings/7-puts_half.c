#include "main.h"
#include <stdio.h>

/**
 * puts_half - function that prints the second
 * half of a string
 * @str: the string
 *
 * Description: Refer to the first commented out
 * line
 */

void puts_half(char *str)
{
	int length, i;

	length = 0;

	while (str[length] != '\0')
	{
		length++;
	}

	if (length % 2 == 0)
	{
		i = length / 2;
	}
	else
	{
		i = (length - 1) / 2;
	}
	while (str[i] != '\0')
	{
		printf("%c", str[i]);
		i++;
	}
	printf("\n");
}
