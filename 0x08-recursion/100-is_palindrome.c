#include <stdio.h>
#include <string.h>
#include "main.h"

/**
 * palrec - Helper function to check if a string is a palindrome recursively.
 * @s: The string to be checked.
 * @primero: The starting index of the current comparison.
 * @deuxieme: The ending index of the current comparison.
 *
 * Description: This recursive function checks if
 * the input string is a palindrome.
 *
 * Return: Returns 1 if the string is a palindrome, 0 otherwise.
 */
int palrec(char *s, int primero, int deuxieme)
{
	if (primero >= deuxieme)
	{
		return (1);
	}
	if (s[primero] != s[deuxieme])
	{
		return (0);
	}
	return (palrec(s, primero + 1, deuxieme - 1));
}

/**
 * is_palindrome - Check if a string is a palindrome using recursion.
 * @s: The string to be checked.
 *
 * Description: This function checks if the input
 * string is a palindrome using recursion.
 *
 * Return: Returns 1 if the string is a palindrome, 0 otherwise.
 */

int is_palindrome(char *s)
{
	int length;

	length = strlen(s);

	if (length <= 1)
	{
		return (1);
	}

	return (palrec(s, 0, length - 1));
}
