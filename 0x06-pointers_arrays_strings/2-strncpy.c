#include "main.h"

/**
 * _strncpy - copies a string of length n from src to dest
 *
 * @dest: destination to which the string from the src id copied.
 * @src: the source where string to be copied is obtained.
 * @n: size of the string to copy.
 *
 * Return: return pointer to dest.
 */

char *_strncpy(char *dest, char *src, int n)
{
	int i;

	for (i = 0; i < n && src[i] != '\0'; i++)
	{
		dest[i] = src[i];
	}

	while (i < n)
	{
		dest[i] = '\0';
		i++;
	}

	return (dest);
}
