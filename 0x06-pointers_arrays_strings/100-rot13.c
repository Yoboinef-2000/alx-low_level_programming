#include "main.h"
#include <stdio.h>

char *rot13(char *s)
{
	int i;

	for (i = 0; s[i] != '\0'; i++)
	{
		char c = str[i];

        if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z')) {
            // Calculate the ROT13 transformation by adding 13 to the character
            char offset = (c >= 'a' && c <= 'z') ? 'a' : 'A';
            str[i] = (c - offset + 13) % 26 + offset;
        }
    }

    return str;
}
