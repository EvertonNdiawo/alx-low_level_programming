#include "main.h"

/**
 * _strlen - a function that returns the length of a string.
 *@s: string whose length is to be returned.
 *
 * Return: length of string.
 */
int _strlen(char *s)
{
	int i;
	int length;

	i = 0;
	length = 0;
	while (s[i] != '\0')
	{
		length += 1;
		i++;
	}

	return (length);
}
