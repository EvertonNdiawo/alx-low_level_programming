#include "dog.h"
#include <stdlib.h>

/**
 * free_dog - Frees struct dog
 * @d: pointer to a dog of type structure
 *
 * Return: Nothing.
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
