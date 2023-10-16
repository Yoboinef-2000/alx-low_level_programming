#include "main.h"
#include <stdio.h>

/**
 * rev_string - Reverses a given string
 * @s: The string to be reversed
 *
 * Description: Refer to the first commented
 * out line
 */

void rev_string(char *s)
{
	int length, i, charactercount;
	char reversedstring[1024];

	length = 0;
	charactercount = 0;

	while (s[length] != '\0')
	{
		length++;
	}

	for (i = length - 1; i >= 0; i--)
	{
		reversedstring[charactercount] = s[i];
		charactercount++;
	}

	reversedstring[length] = '\0';

	for (i = 0; i < length; i++)
	{
		s[i] = reversedstring[i];
	}

	s[length] = '\0';
}
