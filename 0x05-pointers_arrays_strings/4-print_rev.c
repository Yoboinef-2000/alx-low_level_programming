#include "main.h"
#include <stdio.h>

void print_rev(char *s)
{
	int length;

	length = 0;

	while (*s != '\0')
	{
		length++;
		s++;
	}

	char stringarray[length];

	int stringcharacters;

	stringcharacters = 0;

	while (*s != '\0')
        {
                stringarray[stringcharacters] = s;
		stringcharacters++;
                s++;
        }

	char finalarray[length];

	for (int i = 0; i < length; i++)
	{
		finalarray[i] = stringarray[stringcharacters - 1];
		stringcharacters--;
	}

