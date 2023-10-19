#include "main.h"
#include <stdio.h>

/**
 * cap_string - this function capitalizes every
 * first word in a given string.
 * @s: the string
 *
 * Description: as mentioned in the first commented
 * out line, this function capitalizes every first word
 * in a given string. Word separators include
 * space, tabulation, new line, ,, ;, ., !, ?, '"', (, ), {, and }
 *
 * Return: a string with every word in it capitalized is
 * returned
 */

char *cap_string(char *s)
{
	int cp;

	cp = 1;

	for (int i = 0; s[i] != '\0'; i++)
	{
		char c = s[i];

		if (c >= 'a' && c <= 'z' && cp)
		{
			s[i] = c + ('A' - 'a');
			cp = 0;
		}

		else if (c == ' ' || c == '\t' || c == '\n' || c == ',' ||
			c == ';' || c == '.' || c == '!' || c == '?'
			|| c == '\"' || c == '(' || c == ')' || c == '{' ||
			c == '}')
		{
			cp = 1;
		}

		else
		{
		       cp = 0;
		}
	}
	return (s);
}
