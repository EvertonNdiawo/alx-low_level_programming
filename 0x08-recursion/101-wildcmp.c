#include "main.h"

/**
 * wildcmp - compares two strings to check whether they can be considered
 * identical.
 *
 * Description: s2 can contain the special character *, which could contain
 * any string including an empty string.
 *
 * @s1: first string to be compared
 * @s2: second string to be compared to the first one.
 *
 * Return: return 1 if strings identical, 0 otherwise.
 */

int wildcmp(char *s1, char *s2)
{
	if (*s2 == '*' && *(s2 + 1) != '\0' && *s1 == '\0')
	{
		return (0);
	}

	if (*s1 == '\0' && *s2 == '\0')
	{
		return (1);
	}

	if (*s1 == *s2)
	{
		return (wildcmp(s1 + 1, s2 + 1));
	}

	if (*s2 == '*')
	{
		return (wildcmp(s1, s2 + 1) || wildcmp(s1 + 1, s2));
	}

	return (0);
}
