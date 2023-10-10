#include "main.h"

/**
 * _isalpha - Checks if a character is an alphabetic character
 * @c: The character in play
 *
 * Description: This function checks whether the input character 'c' is
 * an alphabetic character
 *
 * Return: 1 if 'c' is an alphabetic character, 0 otherwise
 */

int _isalpha(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
		return (1);
	else
		return (0);
}
