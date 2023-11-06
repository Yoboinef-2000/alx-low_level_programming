#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "dog.h"

/**
 * dog_t *new_dog - this function creates a new dog
 * @name: the new dog's name
 * @age: the new dog's age
 * @owner: the new dog's owner
 *
 * Description: refer to the first commented out line
 *
 * Return: A pointer to the new dog or NULL if the function fails.
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *newdog = malloc(sizeof(dog_t));

	if (newdog == NULL)
	{
		return (NULL);
	}

	newdog->name = strdup(name);
	newdog->owner = strdup(owner);

	if (newdog->name == NULL || newdog->owner == NULL)
	{
		free(newdog->name);
		free(newdog->owner);
		free(newdog);
		return (NULL);
	}

	newdog->age = age;

	return (newdog);
}
