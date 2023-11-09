#include "3-calc.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * op_add - this fucntion adds two numbers
 * @a: the first number to be added
 * @b: the second number to be added
 *
 * Description: ADDITION
 *
 * Return: Sum of "a" and "b"
 */

int op_add(int a, int b)
{
	return (a + b);
}

/**
 * op_sub - this functions subtracts one number from
 * the other
 * @a: the number to be subtracted from
 * @b: the amount to be subtracted from "a"
 *
 * Description: SUBTRACTION
 *
 * Return: Difference of "a" and "b"
 */

int op_sub(int a, int b)
{
	return (a - b);
}

/**
 * op_mul - this function multiplies two numbers
 * @a: the first number to be multiplied
 * @b: the second number to be multiplied
 *
 * Description: MULTIPLICATION
 *
 * Return: PRADA of (product of) "a" and "b"
 */

int op_mul(int a, int b)
{
	return (a * b);
}

/**
 * op_div - this function performs division between two
 * numbers
 * @a: the dividend
 * @b: the divisor
 *
 * Decription: DIVISION
 *
 * Return: The quotient obtained from the division of
 * "a" by "b"
 */

int op_div(int a, int b)
{
	if (b == 0)
	{
		printf("Error\n");
		exit(100);
	}
	return (a / b);
}

/**
 * op_mod - this function returns the remainder when
 * a dvision occurs
 * @a: the dividend
 * @b: the divisor
 *
 * Description: MODULO
 *
 * Return: The remainder obtained from the division of
 * "a" by "b"
 */

int op_mod(int a, int b)
{
	if (b == 0)
	{
		printf("Error\n");
		exit(100);
	}
	return (a % b);
}
