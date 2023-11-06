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
	char *name_copy, *owner_copy;

	dog_t *newdog = malloc(sizeof(dog_t));

	if (newdog == NULL)
	{
		return (NULL);
	}

	name_copy = strdup(name);

	if (name_copy == NULL)
	{
		free(newdog);
		return (NULL);
	}

	owner_copy = strdup(owner);

	if (owner_copy == NULL)
	{
		free(name_copy);
		free(newdog);
		return (NULL);
	}

	newdog->name = name_copy;
	newdog->age = age;
	newdog->owner = owner_copy;

	return (newdog);
}
