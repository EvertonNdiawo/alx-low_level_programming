#include "main.h"
#include <stdlib.h>

/**
 * string_nconcat - concatenates two strings
 *
 * @s1: first string
 * @s2: second string to concat on the first
 * @n: size in bytes of s2 to concat on s1
 *
 * Return: pointer to new string created (success), NULL otherwise.
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *str;
	unsigned int i,j;
	int len1, len2;

	if (s1 == NULL)
	{
		s1 = "";
	}

	if (s2 == NULL)
	{
		s2 = "";
	}

	len1 = len2 = 0;

	while(s1[len1])
		len1++;
	while(s2[len2])
		len2++;

	str = malloc(sizeof(char) * (len1 + len2 + 1));

	if (str == NULL)
	{
		return (NULL);
	}

	for (i = 0; i < n; i++)
	{
		str[i] = s1[i];
	}

	for (j = 0; j < n; j++)
	{
		str[i + 1] = s2[j];
		i++;
	}

	str[i] = '\0';

	return (str);
}
