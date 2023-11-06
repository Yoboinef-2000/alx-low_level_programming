#include <stdio.h>
#include "dog.h"

/**
 * print_dog - this is a function that prints a struct dog
 * @d: pointer to the strucutre dog
 *
 * Description: Refer to the first commented out line
 */

void print_dog(struct dog *d)
{
	if (d == NULL)
	{
		return;
	}
	if (d->name == NULL)
	{
		d->name = "NIL";
	}
	if (d->owner == NULL)
	{
		d->owner = "NIL";
	}
	printf("Name: %s\n", d->name);
	printf("Age: %f\n", d->age);
	printf("Owner: %s\n", d->owner);
}
