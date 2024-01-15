#include "main.h"
#include <stdio.h>

/**
 * _atoi - A function that converts a string
 * to an integer
 * @s: The string to be converted
 *
 * Description: Refer to the first commented
 * out line
 *
 * Return: Integer form of the string 's'
 */
int _atoi(char *s)
{
	int sign = 1;
	int result = 0;

	while (*s)
	{
		if (*s == '-')
		{
			sign *= -1;
		}
		else if (*s >= '0' && *s <= '9')
		{
			result = (result * 10) + (*s - '0');
		}
		else if (result > 0)
		{
			break;
		}
		s++;
	}
	return (result * sign);
}

