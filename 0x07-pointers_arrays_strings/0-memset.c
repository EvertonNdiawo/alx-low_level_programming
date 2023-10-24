#include "main.h"

/**
 * _memset - fills memory with a constant byte.
 *
 * @s: pointer to where the function starts filling memory.
 * @b: The character/byte to be filled in.
 * @n: number of bytes to fill.
 *
 * Return: returns pointer to s.
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i = 0;

	while (i < n)
	{
		s[i] = b;
		i++;
	}

	return (s);
}
