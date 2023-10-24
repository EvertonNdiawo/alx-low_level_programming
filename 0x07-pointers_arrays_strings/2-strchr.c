#include "main.h"
#define NULL ((void *)0)

/**
 * _strchr - Locates a character in a string aand returns a pointer to
 * the first occurrence of the character in the string, or NULL if
 * the character is not found.
 *
 * @s: The string to be traversed.
 * @c: character to be found.
 *
 * Return: return pointer to first occurence of c or NULL if
 * character c is not found.
 */

char *_strchr(char *s, char c)
{
	unsigned int i;
	unsigned int len = 0;

	if (s == NULL)
	{
		return (NULL);
	}

	while (s[len] != '\0')
	{
		len++;
	}

	for (i = 0; i < len; i++)
	{
		if (s[i] == c)
		{
			return (&s[i]);
		}
	}

	return (NULL);
}
