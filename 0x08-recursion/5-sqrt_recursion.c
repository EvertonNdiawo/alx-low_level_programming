#include "main.h"

/**
 * sqrt_helper - helper function for the _sqrt_recursion function.
 * @n: number whose square root is being dertermined.
 * @i: the potential square root under scrutiny.
 *
 * Return: the squareroot(success).
 */
int sqrt_helper(int n, int i)
{
	int result;

	result = i * i;

	if (result ==  n)
	{
		return (i);
	}
	if (result > n)
	{
		return (-1);
	}
	return (sqrt_helper(n, i + 1));
}

/**
 * _sqrt_recursion - Returns the natural square root of a number.
 * @n: number whose squareroot is to be detemined.
 *
 * Return: natural square root(success), -1(Number has no natural square root).
 */

int _sqrt_recursion(int n)
{
	return (sqrt_helper(n, 1));
}
