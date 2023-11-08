#include "function_pointers.h"

/**
 * int_index - searches for an integer
 *
 * @array: pointer to array from which an integer is searched
 * @size: the number of elements in array
 * @cmp: function pointer to functions that do actual comparison
 *
 * Return: index of first element for which cmp function matches a value
 */

int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (!array || !cmp ||  size <= 0)
	{
		return (-1);
	}

	for (i = 0; i < size; i++)
	{
		if (cmp(array[i]) != 0)
		{
			return (i);
		}
	}

	return (-1);
}
