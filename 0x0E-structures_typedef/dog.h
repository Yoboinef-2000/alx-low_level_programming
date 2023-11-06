#ifndef DOG_H
#define DOG_H

/**
 * struct dog -  Defining the structure dog
 * @name: the dog's name
 * @age: the dog's age
 * @owner: name of the dog's owner
 *
 * Description: Refer ot the first commented out line
 */

struct dog
{
	char *name;
	float age;
	char *owner;
};
void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
#endif /* DOG_H */
