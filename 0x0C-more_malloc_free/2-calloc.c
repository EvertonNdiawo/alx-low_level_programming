#include "main.h"
#include <stdlib.h>

/**
 * _memset - fills memory with a constant byte
 *
 * @s: memory area to be filled
 * @b: char to fill
 * @n: number of times to fill
 *
 * Return: pointer to the memory area s
 */

char *_memset(char *s, __attribute__ ((unused)) char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		s[i] = 0;
	}

	return (s);
}
/**
 * _calloc - allocates memory for an array, using malloc
 *
 * @nmemb: number of array elements
 * @size: size of nmemb elements
 *
 * Return: pointer to the allocated memory location(success)
 * otherwise returns NULL(failure)
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	void *ptr;

	if (nmemb == 0 || size == 0)
	{
		return (NULL);
	}

	ptr = malloc(size * nmemb);

	if (ptr == NULL)
	{
		return (NULL);
	}

	_memset(ptr, 0, size * nmemb);

	return (ptr);
}
