#include "main.h"
#include <stdio.h>
#include <string.h>

/**
 * infinite_add - a function that adds two numbers
 * @n1: the first number to be added
 * @n2: the second numbet to be added
 * @r: is the buffer that the function will use to store the result
 * @size_r: is the buffer size
 *
 * Description: refer to the first commented out line
 *
 * Return: the sum of the two numbers is printed
 */

char *infinite_add(char *n1, char *n2, char *r, int size_r)
{
	int carry, sum, i, j, k, digit1, digit2;

	carry = 0;
	i = strlen(n1) - 1;
	j = strlen(n2) - 1;
	k = 0;

	r[size_r - 1] = '\0';
	k = size_r - 2;

	while (i >= 0 || j >= 0 || carry)
	{
		digit1 = (i >= 0) ? n1[i] - '0' : 0;
		digit2 = (j >= 0) ? n2[j] - '0' : 0;
		sum = digit1 + digit2 + carry;

		if (k < 0)
		{
			return (0);
		}

		r[k] = (sum % 10) + '0';
		carry = sum / 10;
		i--;
		j--;
		k--;
	}
	return (r + k + 1);
}

