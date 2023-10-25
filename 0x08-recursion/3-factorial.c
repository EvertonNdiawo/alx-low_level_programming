#include "main.h"

/**
 * factorial - Returns the factorial of a given number.
 *
 * @n: integer whose factorial is to be returned.
 *
 * Return: returns factorial of int n.
 */

int factorial(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	if (n == 0)
	{
		return (1);
	}

	return (n * factorial(n - 1));
}
