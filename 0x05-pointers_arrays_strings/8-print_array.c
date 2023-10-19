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

	for (i = 0; i < n; i++)
	{
		if (i == 0)
			printf("%d", a[i]);
		else
			printf("%d, ", a[i]);

	}

	printf("\n");
}
