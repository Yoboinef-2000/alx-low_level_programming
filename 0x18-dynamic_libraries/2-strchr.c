#include "main.h"
#include <stdio.h>

/**
 * _strchr - This is a function that locates a specific
 * character in a string
 * @s: This is the string that is going to be searched
 * @c: This is the character that is going to be searched
 * in the string
 *
 * Description: this function looks for the first occurence
 * of the character "c" in the string "s" and returns a pointer
 * to that occurence
 *
 * Return: Returns a pointer to the first occurrence of the
 * character c in the string s,
 * or NULL if the character is not found
 */
char *_strchr(char *s, char c)
{
	int i;

	for (i = 0; s[i] != '\0'; i++)
	{
		if (s[i] == c)
		{
			return (s + i);
		}
	}

	return (NULL);

}
