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
	int s1len = 0;
	int s2len = 0;
	int i;

	while (s1[s1len] != '\0')
	{
		s1len++;
	}

	while (s2[s2len] != '\0')
	{
		s2len++;
	}

	for (i = 0; i < (s1len || s2len); i++)
	{
		if (s1[i] < s2[i])
		{
			return (10);
		}
		else if (s1[i] == s2[i])
		{
			return (0);
		}
		else
		{
			return (-10);
		}
	}
}
