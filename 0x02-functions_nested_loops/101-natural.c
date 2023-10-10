#include "main.h"

int main(void)
{
    int sum = 0;
    int i;
    int digit;

    for (i = 3; i < 1024; i++)
    {
        if (i % 3 == 0 || i % 5 == 0)
        {
            sum += i;
        }
    }

    if (sum == 0)
    {
        _putchar('0');
    }
    else
    {
        while (sum > 0)
        {
            digit = sum % 10;
            _putchar('0' + digit);
            sum /= 10;
        }
    }

    _putchar('\n');

    return (0);
}

