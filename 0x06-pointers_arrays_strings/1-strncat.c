#include "main.h"

/**
 * _strncat - concatenates two strings and takes at most n bytes from src.
 *
 * @dest: string at destination
 * @src: string at source, string to be concatenated to the destination string.
 * @n: the size in bytes of string to be extracted from src.
 *
 * Return: return pointer to final string at destination.
 */

char *_strncat(char *dest, char *src, int n)
{
	int destlen = 0;
	int i;

	while (dest[destlen] != '\0')
	{
		destlen++;
	}

	for (i = 0; i < n && src[i] != '\0'; i++)
	{
		dest[destlen + i] = src[i];
	}

	dest[destlen] = '\0';

	return (dest);
}
