#include<stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	char alph;

	alph = 'a';

	while (alph <= 'z' && alph != 'q' && alph != 'c')
	{
		putchar(alph);
		alph++;
	}

	putchar('\n');
	return (0);
}
