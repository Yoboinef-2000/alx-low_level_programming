#include <stdio.h>
#include "dog.h"

/**
 * init_dog - this is a function that initializes a variable
 * of type struct dog
 * @d: pointer to the struct dog
 * @name: name of the dog
 * @age: age of the dog
 * @owner: name of the dog owner
 *
 * Description: refer to the first commented out line
 */

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d != NULL)
	{
		d->name = name;
		d->age = age;
		d->owner = owner;
	}
}
