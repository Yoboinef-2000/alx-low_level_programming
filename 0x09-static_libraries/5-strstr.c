#include "main.h"
#include <stdio.h>
#include <string.h>
/**
 * _strstr - this function looks for the presesnce of the substring
 * "needle" in the string "haystack"
 * @haystack: the string that is going to be searched
 * @needle: this is the substring that we are looking for a match
 * in the bigger string "haystack"
 *
 * Description: Refer to the first commented out line
 *
 * Return: Returns a pointer to the beginning of the located substring,
 * or NULL if the substring is not found.
 */

char *_strstr(char *haystack, char *needle)
{
	int i, j, tempI;

	for (i = 0; haystack[i] != '\0'; i++)
	{
		tempI = i;
		j = 0;

		while (haystack[tempI] == needle[j] && needle[j] != '\0')
		{
			tempI++;
			j++;
		}
		if (needle[j] == '\0')
		{
			return (haystack + i);
		}
	}
	return (NULL);
}
