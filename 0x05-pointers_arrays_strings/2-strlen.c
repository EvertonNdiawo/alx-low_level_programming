#include "main.h"

/**
 * _strlen - returns the length of a string.
 *
 * @s: pointer to the string to be checked.
 *
 * Return: returns length of a string passed to it.
 */
int _strlen(char *s)
{
	int i;
	int counter;

	counter = 0;

	i = s[0];

	while (i != '\0')
	{
		counter++;
		i++;
	}

	return (counter);
}
