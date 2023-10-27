#include "main.h"
#include <stdio.h>

/**
 * _strcmp - function that compares two strings and returns
 * the string that is lexicographically less than the other
 * @s1: the first string to be compared
 * @s2: the second string to be compared
 *
 * Description: refer to the first commented out line
 *
 * Return: if both strings have the same content, the
 * function will return 0. If the first string is
 * lexicographically less than the second, the function
 * will return a negative value. And lastly, if the second
 * string is lexicographically less than the the first one,
 * the function will return a positivie integer.
 */

int _strcmp(char *s1, char *s2)
{
	while (*s1 != '\0' && (*s1 == *s2))
	{
		s1++;
		s2++;
	}
	return (*(unsigned char *)s1 - *(unsigned char *)s2);
}

