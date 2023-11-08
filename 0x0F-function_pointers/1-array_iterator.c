#include "function_pointers.h"

/**
 * array_iterator - executes a function given as a parameter on each element
 * of an array.
 *
 * @array: pointer to array whose elements are to be executed
 * @size: the number of elements of array
 * @action: the function pointer to a function that is supposed to
 * execute each element of array pointed to by array.
 *
 * Return: Nothing
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int i;

	if (array == NULL || size == 0)
	{
		return;
	}

	for (i = 0; i < size; i++)
	{
		action(array[i]);
	}
}
