#include "main.h"

/**
 * reverse_array - Reverses the content of an array of integers.
 *
 * @a: array of integers to be reversed.
 * @n: number of elements of the array.
 *
 * Return: nothing
 *
 */

void reverse_array(int *a, int n)
{
	int temp;
	int i, k;
	
	k = n - 1;

	for (i = 0; i < n / 2; i++)
	{
		temp = a[i];
		a[i] = a[k];
		a[k--] = temp;
	}
}
