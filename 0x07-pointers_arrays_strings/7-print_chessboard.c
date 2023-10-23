#include "main.h"
#include <stdio.h>

/**
 * print_chessboard - a function that prints the chessboard
 * @a: the name of the board where the actual chess pieces
 * will be stored
 *
 * Description: Refer to the first commented out line
 */
void print_chessboard(char (*a)[8])
{
	int i, j;

	for (i = 0; i < 8; i++)
	{
		for (j = 0; j < 8; j++)
		{
			printf("%c", a[i][j]);
		}
		printf("\n");
	}
}
