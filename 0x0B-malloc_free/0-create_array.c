#include "main.h"
#include <stdlib.h>

/**
 * create_array - creates an array of characters, and initializes it
 * with a specific character.
 *
 * @size: size of the array
 * @c: character to initialize it with.
 *
 * Return: pointer to the created array (success), NULL (failure)
 */

char *create_array(unsigned int size, char c)
{
	unsigned int i = 0;
	char *str = malloc(size * sizeof(char));

	if (size == 0)
	{
		return (NULL);
	}

	if (str == NULL)
	{
		return (NULL);
	}

	while (i < size)
	{
		str[i] = c;
		i++;
	}

	return str;

}
