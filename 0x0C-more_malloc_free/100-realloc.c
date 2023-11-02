#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * _realloc - this is a function that reallocates a
 * memory block using malloc and free
 * @ptr: this is a pointer to the memory previously allocated
 * with a call to malloc: malloc(old_size)
 * @old_size: this is the size of the memory that was allocated
 * before this function is called
 * @new_size: this is the size of the memory in bytes that will
 * overwrite the previous size set by "old_size"
 *
 * Description: refer to the first commenteed out line +
 * The contents will be copied to the newly allocated space, in the
 * range from the start of "ptr" up to the minimum of the "old" and
 * "new sizes"
 *
 * Return: If "new_size" > "old_size", the “added” memory should not
 * be initialized
 * If "new_size" == "old_size" do not do anything and return "ptr"
 * If "ptr" is NULL, then the call is equivalent to malloc(new_size),
 * for all values of "old_size" and "new_size"
 * If "new_size" is equal to zero, and "ptr" is not NULL, then the
 * call is equivalent to free(ptr). Return NULL
 */

void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	void *newptr;
	size_t smaller;

	if (new_size == old_size)
	{
		return (ptr);
	}
	if (ptr == NULL)
	{
		ptr = malloc(new_size);
		return (ptr);
	}
	if (new_size == 0 && ptr != NULL)
	{
		free(ptr);
		return (NULL);
	}
	newptr = malloc(new_size);
	smaller = (old_size < new_size) ? old_size : new_size;
	memcpy(newptr, ptr, smaller);

	free(ptr);
	return (newptr);
}



