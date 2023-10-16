#include "main.h"
#include <stdio.h>

/**
 * puts2 - function that prints very other
 * character in a given string
 * @str: the string
 *
 * Description: Refer to the first commented out
 * line
 */

void puts2(char *str)
{
	int length, charcounter, i;
	char skiptwoarr[1024];

	length = 0;
	charcounter = 0;

	while (str[length] != '\0')
	{
		length++;
	}

	for (i = 0; i < length; i += 2)
	{
		skiptwoarr[charcounter] = str[i];
		charcounter++;
	}
	skiptwoarr[length] = '\0';

	printf("%s\n", skiptwoarr);
}
