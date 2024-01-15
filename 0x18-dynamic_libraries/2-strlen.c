#include "main.h"
#include <stdio.h>

/**
 * _strlen - function that returns the length
 * of a string
 * @s: the string in question. That string is singing
 * 'Locked up' by AKON. I hope it didn't do something
 * that will incriminate it.
 *
 * Description: This function evaluates the length of
 * a string
 *
 * Return: the size of s is returned
 */

int _strlen(char *s)
{
	int stringlength;

	stringlength = 0;

	while (*s != '\0')
	{
		stringlength++;
		s++;
	}
	return (stringlength);
}
