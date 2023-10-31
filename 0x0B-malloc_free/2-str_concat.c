#include "main.h"
#include <stdlib.h>

/**
 * str_concat - concatenates string s2 into s1
 *
 * @s1: first string.
 * @s2: second string.
 *
 * Return: pointer to new space in memory that contains contents of s1
 * followed by contents of s2 and null terminated (success) and
 * NULL (failure)
 *
 */

char *str_concat(char *s1, char *s2)
{
	int i, j;
	int len1, len2;
	char *string_concat;

	i = j = len1 = len2 = 0;

	while (s1[len1])
		len1++;
	while (s2[len2])
		len2++;

	string_concat = malloc(sizeof(char) * (len1 + len2 + 1));

	if (string_concat == NULL)
		return (NULL);

	if (s1)
	{
		while (i < len1)
		{
			string_concat[i] = s1[i];
			i++;
		}
	}

	if (s2)
	{
		while (j < len2)
		{
			string_concat[i] = s2[j];
			i++;
			j++;
		}
	}

	string_concat[i] = '\0';

	return (string_concat);
}

