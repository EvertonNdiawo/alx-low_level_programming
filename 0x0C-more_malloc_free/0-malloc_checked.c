#include "main.h"
#include <stdlib.h>

/**
 * malloc_checked - allocates memeory using malloc
 *
 * @b:number of bytes to allocate.
 *
 * Return: pointer to allocated memory (success),
 * exit with status value of 98(failure)
 *
 */

void *malloc_checked(unsigned int b)
{
	void *ptr;

	ptr = malloc(b);

	if (ptr == NULL)
	{
		exit(98);
	}

	return (ptr);
}
