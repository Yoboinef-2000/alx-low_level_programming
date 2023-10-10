#include "main.h"

/**
 * The _isalpha functions Checks if a character is an alphabetic character
 * and
 * Returns 1 if c is an alphabetic character, 0 otherwise
 */

int _isalpha(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
		return 1;
	else
		return 0;
}
