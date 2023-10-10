#include<stdio.h>
#include "main.h"
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */

/* This is just a replica of the putchar function */
int _putchar(char c)
{
	putchar(c);
	return (c);
}

/* This will list all the alphabets in order */
void print_alphabet(void)
{
	char alph;

	alph = 'a';
	while (alph <= 'z')
	{
		_putchar(alph);
		alph++;
	}
	_putchar('\n');
}
