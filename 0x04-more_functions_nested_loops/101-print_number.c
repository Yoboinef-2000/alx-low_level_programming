#include "main.h"

/**
 * print_number - Prints an integer using _putchar.
 * @n: The integer to print.
 *
 * Description: Print dat thang
 */
void print_number(int n)
{
	if (n < 0)
	{
		_putchar('-');
		n = -n;
	}
	if (n == 0)
	{
		_putchar('0');
	}
	else
	{
		int rev = 0;
		int digit;

		while (n > 0)
		{
			digit = n % 10;
			rev = rev * 10 + digit;
			n = n / 10;
		}
		while (rev > 0)
		{
			digit = rev % 10;
			_putchar('0' + digit);
			rev = rev / 10;
		}
	}
}
