#include "main.h"

/**
 * _memcpy - copies memory area. Copies n bytes from memory
 * area src to memory area dest and returns a memory pointer to dest.
 *
 * @dest: destination where memory is to be copied to.
 * @src: location where bytes are copied from.
 * @n: number of bytes to be copied.
 *
 * Return: returns a pointer to dest.
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	if (src == dest)
	{
		return (dest);
	}

	if ((src + n <= dest) || (dest + n <= src))
	{
		unsigned int i = 0;

		while (i < n)
		{
			dest[i] = src[i];
			i++;
		}
	}

	else if (src < dest)
	{
		unsigned int i = n - 1;

		while (i < n)
		{
			dest[i] = src[i];
			i--;
		}
	}

	else
	{
		unsigned int i = 0;

		while (i < n)
		{
			dest[i] = src[i];
			i++;
		}
	}

	return (dest);
}
