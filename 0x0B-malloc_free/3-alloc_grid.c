#include "main.h"
#include <stdlib.h>

/**
 * alloc_grid - creates a template for a 2d array of integers.
 *
 * @width: size of first dimension.
 * @height: size of height dimension.
 *
 * Return: pointer to created array(success), NULL otherwise(failure)
 */

int **alloc_grid(int width, int height)
{
	int **arr;
	int i, j;

	if (width <= 0 || height <= 0)
		return (NULL);

	arr = malloc(height * sizeof(int *));

	if (arr == NULL)
		return (NULL);
	i = 0;
	j = 0;

	while (i < height)
	{
		arr[i] = malloc(width * sizeof(int));

		if (arr[i] == NULL)
		{
			while (i >= 0)
			{
				free(arr[i]);
				i--;
			}
			free(arr);
			return (NULL);
		}

		while (j < width)
		{
			arr[i][j] = 0;
			j++;
		}

		i++;
	}

	return (arr);
}

