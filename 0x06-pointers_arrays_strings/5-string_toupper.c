#include "main.h"
#include <stdio.h>

/**
 * string_toupper - a function that converts the
 * lowercase letters of a string to uppercase
 * @s: the string
 *
 * Description: refer to the first commented out line
 *
 * Return: a string that is all made up uppercase letters
 * is returned
 */

char *string_toupper(char *s)
{
	int i;

	for (i = 0; s[i] != '\0'; i++)
	{
		if (s[i] >= 'a' && s[i] <= 'z')
		{
			s[i] = s[i] + ('A' - 'a');
		}
	}
	return (s);
}
