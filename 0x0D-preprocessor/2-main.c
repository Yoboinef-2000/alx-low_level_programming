#include <stdio.h>

/**
 * main - MAIN
 *
 * Description: This is a program that prints the name of the file
 * it was compiled from
 *
 * Return: 0
 */

int main(void)
{
	printf("%s\n", __BASE_FILE__);
	return (0);
}
