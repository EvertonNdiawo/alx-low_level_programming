#include "main.h"
#include <stdlib.h>

/**
 * _strdup - Returns a pointer to newly allocated space in memory
 * that containsa copy of string given as a parameter.
 *
 * @str: string whose copy is to be returned as a pointer.
 *
 * Return: pointer to new string that is a duplicate of string str (success)
 * Null otherwise.
 *
 */

char *_strdup(char *str)
{
	int i = 0;
	int len = 0;
	char *string;

	if (str == NULL)
	{
		return (NULL);
	}

	while (str[len])
	{
		len++;
	}

	string = malloc(sizeof(char) * (len + 1));

	if (string == NULL)
	{
		return (NULL);
	}

	while (i < len)
	{
		string[i] = str[i];
		i++;
	}

	string[i] = '\0';

	return (string);

}
