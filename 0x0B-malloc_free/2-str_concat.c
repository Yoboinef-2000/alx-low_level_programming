#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * str_concat - This is a function that concatenates two strings
 * @s1: This is the first string to be concatenated
 * @s2: This is the second string to be concatenated
 *
 * Description: Refer to the first commented out line
 *
 * Return: The returned pointer should point to a newly allocated
 * space in memory which contains the contents of "s1", followed
 * by the contents of s2, and null terminated
 * If NULL is passed, treat it as an empty string
 * The function should return NULL on failure
 */

char *str_concat(char *s1, char *s2)
{
	int i, j;
	char *conctdstrs;

	conctdstrs = malloc((sizeof(char) * (strlen(s1) + strlen(s2))) + 1);

	if (s1 == NULL && s2 == NULL)
	{
		return (NULL);
	}
	if (conctdstrs == NULL)
	{
		return (NULL);
	}
	for (i = 0; s1[i] != '\0'; i++)
	{
		conctdstrs[i] = s1[i];
	}
	for (j = 0; s2[j] != '\0'; j++)
	{
		conctdstrs[i] = s2[j];
		i++;
	}
	conctdstrs[i] = '\0';
	return (conctdstrs);
}

