#include<stdio.h>
#include"main.h"

/**
 *
 * main - check the code
 *
 * Return - always 0
 */
int main(void)
{
	int i;

	for (i = 1; i <= 100; i++)
	{
		if (i % 3 == 0 && i % 5 == 0)
		{
			_putchar('F');
			_putchar('i');
			_putchar('z');
			_putchar('z');
			_putchar('B');
			_putchar('u');
			_putchar('z');
			_putchar('z');
		}
		else if (i % 3 == 0)
		{
			_putchar('F');
			_putchar('i');
			_putchar('z');
			_putchar('z');
		}
		else if (i % 5 == 0)
		{
			_putchar('B');
			_putchar('u');
			_putchar('z');
			_putchar('z');
		}
		else
		{
			int num = i;

			while (num > 0)
			{
				int digit = num % 10;

				_putchar('0' + digit);
				num /= 10;
			}
		}
		if (i < 100)
		{
			_putchar(' ');
		}
	}
	_putchar('\n');
	return (0);
}
