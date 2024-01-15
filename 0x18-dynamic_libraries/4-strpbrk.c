#include "main.h"
#include <stdio.h>

/**
 * _strpbrk - this function locates the first occurrence in
 * the string "s" of any of the bytes in the string "accept"
 *
 * @s: the main string to be checked
 * @accept: the string that is used for evaluation of the condition
 * mentioned in 'RETURN' below.
 *
 * Description: Refer to the first commented out line
 *
 * Return: Returns a pointer to the byte in "s" that matches one of
 * the bytes in "accept", or NULL if no such byte is found
 */

char *_strpbrk(char *s, char *accept)
{
	int i, j;

	for (i = 0; s[i] != '\0'; i++)
	{
		for (j = 0; accept[j] != '\0'; j++)
		{
			if (s[i] == accept[j])
			{
				return (s + i);
			}
		}
	}
	return (NULL);
}
