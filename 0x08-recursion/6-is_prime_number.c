#include "main.h"
#include <stdio.h>
/**
 * is_prime_recursive - Helper function to recursively check if a number is prime.
 * @n: The number to be checked.
 * @divisor: The current divisor to test.
 *
 * Description: This recursive function checks if the input integer is a prime number.
 *
 * Return: Returns 1 if the input integer is prime, 0 otherwise.
 */
int is_prime_recursive(int n, int divisor)
{
    if (n <= 1) {
        return 0; 
    }

    if (n <= 3) {
        return 1; 
    }

    if (divisor * divisor > n) {
        return 1;
    }

    if (n % divisor == 0) {
        return 0; 
    }

    return is_prime_recursive(n, divisor + 1);
}

int is_prime_number(int n)
{
    return is_prime_recursive(n, 2);
}

