#include <stdio.h>
#include <stdlib.h>
#include "3-calc.h"

/**
 * get_op_func - chooses the right function to do the
 * operation
 * @s: the character that is going to be passed to the
 * argument line. It has to be one of those:
 * "+, -, *, /, %"
 *
 * Description: refer to the first commented out line
 *
 * Return: returns a pointer to the function that corresponds
 * to the operator given as a parameter
 */
int (*get_op_func(char *s))(int, int)
{
	op_t ops[] = {
		{"+", op_add},
		{"-", op_sub},
		{"*", op_mul},
		{"/", op_div},
		{"%", op_mod},
		{NULL, NULL}
	};
	int i;

	i = 0;
	while (ops[i].op)
	{
		if (*ops[i].op == *s && s[1] == '\0')
		{
			return (ops[i].f);
		}
		i++;
	}
	return (NULL);
}

