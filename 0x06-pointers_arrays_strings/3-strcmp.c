#include "main.h"

/**
 * _strcmp - compares two strings.
 *
 * @s1: first string
 * @s2: second string
 *
 * Return: returns an int less than 0 if string is less than string
 * compared against, 0 if strings equal and int greater than 0 if sting
 * is greater than other string.
 *
 */
int _strcmp(char *s1, char *s2)
{

	while (*s1 == *s2)
	{
		if (*s1 == '\0')
		{
			return (0);
		}

		s1++;
		s2++;
	}

	return (*s1 - *s2);
}
