#include"main.h"
#include<stdio.h>

/**
 * _isdigit - Checks is a character is a digit
 * @c: The character in question
 *
 * Description: This function checks whether the
 * inputted character is a digit or not
 *
 * Return: 1 if 'c' is a digit, 0 otherwise
 */

int _isdigit(char c)
{
	if (c >= '0' && c <= '9')
	{
		return (1);
	}
	return (0);
}
