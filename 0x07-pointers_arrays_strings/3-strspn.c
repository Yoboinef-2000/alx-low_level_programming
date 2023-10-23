#include "main.h"
#include <stdio.h>

/**
 * _strspn - this function gets the length of a prefix substring
 * @s: the string that is going to be checked
 * @accept: the second string that is used by the function for
 * evaluation according to the condition mentioned in
 * the description below
 *
 * Description: This function returns the number of bytes in the initial
 * segment of "s" which consist only of bytes from "accept"
 *
 * Return: This functions returns an int value of how many bytes
 * in "acceot" match the bytes in "s"
 */

unsigned int _strspn(char *s, char *accept)
{
	int i, j, match;

	match = 0;

	for (i = 0; s[i] != '\0' || s[i] != ' '; i++)
	{
		for (j = 0; accept[j] != '\0'; j++)
		{
			if (s[i] == accept[j])
			{
				match++;
				break;
			}
		}
	}
	return (match);
}
