#include "main.h"

/**
 * swap_int - swaps values of two integers
 *
 * @a: first interger to swap with the other
 * @b: second integer to swap with the first one.
 *
 * return: nothing
 */
void swap_int(int *a, int *b)
{
	int swap_buffer;

	swap_buffer = *a;
	*a = *b;
	*b = swap_buffer;
}
