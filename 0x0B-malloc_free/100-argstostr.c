#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * argstostr - this is a function that concantenates
 * all the arguments of the program
 * @ac: this is the first arguments
 * @av: this is the second argument
 *
 * Description: refer to the first commented out line
 * but there is another condition:
 * Each argument should be followed by a \n in the new string
 *
 * Return: Returns NULL if ac == 0 or av == NULL
 * Returns a pointer to a new string, or NULL if it fails
 */

char *argstostr(int ac, char **av)
{
	int i, argslen, currentPosition;
	char *arg, *newargsstr;

	if (ac == 0 || av == NULL)
	{
		return (NULL);
	}
	argslen = 0;
	for (i = 0; i < ac; i++)
	{
		arg = av[i];
		while (*arg)
		{
			argslen++;
			arg++;
		}
	}
	argslen += (ac - 1);
	newargsstr = malloc(sizeof(char) * (argslen + 1));
	if (newargsstr == NULL)
	{
		return (NULL);
	}
	currentPosition = 0;
	for (i = 0; i < ac; i++)
	{
		arg = av[i];
		while (*arg)
		{
			newargsstr[currentPosition] = *arg;
			currentPosition++;
			arg++;
		}
		if (i < ac - 1)
		{
			newargsstr[currentPosition] = '\n';
			currentPosition++;
		}
	}
	newargsstr[currentPosition] = '\0';
	return (newargsstr);
}
