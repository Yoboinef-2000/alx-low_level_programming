#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * create_array - This is a function that will create an array
 * of size "size" and initialize it with the special character "c"
 * @size: the size of the array
 * @c: the charatcer that every element of the array is intilaized
 * to be
 *
 * Description: refer to the first commented out line
 *
 * Return: Returns NULL if size = 0 (or)
 * Returns a pointer to the array, or NULL if it fails
 */

char *create_array(unsigned int size, char c)
{
	int i;
	char *arrizi;

	arrizi = malloc(sizeof(char) * size);

	if (size == 0)
	{
		return (NULL);
	}
	if (array == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < size; i++)
	{
		arrizi[i] = c;
	}
	return (arrizi);
}
