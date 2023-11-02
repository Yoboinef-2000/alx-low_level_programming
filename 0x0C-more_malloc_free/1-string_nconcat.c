#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * string_nconcat - this is a function that concatenates two strings
 * @s1: the first string to be concatenated
 * @s2: the second string to be concatenated
 * @n: this is the number of bytes that the string "s2" is going to be
 * constrained by
 *
 * Description: refer to the first commented out line
 *
 * Return: The returned pointer shall point to a newly allocated space
 * in memory, which contains "s1", followed
 * by the first "n" bytes of "s2", and null terminated
 * If the function fails, it should return NULL
 * If "n" is greater or equal to the length of "s2"
 * then use the entire string "s2"
 * If NULL is passed, treat it as an empty string
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *conctdstr;
	unsigned int i, j;

	if (s1 == NULL)
	{
		s1 = "";
	}
	if (s2 == NULL)
	{
		s2 = "";
	}
	if (n >= strlen(s2))
	{
		n = strlen(s2);
	}
	conctdstr = malloc(strlen(s1) + n + 1);
	if (conctdstr == NULL)
	{
		return (NULL);
	}
	for (i = 0; s1[i] != '\0'; i++)
	{
		conctdstr[i] = s1[i];
	}
	for (j = 0; s2[j] != '\0' && j < n; j++)
	{
		conctdstr[i] = s2[j];
		i++;
	}
	conctdstr[j] = '\0';
	return (conctdstr);
}
