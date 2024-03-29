#include "main.h"
#include <stdio.h>

/**
 * rot13 - a function that encodes a string using rot13
 * @s: the string at play
 *
 * Description: What is rot13 you may ask. Well as stated
 * in wikipedia, the world's most reliable source(sarcastic
 * ofcourse), "ROT13 ("rotate by 13 places", sometimes
 * hyphenated ROT-13) is a simple letter substitution cipher
 * that replaces a letter with the 13th letter after it in
 * the latin alphabet. ROT13 is a special case of the Caesar
 * cipher which was developed in ancient Rome."
 *
 * Return: the rot13 encoded string
 */

char *rot13(char *s)
{
	int i;
	char c;

	for (i = 0; s[i] != '\0'; i++)
	{
		c = s[i];

		if ((c >= 'a' && c <= 'z'))
		{
			s[i] = ((c - 'a' + 13) % 26) + 'a';
		}
		else if (c >= 'A' && c <= 'Z')
		{
			s[i] = ((c - 'A' + 13) % 26) + 'A';
		}
	}
	return (s);
}
