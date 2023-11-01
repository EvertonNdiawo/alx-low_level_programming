#include "main.h"

/**
 * _strcat - appends the src string to the dest string,
 * overwriting the terminating null byte(\0) at the end of
 * dest, and then adds a terminating null byte.
 *
 * @src: pointer to the string to be concated.
 * @dest: pointer to the destination where first string is to be concatenated.
 *
 * Return: Returns a pointer to dest.
 */

char *_strcat(char *dest, char *src)
{
	int len1 = 0;
	int len2 = 0;

	while (dest[len1] != '\0')
	{
		len1++;
	}

	while (src[len2] != '\0')
	{
		dest[len1] = src[len2];
		len1++;
		len2++;
	}

	dest[len1] = '\0';

	return (dest);

}
