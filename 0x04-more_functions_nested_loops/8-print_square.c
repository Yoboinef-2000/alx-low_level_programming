#include"main.h"
#include<stdio.h>

/**
 * print_square - Prints a square
 * @size: Dimensions of the square
 *
 * Description: The function takes the "size" as
 * it's length and height to print squares made up
 * of "#"
 */
void print_square(int size)
{
	int i, j;

	if (size < 0)
	{
		_putchar('\n');
	}
	else
	{
		for (i = 0; i < size; i++)
		{
			for (j = 0; j < size; j++)
			{
				_putchar('#');
			}
			_putchar('\n');
		}
		_putchar('\n');
	}
}
