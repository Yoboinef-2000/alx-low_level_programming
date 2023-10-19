#include "main.h"
#include <stdio.h>

/**
 * leet - a function that replaces certain words
 * with certain letters
 * @s: the string in play
 *
 * Description: Here are the conditions:
 * Letters a and A should be replaced by 4
 * Letters e and E should be replaced by 3
 * Letters o and O should be replaced by 0
 * Letters t and T should be replaced by 7
 * Letters l and L should be replaced by 1
 *
 * Return: the replaced string is printed out
 */
char *leet(char *s)
{
	int i;
	char c;

	for (i = 0; s[i] != '\0'; i++)
	{
		c = s[i];

		if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
		{
			if (c == 'a' || c == 'A')
			{
				s[i] = '4';
			}
			else if (c == 'e' || c == 'E')
			{
				s[i] = '3';
			}
			else if (c == 'o' || c == 'O')
			{
				s[i] = '0';
			}
			else if (c == 't' || c == 'T')
			{
				s[i] = '7';
			}
			else if (c == 'l' || c == 'L')
			{
				s[i] = '1';
			}
		}
	}
	return (s);
}
