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
	unsigned int i, j, len1, len2, strlen;

	i = j = len1 = len2 = 0;
	if (s1 == NULL)
	{
		s1 = "";
	}
	if (s2 == NULL)
	{
		s2 = "";
	}

	while (s1[len1])
		len1++;
	while (s2[len2])
		len2++;

	strlen = len1 + n;

	str = malloc(sizeof(char) * (strlen + 1));

	if (str == NULL)
		return (NULL);

	/*if (n >= len2)
	{
		for (;i < len1; i++)
		{
			str[i] = s1[i];
		}

		for (;j < len2; j++)
		{
			str[i++] = s2[j];
		}
	}*/

	for (i = 0; i < len1; i++)
	{
		str[i] = s1[i];
	}
	for (j = 0; j < n && s2[j]; j++)
	{
		str[i + j] = s2[j];
	}

	str[i + j] = '\0';
	return (str);
}
