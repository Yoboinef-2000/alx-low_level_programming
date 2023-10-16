#include "main.h"
#include <stdio.h>

/**
 * swap_int - A function that swaps the values of
 * two integers
 * @a: First integer to be swapped
 * @b: Second integer to be swapped
 *
 * Description: Refer to the the first commented out line
 */

void swap_int(int *a, int *b)
{
	int tempstorage;

	tempstorage = *a;
	*a = *b;
	*b = tempstorage;
}
