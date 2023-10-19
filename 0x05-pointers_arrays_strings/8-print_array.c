#include "main.h"
#include <stdio.h>

/**
 * print_array - prints n elements of an array of integers,
 * followed by a new line.
 *
 * @a: array whose elements are to be printed
 * @n: number of elements to be printed
 *
 * return: void
 */
void print_array(int *a, int n)
{
	int i = 0;

	while (i < n)
	{
		printf("%d, ", a[i]);

		i++;
	}
	printf("\n");
}
