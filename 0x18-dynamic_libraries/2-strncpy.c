#include "main.h"
#include <stdio.h>

/**
 * _strncpy - copies the string pointed by "src" to "dest"
 * @dest: the destination of where the copied string is
 * going to be at
 * @src: the string to be copied
 * @n: a number that restricts the amount of bytes
 * that should be copied off of "src"
 *
 * Description: this functions copies the string pointed
 * by "src" to "dest" but does it with a special condition
 * in mind. the condition is that the number of bytes being
 * copied from "src" are going to be restricted by "n"
 *
 * Return: String copied from "src" stored at "dest"
 */
char *_strncpy(char *dest, char *src, int n)
{
	int i;

	for (i = 0; i < n && src[i] != '\0'; i++)
	{
		dest[i] = src[i];
	}

	for (; i < n; i++)
	{
		dest[i] = '\0';
	}
	return (dest);
}

