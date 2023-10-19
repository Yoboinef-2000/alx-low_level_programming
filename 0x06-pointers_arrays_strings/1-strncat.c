#include "main.h"
#include <stdio.h>
#include <string.h>

/**
 * _strncat - function that concatenates
 * two strings
 * @dest: the first string to be concantenated
 * @src: the second string to be concantenated
 * @n: the amount of bytes from src we will use
 *
 * Description: This function concantenates two strings
 * but does it with a special condition. That condition
 * is that it will use at most "n" bytes from "src"; and
 * "src" does not need to be null-terminated
 * if it contains "n" or more bytes
 *
 * Return: a concantenated string made up of "dest"
 * and "src"
 */

char *_strncat(char *dest, char *src, int n)
{
	int destlength;
	int srclength;
	int i;

	destlength = strlen(dest);
	srclength = strlen(src);

	for (i = 0; i < n && i < srclength; i++)
	{
		dest[destlength + i] = src[i];
	}
	dest[destlength + i] = '\0';
	return (dest);
}

