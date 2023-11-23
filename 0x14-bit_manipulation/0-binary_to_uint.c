#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "main.h"


/**
 * binary_to_uint - this is a function that changes
 * a binary number to an unsigned int
 *
 * @b: the binary number to be converted
 *
 * Description: refer to the first commented out line
 *
 * Return: the converted number,
 * or 0 if:
 * there is one or more chars in the string b that is not 0 or 1
 * b is NULL
 */

unsigned int binary_to_uint(const char *b)
{
	size_t i, j, stringlength;
	unsigned int uint, changednumber;

	if (b == NULL)
	{
		return (0);
	}

	uint = 0;
	stringlength = strlen(b);

	for (i = 0; i < stringlength; i++)
	{
		if (b[i] != '0' && b[i] != '1')
		{
			return (0);
		}
		changednumber = (b[i] - '0');
		for (j = 0; j < (stringlength - 1  - i); j++)
		{
			changednumber *= 2;
		}
		uint += changednumber;
	}
	return (uint);
}

