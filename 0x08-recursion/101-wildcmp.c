#include "main.h"
#include <stdio.h>

/**
 * wildcmp - Compare two strings with wildcards using recursion.
 * @s1: The first string to be compared.
 * @s2: The second string with wildcards.
 *
 * Description: This function compares two strings
 * where the second string may contain wildcard '*' characters.
 *
 * Return: Returns 1 if the strings can be
 * considered identical, otherwise returns 0.
 */
int wildcmp(char *s1, char *s2)
{
	if (*s1 == '\0' && *s2 == '\0')
	{
		return (1);
	}
	if (*s2 == '*')
	{
		return ((wildcmp(s1, s2 + 1) || wildcmp(s1 + 1, s2)));
	}
	if (*s1 == *s2 || *s2 == '?')
	{
		return (wildcmp(s1 + 1, s2 + 1));
	}
	return (0);
}
