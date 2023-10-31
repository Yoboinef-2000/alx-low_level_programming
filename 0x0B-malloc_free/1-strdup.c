#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * _strdup - This is a function that returns a pointer to
 * a newly allocated space in memory, which contains a
 * copy of the string given as a parameter.
 * @str: The string that is going to be duplicated
 *
 * Description: This function returns a pointer to a
 * new string which is a duplicate of the string str.
 * Memory for the new string is obtained with malloc,
 * and can be freed with free.
 *
 * Return: Returns NULL if str = NULL
 * On success, the _strdup function returns a pointer to the
 * duplicated string. It returns NULL if insufficient
 * memory was available
 */

char *_strdup(char *str)
{
	char *dup;
	int i;

	dup = malloc(sizeof(char) * strlen(str));

	if (str == NULL)
	{
		return (NULL);
	}
	if (dup == NULL)
	{
		return (NULL);
	}
	for (i = 0; str[i] != '\0'; i++)
	{
		dup[i] = str[i];
	}
	return (dup);
}
