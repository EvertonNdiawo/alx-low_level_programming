#include "main.h"

/**
 * factorial - returns the factorial of a given number.
 * @n: the number whose factorial is returned.
 *
 * Return: factorial of n(success), -1(failure, n is not positive).
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
