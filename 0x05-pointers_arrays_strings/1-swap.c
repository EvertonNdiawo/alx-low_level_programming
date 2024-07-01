#include "main.h"

/**
 * swap_int - swaps the values of two integers.
 *
 * @a: first integer.
 * @b: second integer.
 *
 * Return: void, nothing.
 */

void swap_int(int *a, int *b)
{
	int temp;

	temp = 0;
	temp = *a;
	*a = *b;
	*b = temp;
}
