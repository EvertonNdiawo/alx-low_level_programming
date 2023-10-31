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

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	i = j = len1 = len2 = 0;

	while (s1[len1])
		len1++;
	while (s2[len2])
		len2++;

	string_concat = malloc(sizeof(char) * (len1 + len2 + 1));

	if (string_concat == NULL)
		return (NULL);

	while (s1[i])
	{
		string_concat[i] = s1[i];
		i++;
	}

	while (s2[j])
	{
		string_concat[i] = s2[j];
		i++;
		j++;
	}

	string_concat[i] = '\0';

	return (string_concat);
}

