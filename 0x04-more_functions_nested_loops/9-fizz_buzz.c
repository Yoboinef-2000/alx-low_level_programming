#include<stdio.h>
#include"main.h"

/**
 * fizz_buzz - Prints numbers from 1 to 100, applying Fizz-Buzz rules.
 *
 * Description: This function will print numbers from 1 to 100,
 * applying fizz buzz rules which are
 * any multiples of 3 will have "FIZZ" written in their place
 * any multiples of 5 will have "BUZZ" written in their place
 * and lastly, any multiples of 3 and 5 simultaneously will
 * have "FIZZBUZZ" written in their place.
 *
 * Enjoy :)
 */
void fizz_buzz(void)
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
}
