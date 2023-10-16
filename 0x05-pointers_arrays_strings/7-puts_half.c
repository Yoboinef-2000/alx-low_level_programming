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
	int length, charcounter, i;
	char secondhalfarr[1024];

	length = 0;
	charcounter = 0;

	while (str[length] != '\0')
	{
		length++;
	}

	for (i = length / 2; i < length; i++)
	{
		secondhalfarr[charcounter] = str[i];
		charcounter++;
	}
	secondhalfarr[length] = '\0';

	printf("%s\n", secondhalfarr);
}
