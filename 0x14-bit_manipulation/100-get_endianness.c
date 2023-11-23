#include "main.h"
#include <stdio.h>

/**
 * get_endianness - Checks the endianness of the system.
 *
 * Description: This function checks whether the system
 * is big endian or little endian.
 *
 * Return: 0 if big endian, 1 if little endian.
 */

int get_endianness(void)
{
	union
	{
		unsigned int num;
		unsigned char byte;
	} checkEndian;

	checkEndian.num = 1;
	return ((int)checkEndian.byte);
}
