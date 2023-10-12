#include<stdio.h>
#include"main.h"

/**
 * _isupper - Checks if a character is uppercase
 * @c: The character to check
 *
 * Description: This functions looks if the given
 * character c is an uppercase letter.
 *
 * Return: 1 if 'c' is uppercase, 0 otherwise.
 */

int _isupper(char c)
{
	if (c >= 'A' && c <= 'Z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
