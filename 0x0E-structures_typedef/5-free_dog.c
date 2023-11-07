#include <stdio.h>
#include <stdlib.h>
#include "dog.h"

/**
 * free_dog - this is a function that frees the space
 * allocated to dog_t by malloc
 * FREE MY DOGS
 * @d: the dog to be freed(ie the memory allocated)
 *
 * Description: refer to the first commented out line
 */

void free_dog(dog_t *d)
{
	if (d != NULL)
	{
		free(d->name);
		free(d->owner);
		free(d);
	}
}
