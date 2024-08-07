#include "dog.h"
#include <stdlib.h>

/**
 * new_dog - Creates a new dog, a new instance of variable struct dog
 *
 * @name: name of the dog
 * @age: age of the dog
 * @owner: owner of the dog
 *
 * Return: 0(success), NULL(failure)
 */

dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *other_dog;

	int name_1 = 0, own_1 = 0;

	if (name != NULL && owner != NULL)
	{
		name_1 = _strlen(name) + 1;
		own_1 = _strlen(owner) + 1;
		other_dog = malloc(sizeof(dog_t));

		if (other_dog == NULL)
		{
			return (NULL);
		}

		other_dog->name = malloc(sizeof(char) * name_1);

		if (other_dog->name == NULL)
		{
			free(other_dog);
			return (NULL);
		}

		other_dog->owner = malloc(sizeof(char) * own_1);

		if (other_dog->owner == NULL)
		{
			free(other_dog->name);
			free(other_dog);
			return (NULL);
		}

		other_dog->name = _strcpy(other_dog->name, name);
		other_dog->owner = _strcpy(other_dog->owner, owner);
		other_dog->age = age;
	}

	return (other_dog);
}

/**
 * _strlen - Returns the length of a string
 * @s: string to count
 *
 * Return: String length
 */

int _strlen(char *s)
{
	int c = 0;

	for (; *s != '\0'; s++)
	{
		c++;
	}

	return (c);
}

/**
 * _strcpy - copies a string
 *  @dest: Destination string
 *  @src: Source string
 *
 *  Return: pointer to destination string
 */

char *_strcpy(char *dest, char *src)
{
	int i;

	for (i = 0; src[i] != '\0'; i++)
	{
		dest[i] = src[i];
	}

	dest[i++] = '\0';

	return (dest);
}
