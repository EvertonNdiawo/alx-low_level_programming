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

	int i = 0;

	while (s1[i] != '\0' && s2[i] != '\0')
	{
		if (s1[i] > s2[i])
		{
			return (1);
		}
		else if (s1[i] < s2[i])
		{
			return (-1);
		}
		else
		{
			return (0);
		}

		i++;
	}
}
