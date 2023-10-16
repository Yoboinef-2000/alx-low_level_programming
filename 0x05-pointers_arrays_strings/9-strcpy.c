#include "main.h"
#include <stdio.h>

/**
 * _strcpy - a function that copies the string
 *  pointed to by src, including the terminating
 *  null byte (\0), to the buffer pointed to by dest.
 *  @dest: the dest pointer
 *  @src: pointer to the string that is going to
 *  be copied
 *
 *  Description: Refer to the first three commented
 *  out lines
 *
 *  Return: Returns the string copied from src
 */
char *_strcpy(char *dest, char *src)
{
	char *dest_start = dest;

	while (*src != '\0')
	{
		*dest = *src;
		dest++;
		src++;
	}

	*dest = '\0';

	return (dest_start);
}
