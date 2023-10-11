#include "main.h"

/**
 * print_fibonacci - Prints the first 98 Fibonacci numbers
 */
void print_fibonacci(void)
{
    int n;
    unsigned long int a = 1, b = 2, next;

    _putchar('1');
    _putchar(',');
    _putchar(' ');
    _putchar('2');
    for (n = 3; n <= 98; n++)
    {
        next = a + b;
        _putchar(',');
        _putchar(' ');
        if (next > 999999)
        {
            _putchar((next / 1000000) + '0');
            next %= 1000000;
        }
        if (next > 99999)
        {
            _putchar((next / 100000) + '0');
            next %= 100000;
        }
        if (next > 9999)
        {
            _putchar((next / 10000) + '0');
            next %= 10000;
        }
        if (next > 999)
        {
            _putchar((next / 1000) + '0');
            next %= 1000;
        }
        if (next > 99)
        {
            _putchar((next / 100) + '0');
            next %= 100;
        }
        if (next > 9)
        {
            _putchar((next / 10) + '0');
            next %= 10;
        }
        _putchar(next + '0');
        a = b;
        b = next;
    }
    _putchar('\n');
}
