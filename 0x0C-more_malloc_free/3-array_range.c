#include "main.h"
#include <stdlib.h>

/**
 * array_range - creates an array of integers
 *
 * @min: value of integer to create
 * @max: largest value of integer to create
 *
 * Return: pointer to the newly created array.
 */

int *array_range(int min, int max)
{
	int i, j;
	int *array;

	if (min > max)
	{
		return (NULL);
	}

	i = min;

	while (i < max)
	{
		i++;
	}

	array = malloc(sizeof(int) * i + 1);

	if (array == NULL)
	{
		return (NULL);
	}

	for (j = 0; j < i + 1; j++)
	{
		array[j] = min;
		min++;
	}

	return (array);
}
