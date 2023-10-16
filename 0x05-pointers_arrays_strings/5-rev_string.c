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
	int length;

	length = 0;

	while (s[length] != '\0')
	{
		length++;
	}

	char reversedstring[length + 1];
	int charactercount;

	charactercount = 0;

	for (int i = length - 1; i >= 0; i--)
	{
		reversedstring[charactercount] = s[i];
		charactercount++;
	}

	reversedstring[length] = '\0';

	for (int i = 0; i < length; i++)
	{
		s[i] = reversedstring[i];
	}

	s[length] = '\0';
}
