#include "dog.h"
#include <>

/**
 * init_dog - Initializes a variable of type struct dog.
 * @d: pointer to the structure already declared somewhere.
 * @name: the parameter for the name of the dog.
 * @age: the parameter for the age of the dog.
 * @owner: the parameter to supply the dog owner's name.
 */

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d != NULL)
	{
		d->name  = name;
		d->age = age;
		d->owner = owner;
	}
}
