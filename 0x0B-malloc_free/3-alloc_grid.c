#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * alloc_grid - This is a function that returns a pointer
 * to a 2 dimensional array of integers.
 * @width: the width of the array
 * @height: the height of the array
 *
 * Description: Refer to the first commented out line
 *
 * Return: The function should return NULL on failure
 * If "width" or "height" is 0 or negative, return NULL
 */

int **alloc_grid(int width, int height)
{
	int i, j;

	int **twoDarray;

	if (width <= 0 || height <= 0)
	{
		return (NULL);
	}

	twoDarray = malloc(sizeof(int *) * width);

	if (twoDarray == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < width; i++)
	{
		twoDarray[i] = malloc(sizeof(int) * height);
		if (twoDarray[i] == NULL)
		{
			for (j = 0; j < i; j++)
			{
				free(twoDarray(j));
			}
			free(twoDarray);
			return (NULL);
		}
		for (j = 0; j < height; j++)
		{
			twoDarray[i][j] = 0;
		}
	}
	return (twoDarray);
}

