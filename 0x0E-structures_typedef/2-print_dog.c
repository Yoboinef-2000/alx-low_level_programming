#include <stdio.h>
#include "dog.h"

/**
 * print_dog - this is a function that prints a struct dog
 * @d: pointer to the strucutre dog
 *
 * Description: Refer to the first commented out line
 *
 * Return: If an element of d is NULL, print (nil) instead of
 * that element. (if name is NULL, print Name: (nil))
 * If d is NULL print nothing.
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
		printf("Name: %s\n", d->name);
	}
	else
	{
		printf("Name: %s\n", d->name);
	}
	printf("Age: %f\n", d->age);
	if (d->owner == NULL)
	{
		d->owner = "NIL";
		printf("Owner: %s\n", d->owner);
	}
	else
	{
		printf("Owner: %s\n", d->owner);
	}
}
