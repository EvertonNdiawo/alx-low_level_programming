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
	int srclen = 0;

	while (dest[destlen] != '\0')
	{
		destlen++;
	}

	while (src[srclen] != '\0' && srclen < n)
	{
		dest[destlen] = src[srclen];
		destlen++;
		srclen++;
	}

	dest[destlen] = '\0';

	return (dest);
}
