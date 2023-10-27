#include "main.h"
#include <stdio.h>
#include <string.h>

/**
 * _strcat - function that concatenates
 * two strings
 * @dest: the first string to be concantenated
 * @src: the second string to be concantenated
 *
 * Description: Refer to the first commented out line
 *
 * Return: a concantenated string made up of "dest"
 * and "src"
 */

char *_strcat(char *dest, char *src)
{
	int destlength;
	int srclength;
	int i;

	destlength = strlen(dest);
	srclength = strlen(src);

	for (i = 0; i < srclength; i++)
	{
		dest[destlength + i] = src[i];
	}
	dest[destlength + i] = '\0';
	return (dest);
}

