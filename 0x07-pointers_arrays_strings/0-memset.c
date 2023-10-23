#include "main.h"
#include <stdio.h>

/**
 * _memset - this  function fills the first "n" bytes
 * of the memory area pointed to by "s" with the
 * constant byte "b".
 * @s: The pointer to the memory area
 * @b: The byte that will replace the byte(s) pointed
 * by "s"
 * @n: The number of bytes of the memory area that will
 * be filled
 *
 * Description: Refer to the first commented out line
 *
 * Return: Pointer to the memory area "s"
 */

char *_memset(char *s, char b, unsigned int n)
{
	int i;
	char *ptr;

	ptr = s;

	for (i = 0; i < n; i++)
	{
		*ptr = b;
		ptr++;
	}
	return (s);
}
