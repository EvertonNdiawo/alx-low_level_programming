#include "main.h"

/**
 * _strcat - appends the src strint to the dest string
 * @dest: destination string
 * @src: the string source to be appended to the destination string
 *
 * Return: a pointer to the destination string.
 */

char *_strcat(char *dest, char *src)
{
	int i;
	int dest_count;
	int j;

	i = j = dest_count = 0;

	while (dest[i] != '\0')
	{
		dest_count++;
		i++;
	}

	while (src[j] != '\0')
	{
		dest[dest_count + j] = src[j];
		j++;
	}
	dest[dest_count + j] = '\0';
	return (dest);
}
