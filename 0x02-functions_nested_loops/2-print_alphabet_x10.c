#include "main.h"

/**
 * print_alphabet_x10 - Prints the alphabet in lowercase
 */

void print_alphabet_x10(void)
{
	char alph;
	int count;

	count = 0;

	while (count < 10)
	{
		alph = 'a';

		while (alph <= 'z')
		{
			_putchar(alph);
			alph++;
		}
		_putchar('\n');
		count++;
	}
}
