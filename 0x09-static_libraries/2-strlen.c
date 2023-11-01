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
	int counter;

	counter = 0;

	while (*s != '\0')
	{
		counter++;
		s++;
	}

	return (counter);
}
